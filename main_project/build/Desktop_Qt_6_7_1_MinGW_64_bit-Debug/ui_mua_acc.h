/********************************************************************************
** Form generated from reading UI file 'mua_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUA_ACC_H
#define UI_MUA_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mua_acc
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mua_acc)
    {
        if (mua_acc->objectName().isEmpty())
            mua_acc->setObjectName("mua_acc");
        mua_acc->resize(800, 600);
        centralwidget = new QWidget(mua_acc);
        centralwidget->setObjectName("centralwidget");
        mua_acc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mua_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        mua_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(mua_acc);
        statusbar->setObjectName("statusbar");
        mua_acc->setStatusBar(statusbar);

        retranslateUi(mua_acc);

        QMetaObject::connectSlotsByName(mua_acc);
    } // setupUi

    void retranslateUi(QMainWindow *mua_acc)
    {
        mua_acc->setWindowTitle(QCoreApplication::translate("mua_acc", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mua_acc: public Ui_mua_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUA_ACC_H
