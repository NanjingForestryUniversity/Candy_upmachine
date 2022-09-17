#ifndef PASSWDDIALOG_H
#define PASSWDDIALOG_H

#include <QDialog>

namespace Ui {
class PasswdDialog;
}

class PasswdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PasswdDialog(QWidget *parent = 0);
    ~PasswdDialog();

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

    void deal_wrong_passwd();

signals:
    void send_password(QString);

private:
    Ui::PasswdDialog *ui;
};

#endif // PASSWDDIALOG_H
