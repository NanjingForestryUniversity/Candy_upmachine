#include "widget.h"
#include <QApplication>
#include "initwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InitWidget w;
    w.show();
    return a.exec();
}
