#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "passwddialog.h"
#include "modifypasswdialog.h"
#include <opencv2/opencv.hpp>
#include <QPixmap>
#include <QTcpServer>
#include <QTcpSocket>
#include "thread.h"
#include "camera.h"
#include "correct.h"
#include "qprocess.h"

//#define DEBUG

typedef struct
{
    char passwd[7];                 //密码
    int delay;                      //延时时间
    int defect_area;                //缺陷大小阈值
    int blow_time;                  //吹气量
    int save_img;                   //保是否存图片标志位
    int rigorous;
}Para;

typedef struct
{
    QString name;
    int index;
}Models;


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    //button
    //Tab_1
    void On_btn_Tab1_2_click();
    void On_btn_Tab1_3_click();
    //Tab_2
    void On_btnStart_click();
    void On_bthStop_click();
    void On_btn_Tab2_1_click();
    void On_btn_Tab2_5_click();
    //Tab_3
    void On_btnValveTest_click();
    void On_btn_Tab3_1_click();
    void On_btn_Tab3_4_click();
    void On_btn_Tab3_6_click();
    void On_btnImportImg_click();
    void On_btnSaveImg_click();
    void On_btnImportModel_click();
    void On_btnModifyPasswd_click();
    //Tab_4
    void On_btn_correct_click();
    void On_btn_getcorrect_click();
    void On_btn_setcamerapara_click();
    void On_btn_Tab4_3_click();
    //Tab_5
    void On_btn_Tab5_3_click();
    void On_btn_set_thereshold_click();
    //Tab_6
    void On_btn_Tab6_3_click();

    void On_btn_close_click();

    void On_candy_select_box_index_change(int);


    void On_btnManualValveTest();
    void On_btn_Tab7_3_click();
    void On_btnchannelup_click();
    void On_btnchanneldown_click();
    void On_btn_channel_send_clicked();

    void judge_password(QString);
    void modify_password(QString);
    void showimage(cv::Mat);
    void drawbox(QVector<bad_candy_box>);
    void showimage_test(cv::Mat);
    //void deal_camera_offline();
    void ServerNewConnection();
    void get_tab(uint8_t*);

    void On_btn1_clicked();
    void On_btn2_clicked();
    void On_btn3_clicked();
    void On_btn4_clicked();
    void On_btn5_clicked();
    void On_btn6_clicked();
    void On_btn7_clicked();
    void On_btn8_clicked();
    void On_btn9_clicked();
    void On_btn0_clicked();
    void On_btn_DEL_clicked();

    void readfrom_lowermachine();

private:
    Ui::Widget *ui;
    PasswdDialog* passwd_dialog;
    ModifyPasswdialog* modify_passwd_dialog;
    QPixmap pix;
    QPixmap pix_test;
    Process_img* process_img;
    Adjust_para* adjust_para;
    Camera* m_camera;
    QVector<Models> models_vector;
    //Correct* m_correct;
    QTcpServer* server;
    QTcpSocket* socket;
    Correct* m_correct;
    char passwd[7];
    int channel;
#ifdef DEBUG
    cv::Mat defect_pic;
#endif
    Grab_img* grab_img;//test_thread

    void connect_signals();
    void init_window();
    bool init_script();
    bool select_candy();
    void load_para_config();
    void set_candy_select_box();

signals:
    void correct_signal();
    void wrong_passwd();
};

#endif // WIDGET_H
