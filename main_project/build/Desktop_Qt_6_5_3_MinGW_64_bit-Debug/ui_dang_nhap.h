/********************************************************************************
** Form generated from reading UI file 'dang_nhap.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANG_NHAP_H
#define UI_DANG_NHAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dang_nhap
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dang_nhap)
    {
        if (dang_nhap->objectName().isEmpty())
            dang_nhap->setObjectName("dang_nhap");
        dang_nhap->resize(800, 600);
        centralwidget = new QWidget(dang_nhap);
        centralwidget->setObjectName("centralwidget");
        dang_nhap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dang_nhap);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        dang_nhap->setMenuBar(menubar);
        statusbar = new QStatusBar(dang_nhap);
        statusbar->setObjectName("statusbar");
        dang_nhap->setStatusBar(statusbar);

        retranslateUi(dang_nhap);

        QMetaObject::connectSlotsByName(dang_nhap);
    } // setupUi

    void retranslateUi(QMainWindow *dang_nhap)
    {
        dang_nhap->setWindowTitle(QCoreApplication::translate("dang_nhap", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dang_nhap: public Ui_dang_nhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANG_NHAP_H
