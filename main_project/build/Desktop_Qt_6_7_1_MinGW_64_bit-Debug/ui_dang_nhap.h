/********************************************************************************
** Form generated from reading UI file 'dang_nhap.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANG_NHAP_H
#define UI_DANG_NHAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dang_nhap
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *btnDangky;
    QLineEdit *textUser;
    QLineEdit *textPassword;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;
    QPushButton *btnDangky_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dang_nhap)
    {
        if (dang_nhap->objectName().isEmpty())
            dang_nhap->setObjectName("dang_nhap");
        dang_nhap->resize(800, 600);
        centralwidget = new QWidget(dang_nhap);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 50, 541, 371));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setMouseTracking(false);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background:rgb(85, 255, 255);\n"
"border-radius: 8px;\n"
"}"));
        btnDangky = new QPushButton(groupBox);
        btnDangky->setObjectName("btnDangky");
        btnDangky->setGeometry(QRect(190, 220, 161, 40));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        btnDangky->setFont(font1);
        btnDangky->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        textUser = new QLineEdit(groupBox);
        textUser->setObjectName("textUser");
        textUser->setGeometry(QRect(10, 94, 517, 37));
        textUser->setFont(font1);
        textPassword = new QLineEdit(groupBox);
        textPassword->setObjectName("textPassword");
        textPassword->setGeometry(QRect(10, 170, 517, 37));
        textPassword->setFont(font1);
        textPassword->setLayoutDirection(Qt::LeftToRight);
        textPassword->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 56, 517, 31));
        label->setFont(font1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(12, 136, 517, 31));
        label_2->setFont(font1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(30, 290, 291, 89));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("#textBrowser{\n"
"background:rgb(85, 255, 255);\n"
"}"));

        horizontalLayout->addWidget(textBrowser);

        btnDangky_3 = new QPushButton(layoutWidget2);
        btnDangky_3->setObjectName("btnDangky_3");
        btnDangky_3->setFont(font1);
        btnDangky_3->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));

        horizontalLayout->addWidget(btnDangky_3);

        dang_nhap->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dang_nhap);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        groupBox->setTitle(QCoreApplication::translate("dang_nhap", "                             \304\220\304\203ng nh\341\272\255p", nullptr));
        btnDangky->setText(QCoreApplication::translate("dang_nhap", "\304\220\304\203ng nh\341\272\255p", nullptr));
        label->setText(QCoreApplication::translate("dang_nhap", " T\303\252n t\303\240i kho\341\272\243n:", nullptr));
        label_2->setText(QCoreApplication::translate("dang_nhap", " M\341\272\255t kh\341\272\251u:", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("dang_nhap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ch\306\260a c\303\263 t\303\240i kho\341\272\243n?</span></p></body></html>", nullptr));
        btnDangky_3->setText(QCoreApplication::translate("dang_nhap", "\304\220\304\203ng k\303\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dang_nhap: public Ui_dang_nhap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANG_NHAP_H
