#include "passwddialog.h"
#include "ui_passwddialog.h"
#include <QDebug>

PasswdDialog::PasswdDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PasswdDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);                         //隐藏窗体
    setModal(true);                                                  //设置为模态对话框

    ui->lineEdit->setFocus();                                        //lineEdit为焦点
    ui->lineEdit->setEchoMode(QLineEdit::Password);                  //显示模式为密码
    QList<QPushButton*> button = findChildren<QPushButton*>();       //设置所有按键不为焦点
    for(int i=0; i<button.length(); i++)
    {
        button[i]->setFocusPolicy(Qt::NoFocus);
    }

}

PasswdDialog::~PasswdDialog()
{
    delete ui;
}

void PasswdDialog::on_btn1_clicked()
{

    QString password = ui->lineEdit->text();
    password.append("1");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn2_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("2");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn3_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("3");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn4_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("4");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn5_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("5");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn6_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("6");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn7_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("7");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn8_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("8");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn9_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("9");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btn0_clicked()
{
    QString password = ui->lineEdit->text();
    password.append("0");
    ui->lineEdit->setText(password);
}

void PasswdDialog::on_btnDot_clicked()
{

}

void PasswdDialog::on_btnCL_clicked()
{
    ui->lineEdit->clear();
}

void PasswdDialog::on_btnDE_clicked()
{
    ui->lineEdit->backspace();
}


void PasswdDialog::on_btnCancel_clicked()
{
    this->close();
}

void PasswdDialog::on_btnEnt_clicked()
{
    QString password = ui->lineEdit->text();
    emit send_password(password);
}

void PasswdDialog::deal_wrong_passwd()
{
    ui->lineEdit->clear();
}
