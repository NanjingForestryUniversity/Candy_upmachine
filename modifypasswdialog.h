#ifndef MODIFYPASSWDIALOG_H
#define MODIFYPASSWDIALOG_H

#include <QDialog>

namespace Ui {
class ModifyPasswdialog;
}

class ModifyPasswdialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModifyPasswdialog(QWidget *parent = 0);
    ~ModifyPasswdialog();

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn0_clicked();
    void on_btnDot_clicked();
    void on_btnCL_clicked();
    void on_btnDE_clicked();
    void on_btnCancel_clicked();
    void on_btnEnt_clicked();

    void On_editingFinished();
    void On_editingFinished_2();

private:
    Ui::ModifyPasswdialog *ui;
    int which_edit = 1;

signals:
    void send_modify_passwd(QString);
};

#endif // MODIFYPASSWDIALOG_H
