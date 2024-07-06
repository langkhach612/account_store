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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mua_acc
{
public:
    QWidget *centralwidget;
    QComboBox *chon_loai;
    QPushButton *button_mua;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mua_acc)
    {
        if (mua_acc->objectName().isEmpty())
            mua_acc->setObjectName("mua_acc");
        mua_acc->resize(761, 492);
        mua_acc->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 20, 255);"));
        centralwidget = new QWidget(mua_acc);
        centralwidget->setObjectName("centralwidget");
        chon_loai = new QComboBox(centralwidget);
        chon_loai->addItem(QString());
        chon_loai->addItem(QString());
        chon_loai->addItem(QString());
        chon_loai->setObjectName("chon_loai");
        chon_loai->setGeometry(QRect(628, 11, 111, 31));
        QFont font;
        font.setBold(true);
        chon_loai->setFont(font);
        chon_loai->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 124, 255);"));
        button_mua = new QPushButton(centralwidget);
        button_mua->setObjectName("button_mua");
        button_mua->setGeometry(QRect(650, 410, 81, 31));
        button_mua->setFont(font);
        button_mua->setStyleSheet(QString::fromUtf8("background-color: rgb(57, 126, 255);"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 50, 761, 351));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        mua_acc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mua_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 761, 22));
        mua_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(mua_acc);
        statusbar->setObjectName("statusbar");
        mua_acc->setStatusBar(statusbar);

        retranslateUi(mua_acc);

        QMetaObject::connectSlotsByName(mua_acc);
    } // setupUi

    void retranslateUi(QMainWindow *mua_acc)
    {
        mua_acc->setWindowTitle(QCoreApplication::translate("mua_acc", "mua acc", nullptr));
        chon_loai->setItemText(0, QCoreApplication::translate("mua_acc", "ALL", nullptr));
        chon_loai->setItemText(1, QCoreApplication::translate("mua_acc", "Game", nullptr));
        chon_loai->setItemText(2, QCoreApplication::translate("mua_acc", "YouTube", nullptr));

        button_mua->setText(QCoreApplication::translate("mua_acc", "MUA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mua_acc: public Ui_mua_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUA_ACC_H
