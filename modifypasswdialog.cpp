#include "modifypasswdialog.h"
#include "ui_modifypasswdialog.h"
#include <QDebug>
#include <QMessageBox>

ModifyPasswdialog::ModifyPasswdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModifyPasswdialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);                         //隐藏窗体
    setModal(true);                                                  //设置为模态对话框

   // ui->lineEdit->setFocus();                                        //lineEdit为焦点
    ui->lineEdit->setEchoMode(QLineEdit::Password);                  //显示模式为密码
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    QList<QPushButton*> button = findChildren<QPushButton*>();       //设置所有按键不为焦点
    for(int i=0; i<button.length(); i++)
    {
        button[i]->setFocusPolicy(Qt::NoFocus);
    }

    connect(ui->lineEdit, SIGNAL(editingFinished()), this, SLOT(On_editingFinished()));
    connect(ui->lineEdit_2, SIGNAL(editingFinished()), this, SLOT(On_editingFinished_2()));
}

ModifyPasswdialog::~ModifyPasswdialog()
{
    delete ui;
}

void ModifyPasswdialog::on_btn1_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("1");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("1");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn2_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("2");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("2");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn3_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("3");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("3");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn4_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("4");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("4");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn5_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("5");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("5");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn6_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("6");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("6");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn7_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("7");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("8");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn8_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("8");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("8");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn9_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("9");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("9");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btn0_clicked()
{
    if(which_edit == 1)
    {
        QString password = ui->lineEdit->text();
        password.append("0");
        ui->lineEdit->setText(password);
    }
    if(which_edit == 2)
    {
        QString password = ui->lineEdit_2->text();
        password.append("0");
        ui->lineEdit_2->setText(password);
    }
}

void ModifyPasswdialog::on_btnDot_clicked()
{

}

void ModifyPasswdialog::on_btnCL_clicked()
{
    if(which_edit == 1)
    {
        ui->lineEdit->clear();
    }
    if(which_edit == 2)
    {
        ui->lineEdit_2->clear();
    }
}

void ModifyPasswdialog::on_btnDE_clicked()
{
    if(which_edit == 1)
    {
        ui->lineEdit->backspace();
    }
    if(which_edit == 2)
    {
        ui->lineEdit_2->backspace();
    }
}

void ModifyPasswdialog::on_btnCancel_clicked()
{
    this->close();
}

void ModifyPasswdialog::on_btnEnt_clicked()
{
    QString password = ui->lineEdit->text();
    QString password2 = ui->lineEdit_2->text();
    if(password == password2)
    {
        emit send_modify_passwd(password);
    }
    else
    {
        QMessageBox::warning(this, "", QString::fromUtf8("密码不一致"));
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
}

void ModifyPasswdialog::On_editingFinished()
{
    which_edit = 2;
}

void ModifyPasswdialog::On_editingFinished_2()
{
    which_edit = 1;
}
