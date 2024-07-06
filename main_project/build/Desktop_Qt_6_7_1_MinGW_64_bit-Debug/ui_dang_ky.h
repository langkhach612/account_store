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
#include <QtGui/QIcon>
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

class Ui_Dang_ky
{
public:
    QWidget *centralwidget;
    QLabel *lblHello;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QLineEdit *textCccd2;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *textName;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLineEdit *textPhone;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *textAddress;
    QPushButton *btnCapnhat;
    QPushButton *btnCapnhat_2;
    QPushButton *btnDangky_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dang_ky)
    {
        if (Dang_ky->objectName().isEmpty())
            Dang_ky->setObjectName("Dang_ky");
        Dang_ky->setEnabled(true);
        Dang_ky->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../Downloads/c59e22383e439d1dc452.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Dang_ky->setWindowIcon(icon);
        Dang_ky->setStyleSheet(QString::fromUtf8("#Dang_ky{\n"
"background:rgb(85, 0, 127);\n"
"\n"
"}"));
        Dang_ky->setAnimated(true);
        centralwidget = new QWidget(Dang_ky);
        centralwidget->setObjectName("centralwidget");
        lblHello = new QLabel(centralwidget);
        lblHello->setObjectName("lblHello");
        lblHello->setGeometry(QRect(310, 50, 221, 51));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(240, 10, 331, 481));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        groupBox_2->setFont(font);
        groupBox_2->setMouseTracking(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"background:rgb(85, 255, 255);\n"
"border-radius: 8px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        verticalLayout_7->addWidget(label_5);

        textCccd2 = new QLineEdit(groupBox_2);
        textCccd2->setObjectName("textCccd2");
        textCccd2->setFont(font);

        verticalLayout_7->addWidget(textCccd2);


        verticalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        verticalLayout_8->addWidget(label_6);

        textName = new QLineEdit(groupBox_2);
        textName->setObjectName("textName");
        textName->setFont(font);

        verticalLayout_8->addWidget(textName);


        verticalLayout_6->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        verticalLayout_9->addWidget(label_7);

        textPhone = new QLineEdit(groupBox_2);
        textPhone->setObjectName("textPhone");
        textPhone->setFont(font);

        verticalLayout_9->addWidget(textPhone);


        verticalLayout_6->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        verticalLayout_10->addWidget(label_8);

        textAddress = new QLineEdit(groupBox_2);
        textAddress->setObjectName("textAddress");
        textAddress->setFont(font);

        verticalLayout_10->addWidget(textAddress);


        verticalLayout_6->addLayout(verticalLayout_10);

        btnCapnhat = new QPushButton(groupBox_2);
        btnCapnhat->setObjectName("btnCapnhat");
        btnCapnhat->setFont(font);
        btnCapnhat->setStyleSheet(QString::fromUtf8("#btnCapnhat:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));

        verticalLayout_6->addWidget(btnCapnhat);

        btnCapnhat_2 = new QPushButton(groupBox_2);
        btnCapnhat_2->setObjectName("btnCapnhat_2");
        btnCapnhat_2->setFont(font);
        btnCapnhat_2->setStyleSheet(QString::fromUtf8("#btnCapnhat:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));

        verticalLayout_6->addWidget(btnCapnhat_2);

        btnDangky_2 = new QPushButton(centralwidget);
        btnDangky_2->setObjectName("btnDangky_2");
        btnDangky_2->setGeometry(QRect(260, 530, 297, 40));
        btnDangky_2->setFont(font);
        btnDangky_2->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        Dang_ky->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dang_ky);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Dang_ky->setMenuBar(menubar);
        statusbar = new QStatusBar(Dang_ky);
        statusbar->setObjectName("statusbar");
        Dang_ky->setStatusBar(statusbar);

        retranslateUi(Dang_ky);

        QMetaObject::connectSlotsByName(Dang_ky);
    } // setupUi

    void retranslateUi(QMainWindow *Dang_ky)
    {
        Dang_ky->setWindowTitle(QCoreApplication::translate("Dang_ky", "\304\220\304\203ng K\303\275", nullptr));
        lblHello->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("Dang_ky", "         \304\220\304\203ng k\303\255 t\303\240i kho\341\272\243n", nullptr));
        label_5->setText(QCoreApplication::translate("Dang_ky", " CCCD:", nullptr));
        label_6->setText(QCoreApplication::translate("Dang_ky", " H\341\273\215 t\303\252n:", nullptr));
        label_7->setText(QCoreApplication::translate("Dang_ky", " S\341\273\221 \304\221i\341\273\207n tho\341\272\241i:", nullptr));
        label_8->setText(QCoreApplication::translate("Dang_ky", " \304\220\341\273\213a ch\341\273\211:", nullptr));
        btnCapnhat->setText(QCoreApplication::translate("Dang_ky", "\304\220\304\203ng k\303\275", nullptr));
        btnCapnhat_2->setText(QCoreApplication::translate("Dang_ky", "C\341\272\255p nh\341\272\255t t\303\240i kho\341\272\243n", nullptr));
        btnDangky_2->setText(QCoreApplication::translate("Dang_ky", "\304\220\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dang_ky: public Ui_Dang_ky {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANG_KY_H
