#include "camera.h"
#include "thread.h"
#include <QSemaphore>
#include <QDebug>
#include <QDir>
#include <QString>
#include <QQueue>
#include "unistd.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <iostream>

QSemaphore emptybuff(2);                   //空缓冲区信号量
QSemaphore fullbuff(0);                    //正在处理的缓冲区信号量
QMutex judge_connect_mutex;


cv::Mat img_buf1, img_buf2;                //抓取图像缓冲区
bool is_first_buf = true;                            //当前存入图像的缓冲区序号，初始化第1个缓冲区
extern int save_flag;
extern bool is_connected;
extern int area_threshold;
extern int delay_time;
extern bool empty_flag;
extern int blow_time;
extern int fd_img;
int fd_result;
bool loss_flag = false;

uint8_t temp_buf[(PULSE_NUMBER - TRIGGER_PULSE_NUMBER)*(VALVE_NUMBER/8)];                     //每次处理结果的最后100个脉冲数据暂存


extern void __stdcall onImageDataCallBackFunc(unsigned char * pData, MV_FRAME_OUT_INFO_EX* pFrameInfo, void* pUser)
{
    if (pFrameInfo)   //帧信息有效
    {
        cv::Mat img(pFrameInfo->nHeight, pFrameInfo->nWidth, CV_8UC3, pData);       //构造图像

        if(!emptybuff.tryAcquire())      //申请空缓冲区
        {
            loss_flag = true;

            std::cout << ">>> loss loss loss loss <<<" << std::endl;
            fflush(0);

            return;
        }

        if(is_first_buf)
        {
            img_buf1 = img;
            is_first_buf = false;          //切换缓冲区
            fullbuff.release();           //释放正在处理的缓冲区

            //qDebug()<<"_____buffer 1 get data_____";
        }
        else
        {
            img_buf2 = img;
            is_first_buf = true;
            fullbuff.release();

            //qDebug()<<"_____buffer 2 get data_____";
        }
    }
    return ;
}

extern void __stdcall onOfflineCallBackFunc(unsigned int nMsgType, void* pUser)
{
    qDebug()<<"camera offline";
    judge_connect_mutex.lock();
    is_connected = false;
    judge_connect_mutex.unlock();
    return;
}


Process_img::Process_img(QObject *parent) : QThread(parent), m_stop(false)
{

}


void Process_img::run()
{
//    qDebug()<<"deal thread:"<<QThread::currentThreadId();

    int n = fullbuff.available();              //申请处理使用的缓冲区
    if(n > 0)                                  //确保为0
    {
        fullbuff.acquire(n);
    }
    memset(temp_buf, 0, sizeof(temp_buf));
    while(1)
    {

        stop_mutex.lock();                     //是否停止
        if(m_stop)
        {
            stop_mutex.unlock();
            qDebug()<<"process thread quit_______________________";
            return;
        }
        stop_mutex.unlock();
        if(!fullbuff.tryAcquire())
        {
           continue;
        }

        if(is_first_buf)
        {
            emit send_image(img_buf2);                       //向主线程发送图片
            data_process(img_buf2);
//            cv::cvtColor(img_buf2, img_buf2, CV_BGRA2RGB);
//            save_img(img_buf2);
            emptybuff.release();
        }
        else
        {
            emit send_image(img_buf1);
            data_process(img_buf1);
//            cv::cvtColor(img_buf1, img_buf1, CV_BGRA2RGB);
//            save_img(img_buf1);
            emptybuff.release();
        }
    }
}


void Process_img::exitThread()
{
    stop_mutex.lock();
    m_stop = true;
    stop_mutex.unlock();
}

void Process_img::data_process(cv::Mat img)
{
    int ret = write(fd_img, img.data, img.rows*img.cols*3*sizeof(unsigned char));
    if(ret<0)
    {
        qDebug()<<"write error";
    }
    uint8_t buf[1024];

    fd_result = open(RESULT_PIPE, O_RDONLY);
    if(fd_result != -1)
    {
        ret = read(fd_result, buf, 1024);
    }
    close(fd_result);
    //qDebug()<<ret;

    bad_candy_box bounding_box;
    QVector<bad_candy_box> bounding_box_set;

    for(int i=0; i<ret; i+=8)
    {
        uint16_t pointA_x = buf[i];
        pointA_x <<= 8;
        pointA_x |= buf[i+1];
        bounding_box.pointA_x = pointA_x;

        uint16_t pointA_y = buf[i+2];
        pointA_y <<= 8;
        pointA_y |= buf[i+3];
        bounding_box.pointA_y = pointA_y;

        uint16_t pointB_x = buf[i+4];
        pointB_x <<= 8;
        pointB_x |= buf[i+5];
        bounding_box.pointB_x = pointB_x;

        uint16_t pointB_y = buf[i+6];
        pointB_y <<= 8;
        pointB_y |= buf[i+7];
        bounding_box.pointB_y = pointB_y;
        bounding_box_set << bounding_box;
    }
    emit send_res(bounding_box_set);

//    if(ret = 0)
//    {
//        empty_flag = true;
//    }
//    else
//    {
//        empty_flag = false;
//    }

    unsigned char plc_data[PULSE_NUMBER][VALVE_NUMBER];
    memset(plc_data, 0, sizeof(plc_data));           //内存清空

    for(int i =0; i < bounding_box_set.size(); i++)  //循环遍历坐标对
    {
        int area = abs(bounding_box_set[i].pointB_y - bounding_box_set[i].pointA_y) * abs(bounding_box_set[i].pointB_x - bounding_box_set[i].pointA_x);
        if(area< area_threshold)
        {
            continue;
        }
        //计算阀序号和起始脉冲
//        qDebug() << bounding_box_set[i].pointA_x << bounding_box_set[i].pointB_x;
        int valve_index1 = (int)((bounding_box_set[i].pointA_x) / VALVE_INTERVAL);
        int valve_index2 = (int)((bounding_box_set[i].pointB_x)/ VALVE_INTERVAL);
        //qDebug() << "aaa:" << valve_index1 << valve_index2;
//        int  temp = VALVE_NUMBER - 1 - valve_index1;
//        valve_index1 = VALVE_NUMBER - 1 - valve_index2;
//        valve_index2 = temp;
        int start = (int)(bounding_box_set[i].pointA_y / TIME_INTERVAL);
        int end = (int)(bounding_box_set[i].pointB_y / TIME_INTERVAL);
        //qDebug() << "bbb:" << valve_index1 << valve_index2;
        // 当3个通道时，自动忽略两侧通道
//        if(valve_index2 - valve_index1 >1)
//        {
//            valve_index1++;
//            valve_index2 = valve_index1;
//        }
        // 延长过小的糖果缺陷所需脉冲个数
        int defect_size = end - start;
        //qDebug()<<blow_time;
        if(defect_size < blow_time)
        {
            int compensation = (blow_time - defect_size) / 2;

            if((start - compensation > 0) && ((end + compensation) < PULSE_NUMBER - 1))
            {
                start = start - compensation;
                end = end + compensation;
            }
            if((start - compensation) < 0)
            {
                start = 0;
                end = end + compensation + (compensation - start);
            }
            if((end + compensation) > (PULSE_NUMBER - 1))
            {
                end = PULSE_NUMBER - 1;
                start = start - compensation -(compensation - (PULSE_NUMBER - 1 - end));
            }
        }

        //qDebug() << "valve_index1" << valve_index1 << " valve_index2" <<valve_index2 << " start: " << start << " end: " << end;

        // 点坐标系变换，对应喷阀和脉冲位置1
        for(int m = valve_index1; m < valve_index2+1; m++)
        {
            for(int n = start; n < end; n++)
            {
                plc_data[n][m] = 1;
            }
        }
    }


    uint8_t send_buf[(VALVE_NUMBER/8) * PULSE_NUMBER];      //每8个阀合并，一个脉冲时刻40个阀压缩为5个uint8，一次图像高度为600个脉冲，总共3000个uint8
    uint8_t temp = 0x00;
    for(int i = 0; i < PULSE_NUMBER; i++)
    {
        for (int j = (VALVE_NUMBER/8) - 1; j >=0; j--)
        {
            for(int k = 0; k < 8 ; k++)
                temp =  (temp << 1) | (plc_data[i][j*8 + k]);
            send_buf[i * (VALVE_NUMBER/8) + j] = temp;
        }
    }

    for(int i=0; i < (PULSE_NUMBER - TRIGGER_PULSE_NUMBER)*(VALVE_NUMBER/8); i++)     //这次图像的前100个脉冲与上次图像的后100脉冲取或运算，合并重合部分的两次处理结果
    {
        send_buf[i] &= temp_buf[i];
    }

    memcpy(temp_buf, &send_buf[TRIGGER_PULSE_NUMBER*(VALVE_NUMBER/8)], (PULSE_NUMBER - TRIGGER_PULSE_NUMBER)*(VALVE_NUMBER/8));        //保存这次成像的后100脉冲处理结果

    emit send_tab(send_buf);                     //通知主线程向下位机发送结果
}


void Process_img::save_img(cv::Mat img)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyyMMddhhmmss");
    QString filepath = SAVE_IMAGE_PATH + str + ".bmp";
    cv::imwrite(filepath.toLatin1().data(), img);
}



Adjust_para::Adjust_para(QObject *parent) : QThread(parent), m_stop(false), correct_flag(false)
{

}


void Adjust_para::run()
{
    int n = fullbuff.available();
    if(n > 0)
    {
        fullbuff.acquire(n);
    }

    while(1)
    {
        stop_mutex.lock();
        if(m_stop)
        {
            stop_mutex.unlock();
            return;
        }
        stop_mutex.unlock();
        if(!fullbuff.tryAcquire())
        {
            continue;
        }

        if(is_first_buf)
        {
            emit send_image_debug(img_buf2);
            correct_mutex.lock();
            if(correct_flag)
            {
                cv::imwrite("./correct.bmp", img_buf2);

                correct_flag = false;
            }
            correct_mutex.unlock();
            emptybuff.release();
        }
        else
        {
            emit send_image_debug(img_buf1);
            correct_mutex.lock();
            if(correct_flag)
            {
                cv::imwrite("./correct.bmp", img_buf1);

                correct_flag = false;
            }
            correct_mutex.unlock();
            emptybuff.release();
        }
    }
}


void Adjust_para::exitThread()
{
    stop_mutex.lock();
    m_stop = true;
    stop_mutex.unlock();
}


void Adjust_para::get_correct_siganl()
{
    correct_mutex.lock();
    correct_flag = true;
    correct_mutex.unlock();
}


//test_thread
Grab_img::Grab_img(QObject *parent) : QThread(parent)
{
    is_stop = false;
}

void Grab_img::run()
{
    int n = emptybuff.available();
    if(n < 2)
    {
        emptybuff.release(2 - n);
    }

    while (1)
    {
        stop_mutex.lock();
        if(is_stop)
        {
            stop_mutex.unlock();
            qDebug()<<"grab thread will exit";
            return;
        }
        stop_mutex.unlock();

        if(!emptybuff.tryAcquire())
        {
            continue;
        }

        if(is_first_buf)
        {
            char file_name[128] = "20220524085547.bmp";
            char test_img_path[128] = TEST_IMAGE_PATH;
            strcat(test_img_path, file_name);
            img_buf1 = cv::imread(test_img_path, 1);
            is_first_buf = false;
            fullbuff.release();
        }
        else
        {
            char file_name[128] = "20220524091200.bmp";
            char test_img_path[128] = TEST_IMAGE_PATH;
            strcat(test_img_path, file_name);
            img_buf2 = cv::imread(test_img_path, 1);
            is_first_buf = true;
            fullbuff.release();
        }
        msleep(200);
    }
}


void Grab_img::thread_quit()
{
    stop_mutex.lock();
    is_stop = true;
    stop_mutex.unlock();
}

