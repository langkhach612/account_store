QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

TARGET = main_project
TEMPLATE = app

SOURCES += \
    dang_ky.cpp \
    dang_nhap.cpp \
    giao_dich.cpp \
    main.cpp \
    mainwindow.cpp \
    mua_acc.cpp \
    quan_ly_acc.cpp \
    tao_tai_khoan.cpp

HEADERS += \
    dang_ky.h \
    dang_nhap.h \
    giao_dich.h \
    mainwindow.h \
    mua_acc.h \
    quan_ly_acc.h \
    tao_tai_khoan.h

FORMS += \
    dang_ky.ui \
    dang_nhap.ui \
    giao_dich.ui \
    mainwindow.ui \
    mua_acc.ui \
    quan_ly_acc.ui \
    tao_tai_khoan.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
