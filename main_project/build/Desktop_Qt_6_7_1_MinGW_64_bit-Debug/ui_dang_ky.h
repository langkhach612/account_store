/********************************************************************************
** Form generated from reading UI file 'dang_ky.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANG_KY_H
#define UI_DANG_KY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dang_ky
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dang_ky)
    {
        if (Dang_ky->objectName().isEmpty())
            Dang_ky->setObjectName("Dang_ky");
        Dang_ky->resize(800, 600);
        centralwidget = new QWidget(Dang_ky);
        centralwidget->setObjectName("centralwidget");
        Dang_ky->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dang_ky);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Dang_ky->setMenuBar(menubar);
        statusbar = new QStatusBar(Dang_ky);
        statusbar->setObjectName("statusbar");
        Dang_ky->setStatusBar(statusbar);

        retranslateUi(Dang_ky);

        QMetaObject::connectSlotsByName(Dang_ky);
    } // setupUi

    void retranslateUi(QMainWindow *Dang_ky)
    {
        Dang_ky->setWindowTitle(QCoreApplication::translate("Dang_ky", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dang_ky: public Ui_Dang_ky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANG_KY_H
