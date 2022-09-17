/********************************************************************************
** Form generated from reading UI file 'passwddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWDDIALOG_H
#define UI_PASSWDDIALOG_H

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

class Ui_PasswdDialog
{
public:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn0;
    QPushButton *btnDot;
    QPushButton *btn5;
    QPushButton *btn8;
    QPushButton *btn6;
    QPushButton *btn4;
    QPushButton *btn7;
    QLineEdit *lineEdit;
    QPushButton *btnCL;
    QPushButton *btn3;
    QPushButton *btn9;
    QPushButton *btnDE;
    QPushButton *btnCancel;
    QPushButton *btnEnt;
    QLabel *label;

    void setupUi(QDialog *PasswdDialog)
    {
        if (PasswdDialog->objectName().isEmpty())
            PasswdDialog->setObjectName(QString::fromUtf8("PasswdDialog"));
        PasswdDialog->resize(300, 433);
        btn1 = new QPushButton(PasswdDialog);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(20, 120, 51, 51));
        btn2 = new QPushButton(PasswdDialog);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(90, 120, 51, 51));
        btn0 = new QPushButton(PasswdDialog);
        btn0->setObjectName(QString::fromUtf8("btn0"));
        btn0->setGeometry(QRect(20, 330, 51, 51));
        btnDot = new QPushButton(PasswdDialog);
        btnDot->setObjectName(QString::fromUtf8("btnDot"));
        btnDot->setGeometry(QRect(90, 330, 51, 51));
        btn5 = new QPushButton(PasswdDialog);
        btn5->setObjectName(QString::fromUtf8("btn5"));
        btn5->setGeometry(QRect(90, 190, 51, 51));
        btn8 = new QPushButton(PasswdDialog);
        btn8->setObjectName(QString::fromUtf8("btn8"));
        btn8->setGeometry(QRect(90, 260, 51, 51));
        btn6 = new QPushButton(PasswdDialog);
        btn6->setObjectName(QString::fromUtf8("btn6"));
        btn6->setGeometry(QRect(160, 190, 51, 51));
        btn4 = new QPushButton(PasswdDialog);
        btn4->setObjectName(QString::fromUtf8("btn4"));
        btn4->setGeometry(QRect(20, 190, 51, 51));
        btn7 = new QPushButton(PasswdDialog);
        btn7->setObjectName(QString::fromUtf8("btn7"));
        btn7->setGeometry(QRect(20, 260, 51, 51));
        lineEdit = new QLineEdit(PasswdDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 60, 281, 31));
        lineEdit->setMaxLength(6);
        lineEdit->setAlignment(Qt::AlignCenter);
        btnCL = new QPushButton(PasswdDialog);
        btnCL->setObjectName(QString::fromUtf8("btnCL"));
        btnCL->setGeometry(QRect(230, 260, 61, 51));
        btn3 = new QPushButton(PasswdDialog);
        btn3->setObjectName(QString::fromUtf8("btn3"));
        btn3->setGeometry(QRect(160, 120, 51, 51));
        btn9 = new QPushButton(PasswdDialog);
        btn9->setObjectName(QString::fromUtf8("btn9"));
        btn9->setGeometry(QRect(160, 260, 51, 51));
        btnDE = new QPushButton(PasswdDialog);
        btnDE->setObjectName(QString::fromUtf8("btnDE"));
        btnDE->setGeometry(QRect(230, 120, 61, 51));
        btnCancel = new QPushButton(PasswdDialog);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(230, 190, 61, 51));
        btnEnt = new QPushButton(PasswdDialog);
        btnEnt->setObjectName(QString::fromUtf8("btnEnt"));
        btnEnt->setGeometry(QRect(230, 330, 61, 51));
        label = new QLabel(PasswdDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 191, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        retranslateUi(PasswdDialog);

        QMetaObject::connectSlotsByName(PasswdDialog);
    } // setupUi

    void retranslateUi(QDialog *PasswdDialog)
    {
        PasswdDialog->setWindowTitle(QApplication::translate("PasswdDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        btn1->setText(QApplication::translate("PasswdDialog", "1", 0, QApplication::UnicodeUTF8));
        btn2->setText(QApplication::translate("PasswdDialog", "2", 0, QApplication::UnicodeUTF8));
        btn0->setText(QApplication::translate("PasswdDialog", "0", 0, QApplication::UnicodeUTF8));
        btnDot->setText(QApplication::translate("PasswdDialog", ".", 0, QApplication::UnicodeUTF8));
        btn5->setText(QApplication::translate("PasswdDialog", "5", 0, QApplication::UnicodeUTF8));
        btn8->setText(QApplication::translate("PasswdDialog", "8", 0, QApplication::UnicodeUTF8));
        btn6->setText(QApplication::translate("PasswdDialog", "6", 0, QApplication::UnicodeUTF8));
        btn4->setText(QApplication::translate("PasswdDialog", "4", 0, QApplication::UnicodeUTF8));
        btn7->setText(QApplication::translate("PasswdDialog", "7", 0, QApplication::UnicodeUTF8));
        btnCL->setText(QApplication::translate("PasswdDialog", "CLEAR", 0, QApplication::UnicodeUTF8));
        btn3->setText(QApplication::translate("PasswdDialog", "3", 0, QApplication::UnicodeUTF8));
        btn9->setText(QApplication::translate("PasswdDialog", "9", 0, QApplication::UnicodeUTF8));
        btnDE->setText(QApplication::translate("PasswdDialog", "DELETE", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("PasswdDialog", "CANCEL", 0, QApplication::UnicodeUTF8));
        btnEnt->setText(QApplication::translate("PasswdDialog", "ENTER", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PasswdDialog", "Input password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PasswdDialog: public Ui_PasswdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWDDIALOG_H
