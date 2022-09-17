#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QPainter>
#include <QPen>
#include <QSemaphore>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>
#include <QDir>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include "opencv2/imgproc/types_c.h"
#include <QTimer>

#define BTN_ENABLIE_STYTLE "QPushButton{color:rgb(255, 255, 255); background-color:rgb(34, 139, 34);border-radius:15px;}"
#define BTN_DISABLIE_STYTLE "QPushButton{color:rgb(255, 255, 255); background-color:rgb(136, 138, 133);border-radius:15px;}"

#define IMG_PIPE "/tmp/img_fifo.pipe"
#define RESULT_PIPE "/tmp/result_fifo.pipe"

bool is_connected = false;
int save_flag;                  //保存标志位
int area_threshold;             //面积最小阈值
int delay_time;                 //延时时间
int blow_time;                  //吹气量
int rigorous;
bool empty_flag;                //
extern QSemaphore emptybuff;
extern bool loss_flag;
int fd_img;                    //管道文件描述符 图片传递
//int fd_result;                 //管道文件描述符 回传结果

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Widget);
    this->showFullScreen();
    init_window();
    connect_signals();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::init_window()
{
    resize(1024, 768);

    ui->tabWidget->findChildren<QTabBar*>().at(0)->hide();
    ui->tabWidget->setCurrentIndex(0);

    QList<QPushButton*> button = findChildren<QPushButton*>();       //设置所有按键不为焦点，设置按钮样式和是否使能
    for(int i=0; i<button.length(); i++)
    {
        button[i]->setFocusPolicy(Qt::NoFocus);
        button[i]->setStyleSheet(BTN_ENABLIE_STYTLE);
    }
    ui->btnStop->setStyleSheet(BTN_DISABLIE_STYTLE);
    ui->btnStop->setEnabled(false);
    ui->btn_correct->setStyleSheet(BTN_DISABLIE_STYTLE);
    ui->btn_correct->setEnabled(false);
    ui->btn_close->setStyleSheet("QPushButton{color:rgb(255, 255, 255); background-color:rgb(255, 0, 0);border-radius:15px;}");


    ui->et_spinBox->setRange(0, 9999500.00);
    //ui->et_spinBox->setDecimals(2);
    ui->et_spinBox->setSingleStep(0.01);
    ui->gain_spinBox->setRange(0, 16.98);
    //ui->gain_spinBox->setDecimals(2);
    ui->gain_spinBox->setSingleStep(0.01);
    ui->white_spinBox->setRange(0, 4095);

    ui->delay_spinBox->setRange(0, 5000);
    ui->area_spinBox->setRange(0, 10000);
    ui->blow_time_spinbox->setRange(0, 148);
    ui->rigorous_spinbox->setRange(1, 99);

    channel = 1;
    ui->label_channel->setText(QString::number(channel));
    ui->label_stop->setText(" ");

    m_camera = new Camera;
    m_camera->init_camera();

    server = new QTcpServer();
    server->listen(QHostAddress::Any, 13452);

    set_candy_select_box();
    load_para_config();

    if(access(IMG_PIPE, F_OK) == -1)
    {
        int res = mkfifo(IMG_PIPE, 0755);
        if(res<0)
        {
            qDebug()<<"create img fifo failed";
        }
    }
    if(access(RESULT_PIPE, F_OK) == -1)
    {
        int res = mkfifo(RESULT_PIPE, 0755);
        if(res<0)
        {
            qDebug()<<"create img fifo failed";
        }
    }

    fd_img = open(IMG_PIPE, O_WRONLY);
    if(fd_img<0)
    {
        qDebug()<<"open img fifo failed";
    }
//    fd_result = open(RESULT_PIPE, O_RDONLY);
//    if(fd_result<0)
//    {
//        qDebug()<<"open result fifo failed";
//    }


    ui->MCU_status->setStyleSheet("QLabel{background-color:rgb(255,0,0);}");
    ui->MCU_status->setText(QString::fromLocal8Bit("未连接"));
}

void Widget::connect_signals()
{
    //Tab_1
    connect(ui->btn_Tab1_2, SIGNAL(clicked()), this, SLOT(On_btn_Tab1_2_click()));
    connect(ui->btn_Tab1_3, SIGNAL(clicked()), this, SLOT(On_btn_Tab1_3_click()));

    //Tab_2
    connect(ui->btnStart, SIGNAL(clicked()), this, SLOT(On_btnStart_click()));
    connect(ui->btnStop, SIGNAL(clicked()), this, SLOT(On_bthStop_click()));

    connect(ui->btn_Tab2_1, SIGNAL(clicked()), this, SLOT(On_btn_Tab2_1_click()));
    connect(ui->btn_Tab2_5, SIGNAL(clicked()), this, SLOT(On_btn_Tab2_5_click()));

    //Tab_3
    connect(ui->btnValveTest, SIGNAL(clicked()), this, SLOT(On_btnValveTest_click()));
    connect(ui->btn_Tab3_1,SIGNAL(clicked()), this, SLOT(On_btn_Tab3_1_click()));
    connect(ui->btn_Tab3_4,SIGNAL(clicked()), this, SLOT(On_btn_Tab3_4_click()));
    connect(ui->btn_Tab3_6,SIGNAL(clicked()), this, SLOT(On_btn_Tab3_6_click()));
    connect(ui->btnImportImg, SIGNAL(clicked()), this, SLOT(On_btnImportImg_click()));
    connect(ui->btnSaveImg, SIGNAL(clicked()), this, SLOT(On_btnSaveImg_click()));
    connect(ui->btnImportModel, SIGNAL(clicked()), this, SLOT(On_btnImportModel_click()));
    connect(ui->btnModifyPasswd, SIGNAL(clicked()), this, SLOT(On_btnModifyPasswd_click()));
    connect(ui->btnManualValveTest, SIGNAL(clicked()), this, SLOT(On_btnManualValveTest()));
    //Tab_4
    connect(ui->btn_correct, SIGNAL(clicked()), this, SLOT(On_btn_correct_click()));
    connect(ui->btn_getcorrect, SIGNAL(clicked()), this, SLOT(On_btn_getcorrect_click()));
    connect(ui->btn_setcamerapara, SIGNAL(clicked()), this, SLOT(On_btn_setcamerapara_click()));
    connect(ui->btn_Tab4_3, SIGNAL(clicked()), this, SLOT(On_btn_Tab4_3_click()));

    //Tab_5
    connect(ui->btn_Tab5_3, SIGNAL(clicked()), this, SLOT(On_btn_Tab5_3_click()));
    connect(ui->btn_set_thereshold, SIGNAL(clicked()), this, SLOT(On_btn_set_thereshold_click()));

    //Tab_6
    connect(ui->btn_Tab6_3, SIGNAL(clicked()), this, SLOT(On_btn_Tab6_3_click()));

    connect(ui->candy_select_box, SIGNAL(currentIndexChanged(int)), this, SLOT(On_candy_select_box_index_change(int)));
    connect(server, SIGNAL(newConnection()), this, SLOT(ServerNewConnection()));
    connect(ui->btn_close, SIGNAL(clicked()), this, SLOT(On_btn_close_click()));

    connect(ui->btn1, SIGNAL(clicked()), this, SLOT(On_btn1_clicked()));
    connect(ui->btn2, SIGNAL(clicked()), this, SLOT(On_btn2_clicked()));
    connect(ui->btn3, SIGNAL(clicked()), this, SLOT(On_btn3_clicked()));
    connect(ui->btn4, SIGNAL(clicked()), this, SLOT(On_btn4_clicked()));
    connect(ui->btn5, SIGNAL(clicked()), this, SLOT(On_btn5_clicked()));
    connect(ui->btn6, SIGNAL(clicked()), this, SLOT(On_btn6_clicked()));
    connect(ui->btn7, SIGNAL(clicked()), this, SLOT(On_btn7_clicked()));
    connect(ui->btn8, SIGNAL(clicked()), this, SLOT(On_btn8_clicked()));
    connect(ui->btn9, SIGNAL(clicked()), this, SLOT(On_btn9_clicked()));
    connect(ui->btn0, SIGNAL(clicked()), this, SLOT(On_btn0_clicked()));
    connect(ui->btn_DEL, SIGNAL(clicked()), this, SLOT(On_btn_DEL_clicked()));

    //Tab 7
    connect(ui->btn_Tab7_3, SIGNAL(clicked()), this, SLOT(On_btn_Tab7_3_click()));
    connect(ui->btn_channel_up, SIGNAL(clicked()), this, SLOT(On_btnchannelup_click()));
    connect(ui->btn_channel_down, SIGNAL(clicked()), this, SLOT(On_btnchanneldown_click()));
    connect(ui->btn_channel_send, SIGNAL(clicked()), this, SLOT(On_btn_channel_send_clicked()));
//    connect(ui->btn_1, SIGNAL(clicked()), this, SLOT(On_btn_1_clicked()));
//    connect(ui->btn_2, SIGNAL(clicked()), this, SLOT(On_btn_2_clicked()));
//    connect(ui->btn_3, SIGNAL(clicked()), this, SLOT(On_btn_3_clicked()));
//    connect(ui->btn_4, SIGNAL(clicked()), this, SLOT(On_btn_4_clicked()));
//    connect(ui->btn_5, SIGNAL(clicked()), this, SLOT(On_btn_5_clicked()));
//    connect(ui->btn_6, SIGNAL(clicked()), this, SLOT(On_btn_6_clicked()));
//    connect(ui->btn_7, SIGNAL(clicked()), this, SLOT(On_btn_7_clicked()));
//    connect(ui->btn_8, SIGNAL(clicked()), this, SLOT(On_btn_8_clicked()));
//    connect(ui->btn_9, SIGNAL(clicked()), this, SLOT(On_btn_9_clicked()));
//    connect(ui->btn_0, SIGNAL(clicked()), this, SLOT(On_btn_0_clicked()));
//    connect(ui->btn_dot, SIGNAL(clicked()), this, SLOT(On_btn_dot_clicked()));
//    connect(ui->btn_del, SIGNAL(clicked()), this, SLOT(On_btn_del_clicked()));
//    connect(ui->btn_clr, SIGNAL(clicked()), this, SLOT(On_btn_clr_clicked()));
}

void Widget::On_btn_Tab1_2_click()
{
    ui->tabWidget->setCurrentIndex(1);
}

void Widget::On_btn_Tab1_3_click()
{
    passwd_dialog = new PasswdDialog();
    connect(passwd_dialog, SIGNAL(send_password(QString)), this, SLOT(judge_password(QString)));
    connect(this, SIGNAL(wrong_passwd()), passwd_dialog, SLOT(deal_wrong_passwd()));
    passwd_dialog->show();
}

void Widget::On_btnStart_click()
{
   process_img = new Process_img(this);
   //grab_img = new Grab_img(this); //my_test_thread
   connect(process_img, SIGNAL(send_image(cv::Mat)), this, SLOT(showimage(cv::Mat)),Qt::BlockingQueuedConnection);
   connect(process_img, SIGNAL(send_res(QVector<bad_candy_box>)), this, SLOT(drawbox(QVector<bad_candy_box>)), Qt::BlockingQueuedConnection);
   connect(process_img, SIGNAL(send_tab(uint8_t*)), this, SLOT(get_tab(uint8_t*)), Qt::BlockingQueuedConnection);

   int n = emptybuff.available();
   if(n < 2)
   {
       emptybuff.release(2 - n);
   }
   //grab_img->start();
   m_camera->set_acquisition_mode();
   m_camera->start_capture();
   process_img->start();

   QString delay_time = ui->delay_spinBox->text();
   QByteArray ba = delay_time.toLatin1();
   char* dt = ba.data();
   char send_tab[12];
   qDebug() << dt[0] << dt[1] <<dt[2] << dt[3];
   send_tab[0] = 0xAA;
   send_tab[1] = 0x00;
   send_tab[2] = 0x06;
   send_tab[3] = 's';
   send_tab[4] = 'd';
//   send_tab[5] = '2';
//   send_tab[6] = '0';
//   send_tab[7] = '0';
//   send_tab[8] = '0';
   send_tab[5] = dt[0];
   send_tab[6] = dt[1];
   send_tab[7] = dt[2];
   send_tab[8] = dt[3];
   send_tab[9] = 0xFF;
   send_tab[10] = 0xFF;
   send_tab[11] = 0xBB;
   socket->write((const char*)send_tab, 12);

   send_tab[0] = 0xAA;
   send_tab[1] = 0x00;
   send_tab[2] = 0x05;
   send_tab[3] = 's';
   send_tab[4] = 'c';
   send_tab[5] = '5';
   send_tab[6] = '0';
   send_tab[7] = '0';
   send_tab[8] = 0xFF;
   send_tab[9] = 0xFF;
   send_tab[10] = 0xBB;
   socket->write((const char*)send_tab, 11);

   send_tab[0] = 0xAA;
   send_tab[1] = 0x00;
   send_tab[2] = 0x04;
   send_tab[3] = 's';
   send_tab[4] = 'v';
   send_tab[5] = '1';
   send_tab[6] = '0';
   send_tab[7] = 0xFF;
   send_tab[8] = 0xFF;
   send_tab[9] = 0xBB;
   socket->write((const char*)send_tab, 10);

   send_tab[0] = 0xAA;
   send_tab[1] = 0x00;
   send_tab[2] = 0x03;
   send_tab[3] = 's';
   send_tab[4] = 't';
   send_tab[5] = 0xFF;
   send_tab[6] = 0xFF;
   send_tab[7] = 0xFF;
   send_tab[8] = 0xBB;
   socket->write((const char*)send_tab, 9);

   ui->btnStart->setStyleSheet(BTN_DISABLIE_STYTLE);
   ui->btnStart->setEnabled(false);
   ui->btnStop->setStyleSheet(BTN_ENABLIE_STYTLE);
   ui->btnStop->setEnabled(true);
   ui->btn_Tab1_3->setStyleSheet(BTN_DISABLIE_STYTLE);
   ui->btn_Tab1_3->setEnabled(false);
   ui->btn_Tab2_5->setStyleSheet(BTN_DISABLIE_STYTLE);
   ui->btn_Tab2_5->setEnabled(false);


}


void Widget::On_bthStop_click()
{
    ui->label_stop->setText("stopping...");
    qApp->processEvents();
    disconnect(process_img, SIGNAL(send_image(cv::Mat)), this, SLOT(showimage(cv::Mat)));
    disconnect(process_img, SIGNAL(send_res(QVector<bad_candy_box>)), this, SLOT(drawbox(QVector<bad_candy_box>)));
    disconnect(process_img, SIGNAL(send_tab(uint8_t*)), this, SLOT(get_tab(uint8_t*)));
//
//    grab_img->thread_quit();
//
    char send_tab[9];
    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x03;
    send_tab[3] = 's';
    send_tab[4] = 'p';
    send_tab[5] = 0xFF;
    send_tab[6] = 0xFF;
    send_tab[7] = 0xFF;
    send_tab[8] = 0xBB;

    socket->write((const char*)send_tab, 9);

    sleep(1);
    m_camera->stop_capture();
    sleep(3);
    
    
    QMessageBox box;
    box.setText("Stopping...");

    box.setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);//去掉边框

    box.setStandardButtons(0);                                                        //不要按键

    box.setStyleSheet("QLabel{min-width: 250px;min-height: 120px;font-size:40px;}");
    QTimer::singleShot(3000, &box, SLOT(accept()));                                   //3秒自动关闭
    box.exec();

    process_img->exitThread();
    process_img->wait();

//
    //my_test_thread
//    grab_img->wait();
//    if(grab_img->isFinished())
//    {
//        qDebug()<<"grab thread finish";
//    }
//

    if(process_img->isFinished())
    {
        qDebug()<<"process thread finish";
    }


//
//    delete grab_img;
//

    delete process_img;

    qDebug() << "Stop Success!";
    ui->btnStop->setStyleSheet(BTN_DISABLIE_STYTLE);
    ui->btnStop->setEnabled(false);

    ui->btnStart->setStyleSheet(BTN_ENABLIE_STYTLE);
    ui->btnStart->setEnabled(true);
    ui->btn_Tab1_3->setStyleSheet(BTN_ENABLIE_STYTLE);
    ui->btn_Tab1_3->setEnabled(true);
    ui->btn_Tab2_5->setStyleSheet(BTN_ENABLIE_STYTLE);
    ui->btn_Tab2_5->setEnabled(true);


    ui->showlabel->clear();
    ui->label_stop->setText(" ");
}

void Widget::On_btn_Tab2_1_click()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Widget::On_btn_Tab2_5_click()
{
    qDebug()<<"adjust";
    ui->tabWidget->setCurrentIndex(4);
}

void Widget::On_btnValveTest_click()
{
    qDebug()<<"valvetest";
    char send_tab[9];
    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x03;
    send_tab[3] = 't';
    send_tab[4] = 'e';
    send_tab[5] = 0xFF;
    send_tab[6] = 0xFF;
    send_tab[7] = 0xFF;
    send_tab[8] = 0xBB;
    socket->write((const char*)send_tab, 9);
}

void Widget::On_btn_Tab3_1_click()
{
    ui->tabWidget->setCurrentIndex(0);
}

void Widget::On_btn_Tab3_4_click()
{
    ui->tabWidget->setCurrentIndex(3);
    adjust_para = new Adjust_para(this);
    connect(adjust_para, SIGNAL(send_image_debug(cv::Mat)), this, SLOT(showimage_test(cv::Mat)),Qt::BlockingQueuedConnection);
    connect(this, SIGNAL(correct_signal()), adjust_para, SLOT(get_correct_siganl()));
    int n = emptybuff.available();
    if(n < 2)
    {
        emptybuff.release(2 - n);
    }
    Camera_param param = m_camera->get_param();
    ui->et_spinBox->setValue(param.exposure_time);
    ui->white_spinBox->setValue(param.white_balance_ratio);
    ui->gain_spinBox->setValue(param.gain);
    m_camera->set_test_acquisition_mode();
    m_camera->start_capture();
//    grab_img = new Grab_img(this); //my_test_thread
//    grab_img->start();             //my_test_thread
    adjust_para->start();
}

void Widget::On_btn_Tab3_6_click()
{
    ui->tabWidget->setCurrentIndex(5);
}

void Widget::On_btn_correct_click()
{
    qDebug()<<"correct";
//    cv::Mat correct_image = cv::imread("./correct.bmp", 1);
//    m_correct->get_rgb(correct_image);
//    m_correct->cal_correction_ratio();
//    m_correct->is_corrected=true;
}

void Widget::On_btn_getcorrect_click()
{
    qDebug()<<"get correct";
    //emit correct_signal();
    ui->btn_correct->setStyleSheet(BTN_ENABLIE_STYTLE);
    ui->btn_correct->setEnabled(true);
}

void Widget::On_btn_setcamerapara_click()
{
    Camera_param sets;
    sets.exposure_time = ui->et_spinBox->text().toFloat();
    sets.gain = ui->gain_spinBox->text().toFloat();
    sets.white_balance_ratio = ui->white_spinBox->text().toInt();

    qDebug()<<sets.exposure_time;
    m_camera->set_param(sets);

    m_camera->stop_capture();
    usleep(1000);

    m_camera->get_param();
    if(!m_camera->save_config_file())
    {
        qDebug()<<"SAVE FAILED";
    }
    m_camera->start_capture();
}

void Widget::On_btn_Tab4_3_click()
{
    disconnect(adjust_para, SIGNAL(send_image_debug(cv::Mat)), this, SLOT(showimage_test(cv::Mat)));
    disconnect(this, SIGNAL(correct_signal()), adjust_para, SLOT(get_correct_siganl()));
    m_camera->stop_capture();
    adjust_para->exitThread();
    //grab_img->thread_quit();
    adjust_para->wait();
//    grab_img->wait();
//    if(grab_img->isFinished())
//    {
//        qDebug()<<"grab thread finish";
//    }
    if(adjust_para->isFinished())
    {
        qDebug()<<"process thread finish";
    }
//    delete grab_img;
    delete adjust_para;

    ui->tabWidget->setCurrentIndex(2);
}

void Widget::On_btn_Tab5_3_click()
{
    ui->tabWidget->setCurrentIndex(1);
}


void Widget::On_btn_set_thereshold_click()
{
    area_threshold = ui->area_spinBox->text().toInt();
    delay_time = ui->delay_spinBox->text().toInt();
    blow_time = ui->blow_time_spinbox->text().toInt();
    rigorous = ui->rigorous_spinbox->text().toInt();
    Para para = {0};
    int fd = open(CONFIG_PATH,O_RDWR);
    read(fd, &para, sizeof(para));
    lseek(fd, 0, SEEK_SET);


    char rigorous_buf[8];
    sprintf(rigorous_buf, "RL:%d", rigorous);
    qDebug() << rigorous_buf;
    write(fd_img, rigorous_buf, strlen(rigorous_buf));

    if(para.delay == delay_time)
    {
        para.defect_area = area_threshold;
        para.delay = delay_time;
        para.blow_time = blow_time;
        para.rigorous = rigorous;
        write(fd, &para, sizeof(para));
        ::close(fd);
    }
    else
    {
        para.defect_area = area_threshold;
        para.delay = delay_time;
        para.blow_time = blow_time;
        para.rigorous = rigorous;
        write(fd, &para, sizeof(para));
        ::close(fd);
//        uint16_t x = (uint16_t)delay_time;
//        uint8_t high = (x>>8)&0xFF;
//        uint8_t low = x&0xFF;
//        uint8_t send_tab[5]={0xAA, 0xBB, high, low, 0xCC};
//        if(socket->isWritable())
//        {
//            socket->write((const char*)send_tab, 5);
//         }
//        else
//        {
//            qDebug() << "Socket is not writable!!!!!!!!!!";
//        }
    }
    QMessageBox box;
    box.setText("set success");
    box.setStyleSheet("QLabel{min-width: 250px;min-height: 120px;font-size:40px;} QPushButton{width:100px;font-size:50px;}");
    box.exec();
}

void Widget::On_btn_Tab6_3_click()
{
    ui->tabWidget->setCurrentIndex(2);
}

void Widget::judge_password(QString password)
{
    QString s(passwd);
    if(password == s)
    {
        passwd_dialog->close();
        ui->tabWidget->setCurrentIndex(2);
    }
    else
    {
        QMessageBox::warning(this, "", QString::fromLocal8Bit("密码错误"));
        emit wrong_passwd();
    }
}

void Widget::showimage(cv::Mat img)
{
    static int counter = 0;
    if(save_flag && counter == 0)
    {
        QDateTime time = QDateTime::currentDateTime();
        QString str = time.toString("yyyyMMddhhmmss");
        QString filepath = SAVE_IMAGE_PATH + str + ".bmp";
        qDebug()<<filepath;
        cv::imwrite(filepath.toLatin1().data(), img);
        //counter = 0;
    }
    //counter++;

    cv::cvtColor(img, img, CV_BGRA2RGB);
    const unsigned char *pSrc = (const unsigned char*)img.data;
    QImage image(pSrc, img.cols, img.rows, img.step, QImage::Format_RGB888);
    pix = QPixmap::fromImage(image.scaled(ui->showlabel->width(),ui->showlabel->height(),Qt::KeepAspectRatio));
    ui->showlabel->setPixmap(pix);
    ui->showlabel->show();
}

void Widget::drawbox(QVector<bad_candy_box> bounding_box)
{
    QPainter painter(&pix);
    QPen pen(QColor(255, 0, 0), 1);
    painter.setPen(pen);
    QVector<QRect> rects;
    int size = bounding_box.size();
    for(int i = 0; i < size; i++)
    {
        int  width = (bounding_box[i].pointB_x - bounding_box[i].pointA_x) * (ui->showlabel->width() / 2376.0f);
        int height = (bounding_box[i].pointB_y - bounding_box[i].pointA_y) * (ui->showlabel->width() / 2376.0f);
        QRect rect(bounding_box[i].pointA_x* (pix.width() / 2376.0f), bounding_box[i].pointA_y* (pix.height() / 584.0f), width, height);
        rects << rect;
    }

    painter.drawRects(rects);
    ui->showlabel->setPixmap(pix);

//    if(empty_flag == false)
//    {
//        QDateTime time = QDateTime::currentDateTime();648
//        QString str = time.toString("yyyyMMddhhmmss");
//        QString filepath = RESULT_PATH + str + ".bmp";.
//#ifdef DEBUG
//        cv::imwrite(filepath.toLatin1().data(), defect_pic);
//#else
//        pix.save(filepath);
//#endif
//        empty_flag = true;
//    }

    if(loss_flag)
    {
        uint8_t buf[2500] = {0};
        socket->write((const char*)buf, 2500);
        loss_flag = false;
    }
}

void Widget::showimage_test(cv::Mat img)
{
    cv::cvtColor(img, img, CV_BGRA2RGB);
    cv::Mat img_gray;
    cv::cvtColor(img, img_gray, CV_RGB2GRAY);
    int value = 0;
    for(int i=300; i<400; i++)
    {
        for(int j=300; j<400; j++)
        {
            value = value + img_gray.ptr<uchar>(i)[j];
        }
    }
    float brightness = value/10000.0;
    ui->label_2->setText(QString("%1").arg(brightness));
    const unsigned char *pSrc = (const unsigned char*)img.data;
    QImage image(pSrc, img.cols, img.rows, img.step, QImage::Format_RGB888);

    pix_test = QPixmap::fromImage(image.scaled(ui->showlabel_set->width(),ui->showlabel_set->height(),Qt::KeepAspectRatio));
    QPainter painter(&pix_test);
    QPen pen(QColor(255,0,0), 1);
    painter.setPen(pen);

    QVector<QLine> m_lines;
    QLine a((pix_test.width()/2+35), pix_test.height()/2, (pix_test.width()/2-35), pix_test.height()/2);
    QLine b((pix_test.width()/2), pix_test.height()/2+35, (pix_test.width()/2), pix_test.height()/2-35);
    QLine c((int)((907*pix_test.width())/2300), 0, (int)((907*pix_test.width())/2300), pix_test.height());
    QLine d((int)((1493*pix_test.width())/2300), 0, (int)((1493*pix_test.width())/2300), pix_test.height());
    m_lines << a << b << c << d;
    painter.drawLines(m_lines);
    ui->showlabel_set->setPixmap(pix_test);
}

void Widget::ServerNewConnection()
{
    socket = server->nextPendingConnection();
    ui->MCU_status->setStyleSheet("QLabel{background-color:rgb(0,255,0);}");
    ui->MCU_status->setText(QString::fromLocal8Bit("已连接"));
    qDebug()<<"new connection";

    //char send_buf[13] = {0xAA, 0x00, 0x07, 'p', 'o', 'w', 'e', 'r', 'o', 'n', 0xFF, 0xFF, 0xBB};
    //socket->write((const char*)send_buf, 13);
}

void Widget::get_tab(uint8_t* send_buff)
{
    char buf[TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8) + 8];
    buf[0] = 0xAA;
    buf[1] = 0x0B;
    buf[2] = 0xBA;
    buf[3] = 'd';
    buf[4] = 'a';
    buf[3005] = 0xFF;
    buf[3006] = 0xFF;
    buf[3007] = 0xBB;
    memcpy(buf+5, send_buff, TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8));
    socket->write((const char*)buf, TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8) + 8);
}


void Widget::load_para_config()
{
    int fd = open(CONFIG_PATH, O_CREAT|O_RDWR, 0666);
    Para para;
    memset(&para, 0, sizeof(para));
    int ret = read(fd, &para, sizeof(para));
    if(ret==0)                              //读不到东西，表示程序第一次运行，需要设置默认参数，写入文件的是定义在widget.h开始的Para结构体，直接写二进制
    {
        //qDebug()<<"DEFAULT CONFIG";
        strcpy(para.passwd, "123456");
        para.delay = 3110;
        para.defect_area = 10;
        para.save_img = 1;
        para.blow_time = 140;
        para.rigorous = 50;

        write(fd, &para, sizeof(para));                    //写入默认配置参数

        ui->delay_spinBox->setValue(para.delay);
        ui->area_spinBox->setValue(para.defect_area);
        ui->blow_time_spinbox->setValue(para.blow_time);
        ui->rigorous_spinbox->setValue(para.rigorous);
        strcpy(passwd, para.passwd);
        save_flag = para.save_img;
        area_threshold = para.defect_area;
        delay_time = para.delay;
        blow_time = para.blow_time;
        rigorous = para.rigorous;
        ui->btnSaveImg->setText(QString::fromLocal8Bit("不保存图片"));
        //qDebug()<<area_threshold<<delay_time<<blow_time;
    }
    else                                                   //读到东西，加载文件内容到全局变量中
    {
        //qDebug()<<"AVAILABLE CONFG";
        ui->delay_spinBox->setValue(para.delay);
        ui->area_spinBox->setValue(para.defect_area);
        ui->blow_time_spinbox->setValue(para.blow_time);
        ui->rigorous_spinbox->setValue(para.rigorous);
        save_flag = para.save_img;
        area_threshold = para.defect_area;
        delay_time = para.delay;
        blow_time = para.blow_time;
        rigorous = para.rigorous;
        strcpy(passwd, para.passwd);
        if(save_flag == 1)
        {
            ui->btnSaveImg->setText(QString::fromLocal8Bit("不保存图片\nDon't save"));
        }
        else
        {
            ui->btnSaveImg->setText(QString::fromLocal8Bit("保存图片\nSave"));
        }
        //qDebug()<<area_threshold<<delay_time<<blow_time;

    }
    ::close(fd);
}


void Widget::On_btnImportImg_click()
{
    QString file = QFileDialog::getExistingDirectory(this, "", SAVE_IMAGE_PATH, QFileDialog::DontUseCustomDirectoryIcons|QFileDialog::DontUseSheet|QFileDialog::ReadOnly|QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
    if(file == "")
    {
        return;
    }
    //考虑路径带空格的情况，分离空格隔开的字符串，加'\'转义空格，重新拼成路径
    QStringList list = file.split("\ ");
    QString filepath = "";
    for(int i =0; i<list.size(); i++)
    {
        if(i == list.size()-1)              //最后一个不加'\'
        {
            filepath = filepath + list[i];
            break;
        }
        filepath = filepath + list[i] + "\\\ ";
    }
    qDebug()<<filepath;
    QString str = SAVE_IMAGE_PATH;
    QString command = "cp " + str + "*\ " + filepath;
    QMessageBox box;
    box.setText("export?");
    box.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    box.setStyleSheet("QLabel{min-width: 250px;min-height: 120px;font-size:40px;} QPushButton{width:100px;font-size:50px;}");
    int res = box.exec();
    if(res == QMessageBox::Yes)
    {
        ui->btnImportImg->setText(QString::fromLocal8Bit("导出中"));
        system(command.toUtf8().data());
        ui->btnImportImg->setText(QString::fromLocal8Bit("导出图片\nExport Images"));
    }
}

void Widget::On_btnSaveImg_click()
{
    if(save_flag == 1)
    {
        save_flag = 0;
        ui->btnSaveImg->setText(QString::fromLocal8Bit("保存图片\nSave"));
    }
    else
    {
        save_flag = 1;
        ui->btnSaveImg->setText(QString::fromLocal8Bit("不保存图片\nDon't save"));
    }

    Para para = {0};
    int fd = open(CONFIG_PATH,O_RDWR);
    read(fd, &para, sizeof(para));
    lseek(fd, 0, SEEK_SET);

    para.save_img = save_flag;

    write(fd, &para, sizeof(para));
    ::close(fd);

}

void Widget::On_btnImportModel_click()
{
    QString file = QFileDialog::getExistingDirectory(this, "",SAVE_IMAGE_PATH,QFileDialog::DontUseCustomDirectoryIcons|QFileDialog::DontUseSheet|QFileDialog::ReadOnly|QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks);
    if(file=="")
    {
        return;
    }

    //考虑路径带空格的情况
    QStringList list = file.split("\ ");
    QString filepath = "";
    for(int i =0; i<list.size(); i++)
    {
        if(i == list.size()-1)
        {
            filepath = filepath + list[i];
            break;
        }
        filepath = filepath + list[i] + "\\\ ";       //路径带空格加上 "\ "
    }
    QString txtpath = filepath + "/" + "model_info.txt";
    QDir dir(filepath);
    dir.setFilter(QDir::Files);

    QStringList filters;
    filters<<QString("*.%1").arg("pt");
    dir.setNameFilters(filters);
    QFileInfoList list1 = dir.entryInfoList();
    QString ptpath = filepath + "/" + list1[0].fileName();


    QString command1 = "cp " + txtpath + "\ " + MODEL_PATH;
    QString command2 = "cp " + ptpath + "\ " + MODEL_PATH;
    qDebug()<<command1<<command2;

    QMessageBox box;
    box.setText("import?");
    box.setStandardButtons(QMessageBox::Yes|QMessageBox::No);
    box.setStyleSheet("QLabel{min-width: 250px;min-height: 120px;font-size:40px;} QPushButton{width:100px;font-size:50px;}");
    int res = box.exec();
    if(res == QMessageBox::Yes)
    {
        system(command1.toUtf8().data());
        system(command2.toUtf8().data());
    }

    disconnect(ui->candy_select_box, SIGNAL(currentIndexChanged(int)), this, SLOT(On_candy_select_box_index_change(int)));
    ui->candy_select_box->clear();
    models_vector.clear();
    set_candy_select_box();
    connect(ui->candy_select_box, SIGNAL(currentIndexChanged(int)), this, SLOT(On_candy_select_box_index_change(int)));
}

void Widget::On_candy_select_box_index_change(int index)
{
    char* name = models_vector[index].name.toLatin1().data();
    char head[16] = "MN:";
    strncat(head, name, strlen(name));
    write(fd_img, head, strlen(head));
    qDebug() << "from c" << head;
}

void Widget::On_btnModifyPasswd_click()
{
    modify_passwd_dialog = new ModifyPasswdialog;
    connect(modify_passwd_dialog, SIGNAL(send_modify_passwd(QString)), this, SLOT(modify_password(QString)));
    modify_passwd_dialog->show();
}

void Widget::modify_password(QString password)
{
    modify_passwd_dialog->close();
    memset(passwd, 0, sizeof(passwd));
    strcpy(passwd, password.toLatin1().data());

    Para para = {0};
    int fd = open(CONFIG_PATH,O_RDWR);
    read(fd, &para, sizeof(para));
    lseek(fd, 0, SEEK_SET);
    strcpy(para.passwd, password.toLatin1().data());

    write(fd, &para, sizeof(para));
    ::close(fd);
}

void Widget::On_btn_close_click()
{
    //::raise(SIGKILL);
    //abort();
    system("poweroff");
}


void Widget::set_candy_select_box()
{
    FILE* fp = fopen(MODEL_INFO_PATH, "r");
    char buf[128];
    int index = 0;
    Models models;
    while(fgets(buf, sizeof(buf), fp))
    {
        buf[strlen(buf)-1]='\0';
        QString str(buf);
        QStringList list = str.split("\ ");
        ui->candy_select_box->addItem(list[0]);
        models.name = list[1];
        models.index = index;
        index++;
        memset(buf, 0, sizeof(buf));
        //qDebug()<<models.name;
        models_vector << models;
    }
    fclose(fp);
    fp = fopen(CUR_MODEL_PATH, "r");
    fgets(buf, sizeof(buf), fp);
    fclose(fp);
    QString str1(buf);
    for(int i=0; i<models_vector.size(); i++)
    {
        //qDebug() << models_vector[i].name;
        //qDebug() << str1;
        if(str1 == models_vector[i].name)
        {
            ui->candy_select_box->setCurrentIndex(models_vector[i].index);
//            qDebug()<<models_vector[i].index;
            qDebug() << models_vector[i].name;
            break;
        }
    }
}


void Widget::On_btn1_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("1");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn2_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("2");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn3_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("3");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn4_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("4");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn5_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("5");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn6_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("6");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn7_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("7");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn8_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("8");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn9_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("9");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn0_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    str.append("0");
    spinbox->setValue(str.toInt());
}

void Widget::On_btn_DEL_clicked()
{
    QWidget* m_widget = this->focusWidget();
    QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
    int value = spinbox->value();
    QString str = QString::number(value);
    if(str.size()==0) return;
    str = str.left(str.size()-1);
    spinbox->setValue(str.toInt());
}

void Widget::On_btnManualValveTest()
{
    char send_tab[11];
    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x04;
    send_tab[3] = 's';
    send_tab[4] = 'd';
    send_tab[5] = '5';
    send_tab[6] = '0';
    send_tab[7] = 0xFF;
    send_tab[8] = 0xFF;
    send_tab[9] = 0xBB;
    socket->write((const char*)send_tab, 10);

    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x05;
    send_tab[3] = 's';
    send_tab[4] = 'c';
    send_tab[5] = '5';
    send_tab[6] = '0';
    send_tab[7] = '0';
    send_tab[8] = 0xFF;
    send_tab[9] = 0xFF;
    send_tab[10] = 0xBB;
    socket->write((const char*)send_tab, 11);

    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x04;
    send_tab[3] = 's';
    send_tab[4] = 'v';
    send_tab[5] = '1';
    send_tab[6] = '0';
    send_tab[7] = 0xFF;
    send_tab[8] = 0xFF;
    send_tab[9] = 0xBB;
    socket->write((const char*)send_tab, 10);

    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x03;
    send_tab[3] = 's';
    send_tab[4] = 't';
    send_tab[5] = 0xFF;
    send_tab[6] = 0xFF;
    send_tab[7] = 0xFF;
    send_tab[8] = 0xBB;
    socket->write((const char*)send_tab, 9);

     ui->tabWidget->setCurrentIndex(6);
}

void Widget::On_btn_Tab7_3_click()
{
    char send_tab[9];
    send_tab[0] = 0xAA;
    send_tab[1] = 0x00;
    send_tab[2] = 0x03;
    send_tab[3] = 's';
    send_tab[4] = 'p';
    send_tab[5] = 0xFF;
    send_tab[6] = 0xFF;
    send_tab[7] = 0xFF;
    send_tab[8] = 0xBB;

    socket->write((const char*)send_tab, 9);
    ui->tabWidget->setCurrentIndex(2);
}

void Widget::On_btnchannelup_click()
{
    channel++;
    if(channel > 48)
    {
        channel = 1;
    }
     ui->label_channel->setText(QString::number(channel));
}

void Widget::On_btnchanneldown_click()
{
    channel--;
    if(channel < 1)
    {
        channel = 48;
    }
     ui->label_channel->setText(QString::number(channel));
}


void Widget::On_btn_channel_send_clicked()
{

    uint32_t valve_data_l;
    uint32_t valve_data_h;
    if(channel < 33)
    {
         valve_data_l = 1 << (channel - 1);
         valve_data_h = 0;
    }
    else
    {
        valve_data_l = 0;
        valve_data_h = 1 << (channel -33);
    }


    uint8_t data[6];
    uint8_t send_data[3000];
    data[0] = (valve_data_h >> 8) & 0xFF;
    data[1]= valve_data_h & 0xFF;
    data[2]= (valve_data_l >> 24) & 0xFF;
    data[3]= (valve_data_l >> 16) & 0xFF;
    data[4]= (valve_data_l >> 8) & 0xFF;
    data[5]= valve_data_l & 0xFF;

    for(int i = 0; i < 500; i++)
    {
        memcpy(send_data +i*6, data, 6);
    }

    char buf[TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8) + 8];
    buf[0] = 0xAA;
    buf[1] = 0x0B;
    buf[2] = 0xBA;
    buf[3] = 'd';
    buf[4] = 'a';
    buf[3005] = 0xFF;
    buf[3006] = 0xFF;
    buf[3007] = 0xBB;
    memcpy(buf+5, send_data, TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8));
    socket->write((const char*)buf, TRIGGER_PULSE_NUMBER * (VALVE_NUMBER / 8) + 8);
}

//void Widget::On_btn_1_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("1");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("1");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_2_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("2");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("2");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_3_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("3");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("3");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_4_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("4");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("4");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_5_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("5");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("5");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_6_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("6");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("6");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_7_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("7");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("7");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_8_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("8");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("8");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_9_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("9");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("9");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_0_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("0");
//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append("0");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_dot_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QDoubleSpinbox"))
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        str.append(".");
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_del_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        if(str.size()==0) return;
//        str = str.left(str.size()-1);

//        spinbox->setValue(str.toInt());
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        int value = spinbox->value();
//        QString str = QString::number(value);
//        if(str.size()==0) return;
//        str = str.left(str.size()-1);
//        spinbox->setValue(str.toDouble());
//    }
//}

//void Widget::On_btn_clr_clicked()
//{
//    QWidget* m_widget = this->focusWidget();
//    if(m_widget->inherits("QSpinBox"))
//    {
//        QSpinBox* spinbox = qobject_cast<QSpinBox*>(m_widget);
//        spinbox->clear();
//    }
//    else
//    {
//        QDoubleSpinBox* spinbox = qobject_cast<QDoubleSpinBox*>(m_widget);
//        spinbox->cleanText();
//    }
//}
