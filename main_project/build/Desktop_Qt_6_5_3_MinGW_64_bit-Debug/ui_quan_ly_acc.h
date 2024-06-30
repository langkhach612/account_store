/********************************************************************************
** Form generated from reading UI file 'quan_ly_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUAN_LY_ACC_H
#define UI_QUAN_LY_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quan_ly_acc
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *quan_ly_acc)
    {
        if (quan_ly_acc->objectName().isEmpty())
            quan_ly_acc->setObjectName("quan_ly_acc");
        quan_ly_acc->resize(800, 600);
        centralwidget = new QWidget(quan_ly_acc);
        centralwidget->setObjectName("centralwidget");
        quan_ly_acc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(quan_ly_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        quan_ly_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(quan_ly_acc);
        statusbar->setObjectName("statusbar");
        quan_ly_acc->setStatusBar(statusbar);

        retranslateUi(quan_ly_acc);

        QMetaObject::connectSlotsByName(quan_ly_acc);
    } // setupUi

    void retranslateUi(QMainWindow *quan_ly_acc)
    {
        quan_ly_acc->setWindowTitle(QCoreApplication::translate("quan_ly_acc", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quan_ly_acc: public Ui_quan_ly_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUAN_LY_ACC_H
