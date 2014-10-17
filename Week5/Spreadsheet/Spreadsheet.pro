#-------------------------------------------------
#
# Project created by QtCreator 2014-10-17T01:14:43
#
#-------------------------------------------------

QT += core gui widgets

TARGET = Spreadsheet
TEMPLATE = app
QMAKE_CXXFLAGS += -std=gnu++11

SOURCES += main.cpp \
    finddialog.cpp \
    gotocelldialog.cpp

HEADERS  += \
    finddialog.h \
    gotocelldialog.h

FORMS += \
    gotocelldialog.ui
