#ifndef INITWIDGET_H
#define INITWIDGET_H

#include <QWidget>
#include "widget.h"
#include <QTimer>

namespace Ui {
class InitWidget;
}

class InitWidget : public QWidget
{
    Q_OBJECT

public:
    explicit InitWidget(QWidget *parent = 0);
    ~InitWidget();

private slots:
    void init_mainwindow_slot();
    void change_window_slot();

private:
    Ui::InitWidget *ui;
    Widget* w;
    QTimer* init_mainwindow;
    QTimer* change_window;
};

#endif // INITWIDGET_H
