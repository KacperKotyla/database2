#-------------------------------------------------
#
# Project created by QtCreator 2018-12-04T20:07:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = database2
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

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    ../Test1_database_/checkifcorrectpassword.cpp \
    ../Test1_database_/confirm_your_password_when_new_account.cpp \
    ../Test1_database_/cryptingmethod.cpp \
    database_acces.cpp \
    hash_the_password.cpp

HEADERS += \
        mainwindow.h \
    ../Test1_database_/checkifcorrcetpassword.h \
    ../Test1_database_/confirm_your_password_when_new_account.h \
    database_acces.h \
    hash_the_password.h

FORMS += \
        mainwindow.ui \
    ../Test1_database_/confirm_your_password_when_new_account.ui \
    database_acces.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
