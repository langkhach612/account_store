/********************************************************************************
** Form generated from reading UI file 'nap_tien.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAP_TIEN_H
#define UI_NAP_TIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nap_tien
{
public:
    QWidget *centralwidget;
    QPushButton *nut_nap;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *so_tien_nap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nap_tien)
    {
        if (nap_tien->objectName().isEmpty())
            nap_tien->setObjectName("nap_tien");
        nap_tien->resize(285, 151);
        centralwidget = new QWidget(nap_tien);
        centralwidget->setObjectName("centralwidget");
        nut_nap = new QPushButton(centralwidget);
        nut_nap->setObjectName("nut_nap");
        nut_nap->setGeometry(QRect(100, 70, 71, 31));
        QFont font;
        font.setBold(true);
        nut_nap->setFont(font);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 30, 163, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        so_tien_nap = new QLabel(widget);
        so_tien_nap->setObjectName("so_tien_nap");
        so_tien_nap->setFont(font);

        horizontalLayout->addWidget(so_tien_nap);

        nap_tien->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nap_tien);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 285, 22));
        nap_tien->setMenuBar(menubar);
        statusbar = new QStatusBar(nap_tien);
        statusbar->setObjectName("statusbar");
        nap_tien->setStatusBar(statusbar);

        retranslateUi(nap_tien);

        QMetaObject::connectSlotsByName(nap_tien);
    } // setupUi

    void retranslateUi(QMainWindow *nap_tien)
    {
        nap_tien->setWindowTitle(QCoreApplication::translate("nap_tien", "MainWindow", nullptr));
        nut_nap->setText(QCoreApplication::translate("nap_tien", "OK", nullptr));
        label->setText(QCoreApplication::translate("nap_tien", "s\341\273\221 ti\341\273\201n n\341\272\241p th\303\252m :", nullptr));
        so_tien_nap->setText(QCoreApplication::translate("nap_tien", "50000000", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nap_tien: public Ui_nap_tien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAP_TIEN_H
