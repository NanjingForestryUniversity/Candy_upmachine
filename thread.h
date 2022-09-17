#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include "opencv2/opencv.hpp"
#include <QMutex>
#include <QVector>
#include <QDateTime>
#include <QTime>

#define SAVE_IMAGE_PATH "/home/nvidia/candyPic/"
#define TEST_IMAGE_PATH "/home/nvidia/testImg/"
#define CONFIG_PATH "/home/nvidia/CandyProject/candy/para.ini"
#define CAMERA_CONFIG_PATH "/home/nvidia/CandyProject/candy/ccc.mfs"
#define RESULT_PATH "/home/nvidia/result/"
#define MODEL_INFO_PATH "/home/nvidia/CandyProject/yolov5/weights/model_info.txt"
#define CUR_MODEL_PATH "/home/nvidia/CandyProject/yolov5/weights/current_model.txt"
#define MODEL_PATH "/home/nvidia/CandyProject/yolov5/weights/"


#define VALVE_INTERVAL 49.5f            //   2376(像素) / 48(喷阀个数)
#define TIME_INTERVAL  0.932f               //   每个脉冲对应的像素个数 计算方法：图片像素数/对应脉冲数
#define IMG_SAVE_PATH   "./images5/%d.bmp"   //路径自己指定，必须存在
#define PULSE_NUMBER   626                // 一张图片占据648个编码器脉冲
#define TRIGGER_PULSE_NUMBER   500         // 相机每隔500个脉冲触发一次（若修改，则需要联系下位机）
#define VALVE_NUMBER   48                 // 喷阀个数(必须是8的倍数)

// 识别相关
#define SMALL_DEFECT_SIZE 170              // 当缺陷长度小于该值时自动补齐到EXPAND_SIZE
#define EXPAND_SIZE 170                    // 将缺陷区域的大小以原位置为中心向上下延长到EXPAND_SIZE
#define RESULT_PIPE "/tmp/result_fifo.pipe"

typedef struct
{
    int pointA_x;
    int pointA_y;
    int pointB_x;
    int pointB_y;
}bad_candy_box;


class Process_img: public QThread
{   Q_OBJECT

private:
    QMutex stop_mutex;
    bool m_stop;

protected:
    void run();

public:
    explicit Process_img(QObject *parent = NULL);
    void exitThread();
    void data_process(cv::Mat img);
    void save_img(cv::Mat img);


signals:
    void send_image(cv::Mat);
    void send_res(QVector<bad_candy_box>);
    void send_tab(uint8_t*);
};




class Adjust_para: public QThread
{   Q_OBJECT
private:
    QMutex stop_mutex;
    bool m_stop;
    bool correct_flag;
    QMutex correct_mutex;

protected:
    void run();

public:
    explicit Adjust_para(QObject *parent = NULL);
    void exitThread();

public slots:
    void get_correct_siganl();

signals:
    void send_image_debug(cv::Mat);
};


//test_thread
class Grab_img: public QThread
{   Q_OBJECT
private:
    QMutex stop_mutex;
    bool is_stop;

public:
    explicit Grab_img(QObject *parent = NULL);
    void judge_stop();
    void thread_quit();

protected:
    void run();
};

#endif // THREAD_H

