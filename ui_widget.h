/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *btn_Tab1_2;
    QPushButton *btn_Tab1_3;
    QLabel *label_1_1;
    QLabel *label_1_5;
    QLabel *MCU_status;
    QPushButton *btn_close;
    QWidget *tab_2;
    QLabel *showlabel;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QPushButton *btn_Tab2_1;
    QPushButton *btn_Tab2_5;
    QLabel *label_stop;
    QWidget *tab_3;
    QPushButton *btn_Tab3_4;
    QPushButton *btn_Tab3_6;
    QLabel *label_3_3;
    QPushButton *btnValveTest;
    QPushButton *btn_Tab3_1;
    QPushButton *btnImportImg;
    QPushButton *btnSaveImg;
    QPushButton *btnImportModel;
    QPushButton *btnModifyPasswd;
    QPushButton *btnManualValveTest;
    QWidget *tab_4;
    QLabel *showlabel_set;
    QLabel *label_4_1;
    QLabel *label_4_2;
    QLabel *label_4_3;
    QPushButton *btn_setcamerapara;
    QDoubleSpinBox *gain_spinBox;
    QDoubleSpinBox *et_spinBox;
    QSpinBox *white_spinBox;
    QPushButton *btn_getcorrect;
    QPushButton *btn_correct;
    QPushButton *btn_Tab4_3;
    QLabel *label_1;
    QLabel *label_2;
    QWidget *tab_5;
    QLabel *label_5_2;
    QLabel *label_5_3;
    QSpinBox *area_spinBox;
    QSpinBox *delay_spinBox;
    QLabel *label_5_1;
    QPushButton *btn_Tab5_3;
    QPushButton *btn_set_thereshold;
    QLabel *label_5_4;
    QSpinBox *blow_time_spinbox;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn_DEL;
    QPushButton *btn1;
    QPushButton *btn0;
    QLabel *label_5_5;
    QSpinBox *rigorous_spinbox;
    QWidget *tab_123;
    QLabel *label_6_1;
    QPushButton *btn_Tab6_3;
    QComboBox *candy_select_box;
    QWidget *tab;
    QLabel *label_7_1;
    QLabel *label;
    QLabel *label_channel;
    QPushButton *btn_channel_up;
    QPushButton *btn_channel_down;
    QPushButton *btn_Tab7_3;
    QPushButton *btn_channel_send;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1024, 768);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1021, 761));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(218, 239, 252);"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        btn_Tab1_2 = new QPushButton(tab_1);
        btn_Tab1_2->setObjectName(QString::fromUtf8("btn_Tab1_2"));
        btn_Tab1_2->setGeometry(QRect(100, 210, 291, 121));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(136, 138, 133, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(204, 207, 200, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(170, 172, 166, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(68, 69, 66, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(91, 92, 89, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        QBrush brush8(QColor(195, 196, 194, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        QBrush brush9(QColor(255, 255, 220, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab1_2->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btn_Tab1_2->setFont(font);
        btn_Tab1_2->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btn_Tab1_3 = new QPushButton(tab_1);
        btn_Tab1_3->setObjectName(QString::fromUtf8("btn_Tab1_3"));
        btn_Tab1_3->setGeometry(QRect(570, 210, 291, 121));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab1_3->setPalette(palette1);
        QFont font1;
        font1.setPointSize(24);
        btn_Tab1_3->setFont(font1);
        btn_Tab1_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236); \n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-radius:10px;"));
        label_1_1 = new QLabel(tab_1);
        label_1_1->setObjectName(QString::fromUtf8("label_1_1"));
        label_1_1->setGeometry(QRect(35, 10, 921, 61));
        QFont font2;
        font2.setPointSize(40);
        label_1_1->setFont(font2);
        label_1_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-width:4px;\n"
"border-radius:25px;"));
        label_1_1->setAlignment(Qt::AlignCenter);
        label_1_5 = new QLabel(tab_1);
        label_1_5->setObjectName(QString::fromUtf8("label_1_5"));
        label_1_5->setGeometry(QRect(35, 640, 931, 61));
        label_1_5->setFont(font2);
        label_1_5->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-width:4px;\n"
"border-radius:25px;"));
        label_1_5->setAlignment(Qt::AlignCenter);
        MCU_status = new QLabel(tab_1);
        MCU_status->setObjectName(QString::fromUtf8("MCU_status"));
        MCU_status->setGeometry(QRect(870, 560, 71, 41));
        btn_close = new QPushButton(tab_1);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(590, 530, 231, 101));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Samyak Devanagari"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        btn_close->setFont(font3);
        btn_close->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(204, 0, 0);\n"
"border-radius:10px;"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        showlabel = new QLabel(tab_2);
        showlabel->setObjectName(QString::fromUtf8("showlabel"));
        showlabel->setGeometry(QRect(0, 0, 981, 521));
        showlabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        btnStart = new QPushButton(tab_2);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(20, 580, 221, 91));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnStart->setPalette(palette2);
        btnStart->setFont(font1);
        btnStart->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:15px;\n"
"background-color: rgb(136, 138, 133);\n"
"border-width:4px;   "));
        btnStop = new QPushButton(tab_2);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(260, 580, 221, 91));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        QBrush brush10(QColor(46, 52, 54, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnStop->setPalette(palette3);
        btnStop->setFont(font1);
        btnStop->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(46, 52, 54);\n"
"border-radius:10px;"));
        btn_Tab2_1 = new QPushButton(tab_2);
        btn_Tab2_1->setObjectName(QString::fromUtf8("btn_Tab2_1"));
        btn_Tab2_1->setGeometry(QRect(510, 580, 221, 91));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab2_1->setPalette(palette4);
        btn_Tab2_1->setFont(font1);
        btn_Tab2_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btn_Tab2_5 = new QPushButton(tab_2);
        btn_Tab2_5->setObjectName(QString::fromUtf8("btn_Tab2_5"));
        btn_Tab2_5->setGeometry(QRect(760, 580, 221, 91));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab2_5->setPalette(palette5);
        btn_Tab2_5->setFont(font1);
        btn_Tab2_5->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        label_stop = new QLabel(tab_2);
        label_stop->setObjectName(QString::fromUtf8("label_stop"));
        label_stop->setGeometry(QRect(290, 530, 161, 41));
        QFont font4;
        font4.setPointSize(18);
        label_stop->setFont(font4);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        btn_Tab3_4 = new QPushButton(tab_3);
        btn_Tab3_4->setObjectName(QString::fromUtf8("btn_Tab3_4"));
        btn_Tab3_4->setGeometry(QRect(130, 140, 291, 81));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab3_4->setPalette(palette6);
        btn_Tab3_4->setFont(font);
        btn_Tab3_4->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btn_Tab3_6 = new QPushButton(tab_3);
        btn_Tab3_6->setObjectName(QString::fromUtf8("btn_Tab3_6"));
        btn_Tab3_6->setGeometry(QRect(130, 270, 291, 81));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab3_6->setPalette(palette7);
        btn_Tab3_6->setFont(font1);
        btn_Tab3_6->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        label_3_3 = new QLabel(tab_3);
        label_3_3->setObjectName(QString::fromUtf8("label_3_3"));
        label_3_3->setGeometry(QRect(0, 20, 311, 101));
        QFont font5;
        font5.setPointSize(30);
        label_3_3->setFont(font5);
        label_3_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(204, 0, 0);\n"
"border-radius:10px;"));
        label_3_3->setAlignment(Qt::AlignCenter);
        btnValveTest = new QPushButton(tab_3);
        btnValveTest->setObjectName(QString::fromUtf8("btnValveTest"));
        btnValveTest->setGeometry(QRect(540, 140, 301, 81));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnValveTest->setPalette(palette8);
        btnValveTest->setFont(font1);
        btnValveTest->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btn_Tab3_1 = new QPushButton(tab_3);
        btn_Tab3_1->setObjectName(QString::fromUtf8("btn_Tab3_1"));
        btn_Tab3_1->setGeometry(QRect(700, 610, 221, 91));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btn_Tab3_1->setPalette(palette9);
        btn_Tab3_1->setFont(font1);
        btn_Tab3_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btnImportImg = new QPushButton(tab_3);
        btnImportImg->setObjectName(QString::fromUtf8("btnImportImg"));
        btnImportImg->setGeometry(QRect(130, 390, 291, 81));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnImportImg->setPalette(palette10);
        btnImportImg->setFont(font1);
        btnImportImg->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btnSaveImg = new QPushButton(tab_3);
        btnSaveImg->setObjectName(QString::fromUtf8("btnSaveImg"));
        btnSaveImg->setGeometry(QRect(540, 270, 301, 81));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnSaveImg->setPalette(palette11);
        btnSaveImg->setFont(font1);
        btnSaveImg->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btnImportModel = new QPushButton(tab_3);
        btnImportModel->setObjectName(QString::fromUtf8("btnImportModel"));
        btnImportModel->setGeometry(QRect(540, 390, 301, 81));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette12.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette12.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette12.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette12.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnImportModel->setPalette(palette12);
        btnImportModel->setFont(font1);
        btnImportModel->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btnModifyPasswd = new QPushButton(tab_3);
        btnModifyPasswd->setObjectName(QString::fromUtf8("btnModifyPasswd"));
        btnModifyPasswd->setGeometry(QRect(130, 510, 291, 81));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnModifyPasswd->setPalette(palette13);
        btnModifyPasswd->setFont(font1);
        btnModifyPasswd->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        btnManualValveTest = new QPushButton(tab_3);
        btnManualValveTest->setObjectName(QString::fromUtf8("btnManualValveTest"));
        btnManualValveTest->setGeometry(QRect(540, 510, 301, 81));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush7);
        btnManualValveTest->setPalette(palette14);
        btnManualValveTest->setFont(font1);
        btnManualValveTest->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"border-radius:10px;\n"
"background-color: rgb(136, 138, 133);\n"
"font: 24pt \"Ubuntu\";\n"
"border-width:4px;   "));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        showlabel_set = new QLabel(tab_4);
        showlabel_set->setObjectName(QString::fromUtf8("showlabel_set"));
        showlabel_set->setGeometry(QRect(0, 0, 641, 431));
        showlabel_set->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_4_1 = new QLabel(tab_4);
        label_4_1->setObjectName(QString::fromUtf8("label_4_1"));
        label_4_1->setGeometry(QRect(640, 60, 151, 71));
        QFont font6;
        font6.setPointSize(16);
        label_4_1->setFont(font6);
        label_4_2 = new QLabel(tab_4);
        label_4_2->setObjectName(QString::fromUtf8("label_4_2"));
        label_4_2->setGeometry(QRect(640, 150, 181, 61));
        label_4_2->setFont(font6);
        label_4_3 = new QLabel(tab_4);
        label_4_3->setObjectName(QString::fromUtf8("label_4_3"));
        label_4_3->setGeometry(QRect(640, 240, 161, 51));
        label_4_3->setFont(font6);
        btn_setcamerapara = new QPushButton(tab_4);
        btn_setcamerapara->setObjectName(QString::fromUtf8("btn_setcamerapara"));
        btn_setcamerapara->setGeometry(QRect(690, 350, 241, 101));
        btn_setcamerapara->setFont(font1);
        btn_setcamerapara->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        gain_spinBox = new QDoubleSpinBox(tab_4);
        gain_spinBox->setObjectName(QString::fromUtf8("gain_spinBox"));
        gain_spinBox->setGeometry(QRect(780, 250, 231, 41));
        gain_spinBox->setFont(font4);
        gain_spinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox::up-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:right;\n"
"width:50px;\n"
"height:100px;\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:left;\n"
"width:50px;\n"
"height:100px;\n"
"}"));
        et_spinBox = new QDoubleSpinBox(tab_4);
        et_spinBox->setObjectName(QString::fromUtf8("et_spinBox"));
        et_spinBox->setGeometry(QRect(790, 60, 221, 61));
        et_spinBox->setFont(font4);
        et_spinBox->setStyleSheet(QString::fromUtf8("QDoubleSpinBox::up-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:right;\n"
"width:50px;\n"
"height:100px;\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:left;\n"
"width:50px;\n"
"height:100px;\n"
"}"));
        white_spinBox = new QSpinBox(tab_4);
        white_spinBox->setObjectName(QString::fromUtf8("white_spinBox"));
        white_spinBox->setGeometry(QRect(780, 150, 231, 51));
        white_spinBox->setFont(font4);
        white_spinBox->setStyleSheet(QString::fromUtf8("QSpinBox::up-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:right;\n"
"width:50px;\n"
"height:100px;\n"
"}\n"
"QSpinBox::down-button\n"
"{subcontrol-origin:border;\n"
"subcontrol-position:left;\n"
"width:50px;\n"
"height:100px;\n"
"}"));
        btn_getcorrect = new QPushButton(tab_4);
        btn_getcorrect->setObjectName(QString::fromUtf8("btn_getcorrect"));
        btn_getcorrect->setGeometry(QRect(10, 450, 341, 91));
        btn_getcorrect->setFont(font1);
        btn_getcorrect->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_correct = new QPushButton(tab_4);
        btn_correct->setObjectName(QString::fromUtf8("btn_correct"));
        btn_correct->setGeometry(QRect(10, 570, 341, 81));
        btn_correct->setFont(font1);
        btn_correct->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_Tab4_3 = new QPushButton(tab_4);
        btn_Tab4_3->setObjectName(QString::fromUtf8("btn_Tab4_3"));
        btn_Tab4_3->setGeometry(QRect(780, 610, 201, 81));
        btn_Tab4_3->setFont(font1);
        btn_Tab4_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        label_1 = new QLabel(tab_4);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(400, 550, 261, 81));
        label_1->setFont(font6);
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(590, 540, 121, 51));
        label_2->setFont(font6);
        tabWidget->addTab(tab_4, QString());
        label_4_3->raise();
        label_4_2->raise();
        label_4_1->raise();
        showlabel_set->raise();
        btn_setcamerapara->raise();
        gain_spinBox->raise();
        et_spinBox->raise();
        white_spinBox->raise();
        btn_getcorrect->raise();
        btn_correct->raise();
        btn_Tab4_3->raise();
        label_1->raise();
        label_2->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_5_2 = new QLabel(tab_5);
        label_5_2->setObjectName(QString::fromUtf8("label_5_2"));
        label_5_2->setGeometry(QRect(20, 150, 331, 61));
        QFont font7;
        font7.setPointSize(20);
        label_5_2->setFont(font7);
        label_5_3 = new QLabel(tab_5);
        label_5_3->setObjectName(QString::fromUtf8("label_5_3"));
        label_5_3->setGeometry(QRect(20, 240, 331, 71));
        label_5_3->setFont(font7);
        area_spinBox = new QSpinBox(tab_5);
        area_spinBox->setObjectName(QString::fromUtf8("area_spinBox"));
        area_spinBox->setGeometry(QRect(380, 149, 221, 51));
        area_spinBox->setFont(font4);
        delay_spinBox = new QSpinBox(tab_5);
        delay_spinBox->setObjectName(QString::fromUtf8("delay_spinBox"));
        delay_spinBox->setGeometry(QRect(380, 249, 221, 51));
        delay_spinBox->setFont(font4);
        label_5_1 = new QLabel(tab_5);
        label_5_1->setObjectName(QString::fromUtf8("label_5_1"));
        label_5_1->setGeometry(QRect(0, 30, 391, 91));
        label_5_1->setFont(font5);
        label_5_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(204, 0, 0);\n"
"border-radius:10px;"));
        label_5_1->setAlignment(Qt::AlignCenter);
        btn_Tab5_3 = new QPushButton(tab_5);
        btn_Tab5_3->setObjectName(QString::fromUtf8("btn_Tab5_3"));
        btn_Tab5_3->setGeometry(QRect(790, 600, 201, 91));
        QFont font8;
        font8.setPointSize(28);
        btn_Tab5_3->setFont(font8);
        btn_Tab5_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_set_thereshold = new QPushButton(tab_5);
        btn_set_thereshold->setObjectName(QString::fromUtf8("btn_set_thereshold"));
        btn_set_thereshold->setGeometry(QRect(410, 610, 181, 91));
        btn_set_thereshold->setFont(font8);
        btn_set_thereshold->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        label_5_4 = new QLabel(tab_5);
        label_5_4->setObjectName(QString::fromUtf8("label_5_4"));
        label_5_4->setGeometry(QRect(20, 350, 331, 61));
        label_5_4->setFont(font7);
        blow_time_spinbox = new QSpinBox(tab_5);
        blow_time_spinbox->setObjectName(QString::fromUtf8("blow_time_spinbox"));
        blow_time_spinbox->setGeometry(QRect(380, 360, 221, 51));
        blow_time_spinbox->setFont(font4);
        btn2 = new QPushButton(tab_5);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(760, 150, 61, 51));
        QFont font9;
        font9.setPointSize(15);
        btn2->setFont(font9);
        btn3 = new QPushButton(tab_5);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(840, 150, 61, 51));
        btn3->setFont(font9);
        btn4 = new QPushButton(tab_5);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(680, 220, 61, 51));
        btn4->setFont(font9);
        btn5 = new QPushButton(tab_5);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(760, 220, 61, 51));
        btn5->setFont(font9);
        btn6 = new QPushButton(tab_5);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(840, 220, 61, 51));
        btn6->setFont(font9);
        btn7 = new QPushButton(tab_5);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(680, 290, 61, 51));
        btn7->setFont(font9);
        btn8 = new QPushButton(tab_5);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(760, 290, 61, 51));
        btn8->setFont(font9);
        btn9 = new QPushButton(tab_5);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(840, 290, 61, 51));
        btn9->setFont(font9);
        btn_DEL = new QPushButton(tab_5);
        btn_DEL->setObjectName(QString::fromUtf8("btn_DEL"));
        btn_DEL->setGeometry(QRect(840, 360, 71, 51));
        btn_DEL->setFont(font9);
        btn1 = new QPushButton(tab_5);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(680, 150, 61, 51));
        btn1->setFont(font9);
        btn0 = new QPushButton(tab_5);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(760, 360, 61, 51));
        btn0->setFont(font9);
        label_5_5 = new QLabel(tab_5);
        label_5_5->setObjectName(QString::fromUtf8("label_5_5"));
        label_5_5->setGeometry(QRect(20, 460, 331, 81));
        label_5_5->setFont(font7);
        rigorous_spinbox = new QSpinBox(tab_5);
        rigorous_spinbox->setObjectName(QString::fromUtf8("rigorous_spinbox"));
        rigorous_spinbox->setGeometry(QRect(380, 480, 221, 51));
        rigorous_spinbox->setFont(font4);
        tabWidget->addTab(tab_5, QString());
        tab_123 = new QWidget();
        tab_123->setObjectName(QString::fromUtf8("tab_123"));
        label_6_1 = new QLabel(tab_123);
        label_6_1->setObjectName(QString::fromUtf8("label_6_1"));
        label_6_1->setGeometry(QRect(0, 40, 351, 101));
        label_6_1->setFont(font5);
        label_6_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(204, 0, 0);\n"
"border-radius:10px;"));
        label_6_1->setAlignment(Qt::AlignCenter);
        btn_Tab6_3 = new QPushButton(tab_123);
        btn_Tab6_3->setObjectName(QString::fromUtf8("btn_Tab6_3"));
        btn_Tab6_3->setGeometry(QRect(710, 590, 211, 91));
        btn_Tab6_3->setFont(font8);
        btn_Tab6_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        candy_select_box = new QComboBox(tab_123);
        candy_select_box->setObjectName(QString::fromUtf8("candy_select_box"));
        candy_select_box->setGeometry(QRect(190, 210, 361, 91));
        candy_select_box->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
" border: 1px solid gray; \n"
" border-radius: 3px; \n"
" padding: 1px 18px 1px 3px; \n"
" color: #000;\n"
" font: normal normal 25px \"Microsoft YaHei\";\n"
" background: transparent;\n"
"}\n"
"QCombox::drop-down\n"
"{\n"
"width:100px;\n"
"border:none;\n"
"}"));
        tabWidget->addTab(tab_123, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_7_1 = new QLabel(tab);
        label_7_1->setObjectName(QString::fromUtf8("label_7_1"));
        label_7_1->setGeometry(QRect(0, 40, 351, 101));
        label_7_1->setFont(font5);
        label_7_1->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(204, 0, 0);\n"
"border-radius:10px;"));
        label_7_1->setAlignment(Qt::AlignCenter);
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 260, 131, 101));
        label->setFont(font7);
        label_channel = new QLabel(tab);
        label_channel->setObjectName(QString::fromUtf8("label_channel"));
        label_channel->setGeometry(QRect(200, 260, 131, 101));
        label_channel->setFont(font7);
        btn_channel_up = new QPushButton(tab);
        btn_channel_up->setObjectName(QString::fromUtf8("btn_channel_up"));
        btn_channel_up->setGeometry(QRect(30, 410, 141, 91));
        btn_channel_up->setFont(font5);
        btn_channel_up->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_channel_down = new QPushButton(tab);
        btn_channel_down->setObjectName(QString::fromUtf8("btn_channel_down"));
        btn_channel_down->setGeometry(QRect(230, 410, 141, 91));
        btn_channel_down->setFont(font5);
        btn_channel_down->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_Tab7_3 = new QPushButton(tab);
        btn_Tab7_3->setObjectName(QString::fromUtf8("btn_Tab7_3"));
        btn_Tab7_3->setGeometry(QRect(750, 560, 201, 91));
        btn_Tab7_3->setFont(font8);
        btn_Tab7_3->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        btn_channel_send = new QPushButton(tab);
        btn_channel_send->setObjectName(QString::fromUtf8("btn_channel_send"));
        btn_channel_send->setGeometry(QRect(30, 550, 341, 91));
        btn_channel_send->setFont(font5);
        btn_channel_send->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"background-color: rgb(136, 138, 133);\n"
"border-radius:10px;"));
        tabWidget->addTab(tab, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        btn_Tab1_2->setText(QApplication::translate("Widget", "\345\210\206\351\200\211\351\241\265\351\235\242\n"
"Sorting Page", 0, QApplication::UnicodeUTF8));
        btn_Tab1_3->setText(QApplication::translate("Widget", "\350\257\246\347\273\206\350\256\276\347\275\256\n"
"Settings", 0, QApplication::UnicodeUTF8));
        label_1_1->setText(QApplication::translate("Widget", "Candy Grading System", 0, QApplication::UnicodeUTF8));
        label_1_5->setText(QString());
        MCU_status->setText(QString());
        btn_close->setText(QApplication::translate("Widget", "\345\205\263 \346\234\272\n"
"Power off", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("Widget", "Tab 1", 0, QApplication::UnicodeUTF8));
        showlabel->setText(QString());
        btnStart->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\345\210\206\351\200\211\n"
"Start", 0, QApplication::UnicodeUTF8));
        btnStop->setText(QApplication::translate("Widget", "\345\201\234\346\255\242\345\210\206\351\200\211\n"
"Stop", 0, QApplication::UnicodeUTF8));
        btn_Tab2_1->setText(QApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225\n"
"Menu", 0, QApplication::UnicodeUTF8));
        btn_Tab2_5->setText(QApplication::translate("Widget", "\345\217\202\346\225\260\350\260\203\346\225\264\n"
"Parameters", 0, QApplication::UnicodeUTF8));
        label_stop->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Widget", "Tab 2", 0, QApplication::UnicodeUTF8));
        btn_Tab3_4->setText(QApplication::translate("Widget", "\347\233\270\346\234\272\345\217\202\346\225\260\350\256\276\347\275\256\n"
"Camera Parameters", 0, QApplication::UnicodeUTF8));
        btn_Tab3_6->setText(QApplication::translate("Widget", "\345\210\206\351\200\211\347\263\226\346\236\234\347\261\273\345\236\213\n"
"Candy Types", 0, QApplication::UnicodeUTF8));
        label_3_3->setText(QApplication::translate("Widget", "\350\257\246\347\273\206\350\256\276\347\275\256\n"
"Settings", 0, QApplication::UnicodeUTF8));
        btnValveTest->setText(QApplication::translate("Widget", "\345\226\267\351\230\200\346\265\213\350\257\225\n"
"Test Valves", 0, QApplication::UnicodeUTF8));
        btn_Tab3_1->setText(QApplication::translate("Widget", "\344\270\273\350\217\234\345\215\225\n"
"Menu", 0, QApplication::UnicodeUTF8));
        btnImportImg->setText(QApplication::translate("Widget", "\345\257\274\345\207\272\345\233\276\347\211\207\n"
"Export Images", 0, QApplication::UnicodeUTF8));
        btnSaveImg->setText(QApplication::translate("Widget", "Save", 0, QApplication::UnicodeUTF8));
        btnImportModel->setText(QApplication::translate("Widget", "\345\257\274\345\205\245\346\250\241\345\236\213\n"
"Import Models", 0, QApplication::UnicodeUTF8));
        btnModifyPasswd->setText(QApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201\n"
"Change Password", 0, QApplication::UnicodeUTF8));
        btnManualValveTest->setText(QApplication::translate("Widget", "\345\226\267\351\230\200\346\211\213\345\212\250\346\265\213\350\257\225\n"
"Manual Test Valves", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Widget", "Tab3", 0, QApplication::UnicodeUTF8));
        showlabel_set->setText(QString());
        label_4_1->setText(QApplication::translate("Widget", "\346\233\235\345\205\211\346\227\266\351\227\264\n"
"Explosure", 0, QApplication::UnicodeUTF8));
        label_4_2->setText(QApplication::translate("Widget", "\347\231\275\345\271\263\350\241\241\n"
"White Balance", 0, QApplication::UnicodeUTF8));
        label_4_3->setText(QApplication::translate("Widget", "\345\242\236\347\233\212\n"
"Gain", 0, QApplication::UnicodeUTF8));
        btn_setcamerapara->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\345\217\202\346\225\260\n"
"Set", 0, QApplication::UnicodeUTF8));
        btn_getcorrect->setText(QApplication::translate("Widget", "\351\207\207\351\233\206\346\240\241\346\255\243\345\233\276\345\203\217\n"
"Grap Correcting Image", 0, QApplication::UnicodeUTF8));
        btn_correct->setText(QApplication::translate("Widget", "\350\211\262\345\275\251\346\240\241\346\255\243\n"
"Color Correcting", 0, QApplication::UnicodeUTF8));
        btn_Tab4_3->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\n"
"Back", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("Widget", "\344\272\256\345\272\246\345\200\274(brightness):\n"
"\n"
"(need correcting board)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("Widget", "tab_4", 0, QApplication::UnicodeUTF8));
        label_5_2->setText(QApplication::translate("Widget", "\347\274\272\351\231\267\351\235\242\347\247\257\351\230\210\345\200\274\n"
"Defect Area", 0, QApplication::UnicodeUTF8));
        label_5_3->setText(QApplication::translate("Widget", "\345\273\266\346\227\266\346\227\266\351\227\264\n"
"Delay Time", 0, QApplication::UnicodeUTF8));
        label_5_1->setText(QApplication::translate("Widget", "\345\210\206\351\200\211\351\230\210\345\200\274\350\256\276\347\275\256\n"
"Parameters", 0, QApplication::UnicodeUTF8));
        btn_Tab5_3->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\n"
"Back", 0, QApplication::UnicodeUTF8));
        btn_set_thereshold->setText(QApplication::translate("Widget", "\350\256\276\347\275\256\n"
"Set", 0, QApplication::UnicodeUTF8));
        label_5_4->setText(QApplication::translate("Widget", "\345\220\271\346\260\224\351\207\217\n"
"Blow Time", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("Widget", "2", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("Widget", "3", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("Widget", "4", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("Widget", "5", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("Widget", "6", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("Widget", "7", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("Widget", "8", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("Widget", "9", 0, QApplication::UnicodeUTF8));
        btn_DEL->setText(QApplication::translate("Widget", "DEL", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("Widget", "1", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        label_5_5->setText(QApplication::translate("Widget", "\344\270\245\346\240\274\347\250\213\345\272\246\n"
"Rigorous Level", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("Widget", "tab_5", 0, QApplication::UnicodeUTF8));
        label_6_1->setText(QApplication::translate("Widget", "\347\263\226\346\236\234\347\261\273\345\236\213\351\200\211\346\213\251\357\274\232\n"
"Candy Type", 0, QApplication::UnicodeUTF8));
        btn_Tab6_3->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\n"
"Back", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_123), QApplication::translate("Widget", "tab_6", 0, QApplication::UnicodeUTF8));
        label_7_1->setText(QApplication::translate("Widget", "\345\226\267\351\230\200\346\211\213\345\212\250\346\265\213\350\257\225\357\274\232\n"
"Manual Test Valves", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\351\200\232\351\201\223:\n"
"Channel", 0, QApplication::UnicodeUTF8));
        label_channel->setText(QApplication::translate("Widget", "0", 0, QApplication::UnicodeUTF8));
        btn_channel_up->setText(QApplication::translate("Widget", "+", 0, QApplication::UnicodeUTF8));
        btn_channel_down->setText(QApplication::translate("Widget", "-", 0, QApplication::UnicodeUTF8));
        btn_Tab7_3->setText(QApplication::translate("Widget", "\350\277\224\345\233\236\n"
"Back", 0, QApplication::UnicodeUTF8));
        btn_channel_send->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\351\200\232\351\201\223\n"
"Channel Send", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Widget", "Page", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
