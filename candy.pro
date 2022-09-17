#-------------------------------------------------
#
# Project created by QtCreator 2021-04-27T04:47:05
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = candy
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    initwidget.cpp \
    passwddialog.cpp \
    camera.cpp \
    thread.cpp \
    correct.cpp \
    modifypasswdialog.cpp

HEADERS += \
        widget.h \
    initwidget.h \
    passwddialog.h \
    camera.h \
    thread.h \
    correct.h \
    modifypasswdialog.h

FORMS += \
        widget.ui \
    initwidget.ui \
    passwddialog.ui \
    modifypasswdialog.ui


# camera SDK
LIBS +=-L/opt/MVS/lib/aarch64/ -lMvCameraControl

INCLUDEPATH += /opt/MVS/include
DEPENDPATH += /opt/MVS/include

LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_core
LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_highgui
LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_imgcodecs
LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_imgproc
LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_videoio
LIBS += -L/usr/lib/aarch64-linux-gnu/ -lopencv_video

INCLUDEPATH += $$/usr/include/opencv4
DEPENDPATH += $$/usr/include/opencv4



