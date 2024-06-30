/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *user_info;
    QLabel *user_name;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *CCCD;
    QLabel *So_CCCD;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *SDT;
    QLabel *SDT_user;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *dia_chi;
    QPushButton *edit_info;
    QWidget *pic_user2;
    QPushButton *QL_acc;
    QPushButton *QL_giao_dich;
    QGroupBox *tai_khoan_main;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *so_du_tk;
    QPushButton *nap_tien;
    QPushButton *mua_acc;
    QWidget *pic_user1;
    QPushButton *QL_tai_khoan;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(835, 496);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        user_info = new QGroupBox(centralwidget);
        user_info->setObjectName("user_info");
        user_info->setGeometry(QRect(10, 50, 211, 391));
        user_info->setLayoutDirection(Qt::LeftToRight);
        user_name = new QLabel(user_info);
        user_name->setObjectName("user_name");
        user_name->setGeometry(QRect(40, 130, 131, 31));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        user_name->setFont(font1);
        user_name->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(user_info);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 160, 134, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CCCD = new QLabel(layoutWidget);
        CCCD->setObjectName("CCCD");
        CCCD->setFont(font1);
        CCCD->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(CCCD);

        So_CCCD = new QLabel(layoutWidget);
        So_CCCD->setObjectName("So_CCCD");
        So_CCCD->setFont(font1);
        So_CCCD->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(So_CCCD);

        layoutWidget1 = new QWidget(user_info);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 190, 196, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        SDT = new QLabel(layoutWidget1);
        SDT->setObjectName("SDT");

        horizontalLayout_2->addWidget(SDT);

        SDT_user = new QLabel(layoutWidget1);
        SDT_user->setObjectName("SDT_user");

        horizontalLayout_2->addWidget(SDT_user);

        layoutWidget2 = new QWidget(user_info);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 220, 196, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        dia_chi = new QLabel(layoutWidget2);
        dia_chi->setObjectName("dia_chi");

        horizontalLayout_3->addWidget(dia_chi);

        edit_info = new QPushButton(user_info);
        edit_info->setObjectName("edit_info");
        edit_info->setGeometry(QRect(10, 320, 191, 31));
        pic_user2 = new QWidget(user_info);
        pic_user2->setObjectName("pic_user2");
        pic_user2->setGeometry(QRect(60, 50, 81, 81));
        pic_user2->setStyleSheet(QString::fromUtf8("image: url(:/image/Avatar-trang-den.png);"));
        QL_acc = new QPushButton(centralwidget);
        QL_acc->setObjectName("QL_acc");
        QL_acc->setGeometry(QRect(270, 180, 131, 81));
        QL_giao_dich = new QPushButton(centralwidget);
        QL_giao_dich->setObjectName("QL_giao_dich");
        QL_giao_dich->setGeometry(QRect(430, 180, 131, 81));
        QL_giao_dich->setInputMethodHints(Qt::ImhNone);
        QL_giao_dich->setAutoExclusive(false);
        tai_khoan_main = new QGroupBox(centralwidget);
        tai_khoan_main->setObjectName("tai_khoan_main");
        tai_khoan_main->setGeometry(QRect(620, 50, 211, 391));
        widget = new QWidget(tai_khoan_main);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 180, 41));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        so_du_tk = new QLabel(widget);
        so_du_tk->setObjectName("so_du_tk");

        horizontalLayout_4->addWidget(so_du_tk);

        nap_tien = new QPushButton(tai_khoan_main);
        nap_tien->setObjectName("nap_tien");
        nap_tien->setGeometry(QRect(50, 130, 111, 81));
        mua_acc = new QPushButton(tai_khoan_main);
        mua_acc->setObjectName("mua_acc");
        mua_acc->setGeometry(QRect(50, 260, 111, 81));
        pic_user1 = new QWidget(centralwidget);
        pic_user1->setObjectName("pic_user1");
        pic_user1->setGeometry(QRect(780, 10, 41, 41));
        pic_user1->setStyleSheet(QString::fromUtf8("image: url(:/image/Avatar-trang-den.png);"));
        QL_tai_khoan = new QPushButton(centralwidget);
        QL_tai_khoan->setObjectName("QL_tai_khoan");
        QL_tai_khoan->setGeometry(QRect(620, 10, 151, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 835, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        user_info->setTitle(QCoreApplication::translate("MainWindow", "th\303\264ng tin ng\306\260\341\273\235i d\303\271ng", nullptr));
        user_name->setText(QCoreApplication::translate("MainWindow", "T\303\252n ng\306\260\341\273\235i d\303\271ng", nullptr));
        CCCD->setText(QCoreApplication::translate("MainWindow", "CCCD :", nullptr));
        So_CCCD->setText(QCoreApplication::translate("MainWindow", "123456789012", nullptr));
        SDT->setText(QCoreApplication::translate("MainWindow", "s\341\273\221 \304\221i\341\273\207n tho\341\272\241i :", nullptr));
        SDT_user->setText(QCoreApplication::translate("MainWindow", "0948598993", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\304\221\341\273\213a ch\341\273\211 :", nullptr));
        dia_chi->setText(QCoreApplication::translate("MainWindow", "..................", nullptr));
        edit_info->setText(QCoreApplication::translate("MainWindow", "Ch\341\273\211nh s\341\273\255a th\303\264ng tin", nullptr));
        QL_acc->setText(QCoreApplication::translate("MainWindow", "qu\341\272\243n l\303\275 acc", nullptr));
        QL_giao_dich->setText(QCoreApplication::translate("MainWindow", "qu\341\272\243n l\303\275 giao d\341\273\213ch", nullptr));
        tai_khoan_main->setTitle(QCoreApplication::translate("MainWindow", "t\303\240i kho\341\272\243n", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SDTK:", nullptr));
        so_du_tk->setText(QCoreApplication::translate("MainWindow", "500000000000000", nullptr));
        nap_tien->setText(QCoreApplication::translate("MainWindow", "N\341\272\241p ti\341\273\201n", nullptr));
        mua_acc->setText(QCoreApplication::translate("MainWindow", "Mua acc", nullptr));
        QL_tai_khoan->setText(QCoreApplication::translate("MainWindow", "Qu\341\272\243n l\303\275 t\303\240i kho\341\272\243n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
