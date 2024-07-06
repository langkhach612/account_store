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
#include <QtWidgets/QLineEdit>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *so_tien_nap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nap_tien)
    {
        if (nap_tien->objectName().isEmpty())
            nap_tien->setObjectName("nap_tien");
        nap_tien->resize(381, 181);
        nap_tien->setStyleSheet(QString::fromUtf8("background-color: rgb(24, 255, 116);"));
        centralwidget = new QWidget(nap_tien);
        centralwidget->setObjectName("centralwidget");
        nut_nap = new QPushButton(centralwidget);
        nut_nap->setObjectName("nut_nap");
        nut_nap->setGeometry(QRect(160, 80, 71, 31));
        QFont font;
        font.setBold(true);
        nut_nap->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 30, 261, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        horizontalLayout->addWidget(label);

        so_tien_nap = new QLineEdit(layoutWidget);
        so_tien_nap->setObjectName("so_tien_nap");
        so_tien_nap->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(so_tien_nap);

        nap_tien->setCentralWidget(centralwidget);
        menubar = new QMenuBar(nap_tien);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 381, 22));
        nap_tien->setMenuBar(menubar);
        statusbar = new QStatusBar(nap_tien);
        statusbar->setObjectName("statusbar");
        nap_tien->setStatusBar(statusbar);

        retranslateUi(nap_tien);

        QMetaObject::connectSlotsByName(nap_tien);
    } // setupUi

    void retranslateUi(QMainWindow *nap_tien)
    {
        nap_tien->setWindowTitle(QCoreApplication::translate("nap_tien", "nap tien", nullptr));
        nut_nap->setText(QCoreApplication::translate("nap_tien", "OK", nullptr));
        label->setText(QCoreApplication::translate("nap_tien", "s\341\273\221 ti\341\273\201n n\341\272\241p th\303\252m :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nap_tien: public Ui_nap_tien {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAP_TIEN_H
