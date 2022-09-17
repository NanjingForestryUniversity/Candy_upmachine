/********************************************************************************
** Form generated from reading UI file 'modifypasswdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYPASSWDIALOG_H
#define UI_MODIFYPASSWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModifyPasswdialog
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *btn9;
    QPushButton *btn4;
    QPushButton *btnDot;
    QPushButton *btn3;
    QPushButton *btn6;
    QPushButton *btnCL;
    QPushButton *btn0;
    QPushButton *btn8;
    QPushButton *btnEnt;
    QPushButton *btn2;
    QPushButton *btn7;
    QPushButton *btn1;
    QPushButton *btn5;
    QPushButton *btnDE;
    QPushButton *btnCancel;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *ModifyPasswdialog)
    {
        if (ModifyPasswdialog->objectName().isEmpty())
            ModifyPasswdialog->setObjectName(QString::fromUtf8("ModifyPasswdialog"));
        ModifyPasswdialog->resize(348, 432);
        lineEdit = new QLineEdit(ModifyPasswdialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 60, 221, 31));
        lineEdit->setMaxLength(6);
        lineEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(ModifyPasswdialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 191, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        btn9 = new QPushButton(ModifyPasswdialog);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(160, 290, 51, 51));
        btn4 = new QPushButton(ModifyPasswdialog);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 220, 51, 51));
        btnDot = new QPushButton(ModifyPasswdialog);
        btnDot->setObjectName(QString::fromUtf8("btnDot"));
        btnDot->setGeometry(QRect(90, 360, 51, 51));
        btn3 = new QPushButton(ModifyPasswdialog);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(160, 150, 51, 51));
        btn6 = new QPushButton(ModifyPasswdialog);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(160, 220, 51, 51));
        btnCL = new QPushButton(ModifyPasswdialog);
        btnCL->setObjectName(QString::fromUtf8("btnCL"));
        btnCL->setGeometry(QRect(230, 290, 61, 51));
        btn0 = new QPushButton(ModifyPasswdialog);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(20, 360, 51, 51));
        btn8 = new QPushButton(ModifyPasswdialog);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(90, 290, 51, 51));
        btnEnt = new QPushButton(ModifyPasswdialog);
        btnEnt->setObjectName(QString::fromUtf8("btnEnt"));
        btnEnt->setGeometry(QRect(230, 360, 61, 51));
        btn2 = new QPushButton(ModifyPasswdialog);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(90, 150, 51, 51));
        btn7 = new QPushButton(ModifyPasswdialog);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 290, 51, 51));
        btn1 = new QPushButton(ModifyPasswdialog);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 150, 51, 51));
        btn5 = new QPushButton(ModifyPasswdialog);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(90, 220, 51, 51));
        btnDE = new QPushButton(ModifyPasswdialog);
        btnDE->setObjectName(QString::fromUtf8("btnDE"));
        btnDE->setGeometry(QRect(230, 150, 61, 51));
        btnCancel = new QPushButton(ModifyPasswdialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(230, 220, 61, 51));
        lineEdit_2 = new QLineEdit(ModifyPasswdialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 100, 221, 31));
        lineEdit_2->setMaxLength(6);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(ModifyPasswdialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 60, 81, 31));
        QFont font1;
        font1.setPointSize(17);
        label_2->setFont(font1);
        label_3 = new QLabel(ModifyPasswdialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 100, 101, 31));
        label_3->setFont(font1);

        retranslateUi(ModifyPasswdialog);

        QMetaObject::connectSlotsByName(ModifyPasswdialog);
    } // setupUi

    void retranslateUi(QDialog *ModifyPasswdialog)
    {
        ModifyPasswdialog->setWindowTitle(QApplication::translate("ModifyPasswdialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ModifyPasswdialog", "Input Password", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("ModifyPasswdialog", "9", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("ModifyPasswdialog", "4", 0, QApplication::UnicodeUTF8));
        btnDot->setText(QApplication::translate("ModifyPasswdialog", ".", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("ModifyPasswdialog", "3", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("ModifyPasswdialog", "6", 0, QApplication::UnicodeUTF8));
        btnCL->setText(QApplication::translate("ModifyPasswdialog", "CLEAR", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("ModifyPasswdialog", "0", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("ModifyPasswdialog", "8", 0, QApplication::UnicodeUTF8));
        btnEnt->setText(QApplication::translate("ModifyPasswdialog", "ENTER", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("ModifyPasswdialog", "2", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("ModifyPasswdialog", "7", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("ModifyPasswdialog", "1", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("ModifyPasswdialog", "5", 0, QApplication::UnicodeUTF8));
        btnDE->setText(QApplication::translate("ModifyPasswdialog", "DELETE", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("ModifyPasswdialog", "CANCEL", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ModifyPasswdialog", "NEW", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ModifyPasswdialog", "CONFIRM", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ModifyPasswdialog: public Ui_ModifyPasswdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYPASSWDIALOG_H
