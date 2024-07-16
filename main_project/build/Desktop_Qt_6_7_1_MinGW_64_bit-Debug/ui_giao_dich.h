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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_giao_dich
{
public:
    QWidget *centralwidget;
    QComboBox *chon_loai;
    QTableView *tableView;
    QPushButton *exit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *giao_dich)
    {
        if (giao_dich->objectName().isEmpty())
            giao_dich->setObjectName("giao_dich");
        giao_dich->resize(741, 478);
        giao_dich->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        centralwidget = new QWidget(giao_dich);
        centralwidget->setObjectName("centralwidget");
        chon_loai = new QComboBox(centralwidget);
        chon_loai->addItem(QString());
        chon_loai->addItem(QString());
        chon_loai->addItem(QString());
        chon_loai->setObjectName("chon_loai");
        chon_loai->setGeometry(QRect(630, 30, 81, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        chon_loai->setFont(font);
        chon_loai->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 70, 681, 311));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(640, 390, 75, 31));
        exit->setFont(font);
        exit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        giao_dich->setCentralWidget(centralwidget);
        menubar = new QMenuBar(giao_dich);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 741, 22));
        giao_dich->setMenuBar(menubar);
        statusbar = new QStatusBar(giao_dich);
        statusbar->setObjectName("statusbar");
        giao_dich->setStatusBar(statusbar);

        retranslateUi(giao_dich);

        QMetaObject::connectSlotsByName(giao_dich);
    } // setupUi

    void retranslateUi(QMainWindow *giao_dich)
    {
        giao_dich->setWindowTitle(QCoreApplication::translate("giao_dich", "giao_dich_list", nullptr));
        chon_loai->setItemText(0, QCoreApplication::translate("giao_dich", "ALL", nullptr));
        chon_loai->setItemText(1, QCoreApplication::translate("giao_dich", "mua", nullptr));
        chon_loai->setItemText(2, QCoreApplication::translate("giao_dich", "b\303\241n", nullptr));

        exit->setText(QCoreApplication::translate("giao_dich", "tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class giao_dich: public Ui_giao_dich {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAO_DICH_H
