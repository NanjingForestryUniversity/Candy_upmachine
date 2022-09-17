#include "initwidget.h"
#include "ui_initwidget.h"


InitWidget::InitWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InitWidget)
{
    ui->setupUi(this);
    resize(1024, 768);
    this->showFullScreen();
    this->setAutoFillBackground(true);
    this->setPalette(QColor(211, 239, 251));

    init_mainwindow = new QTimer(this);
    change_window = new QTimer(this);
    connect(init_mainwindow, SIGNAL(timeout()), this, SLOT(init_mainwindow_slot()));
    connect(change_window, SIGNAL(timeout()), this, SLOT(change_window_slot()));
    change_window->start(25000);
    init_mainwindow->start(15000);
}

InitWidget::~InitWidget()
{
    delete ui;
}

void InitWidget::change_window_slot()
{
    change_window->stop();
    this->hide();
    w->show();
}


void InitWidget::init_mainwindow_slot()
{
    init_mainwindow->stop();
    w = new Widget();
}


