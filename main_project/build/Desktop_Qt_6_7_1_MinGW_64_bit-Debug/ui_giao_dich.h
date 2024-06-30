/********************************************************************************
** Form generated from reading UI file 'giao_dich.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAO_DICH_H
#define UI_GIAO_DICH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_giao_dich
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *giao_dich)
    {
        if (giao_dich->objectName().isEmpty())
            giao_dich->setObjectName("giao_dich");
        giao_dich->resize(800, 600);
        centralwidget = new QWidget(giao_dich);
        centralwidget->setObjectName("centralwidget");
        giao_dich->setCentralWidget(centralwidget);
        menubar = new QMenuBar(giao_dich);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        giao_dich->setMenuBar(menubar);
        statusbar = new QStatusBar(giao_dich);
        statusbar->setObjectName("statusbar");
        giao_dich->setStatusBar(statusbar);

        retranslateUi(giao_dich);

        QMetaObject::connectSlotsByName(giao_dich);
    } // setupUi

    void retranslateUi(QMainWindow *giao_dich)
    {
        giao_dich->setWindowTitle(QCoreApplication::translate("giao_dich", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class giao_dich: public Ui_giao_dich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAO_DICH_H
