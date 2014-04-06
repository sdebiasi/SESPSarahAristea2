#-------------------------------------------------
#
# Project created by QtCreator 2014-04-01T16:03:48
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = SESPSarahAristea2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mathematicalwindow.cpp \
    grammaticalwindow_it.cpp \
    grammaticalwindow_en.cpp \
    qcustomplot.cpp

HEADERS  += mainwindow.h \
    mathematicalwindow.h \
    grammaticalwindow_it.h \
    grammaticalwindow_en.h \
    qcustomplot.h

FORMS    += mainwindow.ui \
    mathematicalwindow.ui \
    grammaticalwindow_it.ui \
    grammaticalwindow_en.ui \
    inputequationwindow.ui \
    instructiondialog2.ui
