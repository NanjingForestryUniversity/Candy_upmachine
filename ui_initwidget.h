/********************************************************************************
** Form generated from reading UI file 'initwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITWIDGET_H
#define UI_INITWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InitWidget
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *InitWidget)
    {
        if (InitWidget->objectName().isEmpty())
            InitWidget->setObjectName(QString::fromUtf8("InitWidget"));
        InitWidget->resize(1024, 768);
        label = new QLabel(InitWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 80, 741, 220));
        QFont font;
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(InitWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(342, 656, 340, 71));
        QFont font1;
        font1.setPointSize(21);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(InitWidget);

        QMetaObject::connectSlotsByName(InitWidget);
    } // setupUi

    void retranslateUi(QWidget *InitWidget)
    {
        InitWidget->setWindowTitle(QApplication::translate("InitWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InitWidget", "\345\215\227\351\200\232\347\273\264\345\260\224\346\226\257\346\234\272\346\242\260\347\247\221\346\212\200\346\234\211\351\231\220\345\205\254\345\217\270\n"
"Nantong Wealth Technical Co, Ltd", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("InitWidget", "\347\263\273\347\273\237\345\210\235\345\247\213\345\214\226\344\270\255...\n"
"Initialization...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InitWidget: public Ui_InitWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITWIDGET_H
