#-------------------------------------------------
#
# Project created by QtCreator 2015-07-05T00:00:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AnimatorEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    editorscene.cpp \
    stateitem.cpp

HEADERS  += mainwindow.h \
    editorscene.h \
    stateitem.h

RESOURCES = qdarkstyle/style.qrc \
    res/res.qrc

FORMS    += mainwindow.ui \
    newparameterdialog.ui

