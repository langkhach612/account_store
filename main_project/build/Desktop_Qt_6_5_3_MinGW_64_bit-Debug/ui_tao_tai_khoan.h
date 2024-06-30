/********************************************************************************
** Form generated from reading UI file 'tao_tai_khoan.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAO_TAI_KHOAN_H
#define UI_TAO_TAI_KHOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tao_tai_khoan
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tao_tai_khoan)
    {
        if (tao_tai_khoan->objectName().isEmpty())
            tao_tai_khoan->setObjectName("tao_tai_khoan");
        tao_tai_khoan->resize(800, 600);
        centralwidget = new QWidget(tao_tai_khoan);
        centralwidget->setObjectName("centralwidget");
        tao_tai_khoan->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tao_tai_khoan);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        tao_tai_khoan->setMenuBar(menubar);
        statusbar = new QStatusBar(tao_tai_khoan);
        statusbar->setObjectName("statusbar");
        tao_tai_khoan->setStatusBar(statusbar);

        retranslateUi(tao_tai_khoan);

        QMetaObject::connectSlotsByName(tao_tai_khoan);
    } // setupUi

    void retranslateUi(QMainWindow *tao_tai_khoan)
    {
        tao_tai_khoan->setWindowTitle(QCoreApplication::translate("tao_tai_khoan", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tao_tai_khoan: public Ui_tao_tai_khoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAO_TAI_KHOAN_H
