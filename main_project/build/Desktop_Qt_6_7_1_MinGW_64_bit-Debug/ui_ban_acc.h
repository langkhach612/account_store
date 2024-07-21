/********************************************************************************
** Form generated from reading UI file 'ban_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAN_ACC_H
#define UI_BAN_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ban_acc
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *ten_acc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *mat_khau;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *gia_tien;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *loai;
    QPushButton *btn_ban;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ban_acc)
    {
        if (ban_acc->objectName().isEmpty())
            ban_acc->setObjectName("ban_acc");
        ban_acc->resize(733, 539);
        centralwidget = new QWidget(ban_acc);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(210, 30, 311, 431));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        groupBox->setFont(font);
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 50, 211, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        ten_acc = new QLineEdit(widget);
        ten_acc->setObjectName("ten_acc");

        verticalLayout->addWidget(ten_acc);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 130, 211, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        mat_khau = new QLineEdit(layoutWidget);
        mat_khau->setObjectName("mat_khau");

        verticalLayout_2->addWidget(mat_khau);

        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(50, 210, 211, 51));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        gia_tien = new QLineEdit(layoutWidget_2);
        gia_tien->setObjectName("gia_tien");

        verticalLayout_3->addWidget(gia_tien);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(50, 290, 211, 51));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        loai = new QLineEdit(layoutWidget_3);
        loai->setObjectName("loai");

        verticalLayout_4->addWidget(loai);

        btn_ban = new QPushButton(groupBox);
        btn_ban->setObjectName("btn_ban");
        btn_ban->setGeometry(QRect(120, 360, 75, 31));
        ban_acc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ban_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 733, 22));
        ban_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(ban_acc);
        statusbar->setObjectName("statusbar");
        ban_acc->setStatusBar(statusbar);

        retranslateUi(ban_acc);

        QMetaObject::connectSlotsByName(ban_acc);
    } // setupUi

    void retranslateUi(QMainWindow *ban_acc)
    {
        ban_acc->setWindowTitle(QCoreApplication::translate("ban_acc", "b\303\241n acc", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ban_acc", "nh\341\272\255p t\303\240i kho\341\272\243n b\303\241n", nullptr));
        label->setText(QCoreApplication::translate("ban_acc", "t\303\252n acc :", nullptr));
        label_2->setText(QCoreApplication::translate("ban_acc", "m\341\272\255t kh\341\272\251u :", nullptr));
        label_3->setText(QCoreApplication::translate("ban_acc", "gi\303\241 ti\341\273\201n :", nullptr));
        label_4->setText(QCoreApplication::translate("ban_acc", "lo\341\272\241i :", nullptr));
        btn_ban->setText(QCoreApplication::translate("ban_acc", "b\303\241n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ban_acc: public Ui_ban_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAN_ACC_H
