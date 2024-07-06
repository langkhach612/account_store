/********************************************************************************
** Form generated from reading UI file 'tao_tai_khoan.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAO_TAI_KHOAN_H
#define UI_TAO_TAI_KHOAN_H

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

class Ui_tao_tai_khoan
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *textCccd;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *textUser;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *textPassword;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *textPassword2;
    QPushButton *btnDangky;
    QPushButton *btnDangNhap;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tao_tai_khoan)
    {
        if (tao_tai_khoan->objectName().isEmpty())
            tao_tai_khoan->setObjectName("tao_tai_khoan");
        tao_tai_khoan->resize(800, 600);
        centralwidget = new QWidget(tao_tai_khoan);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 20, 321, 481));
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
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_4->setFont(font1);

        verticalLayout_4->addWidget(label_4);

        textCccd = new QLineEdit(groupBox);
        textCccd->setObjectName("textCccd");
        textCccd->setFont(font1);

        verticalLayout_4->addWidget(textCccd);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);

        verticalLayout->addWidget(label);

        textUser = new QLineEdit(groupBox);
        textUser->setObjectName("textUser");
        textUser->setFont(font1);

        verticalLayout->addWidget(textUser);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        verticalLayout_2->addWidget(label_2);

        textPassword = new QLineEdit(groupBox);
        textPassword->setObjectName("textPassword");
        textPassword->setFont(font1);
        textPassword->setLayoutDirection(Qt::LeftToRight);
        textPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(textPassword);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        verticalLayout_3->addWidget(label_3);

        textPassword2 = new QLineEdit(groupBox);
        textPassword2->setObjectName("textPassword2");
        textPassword2->setFont(font1);
        textPassword2->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        verticalLayout_3->addWidget(textPassword2);


        verticalLayout_5->addLayout(verticalLayout_3);

        btnDangky = new QPushButton(groupBox);
        btnDangky->setObjectName("btnDangky");
        btnDangky->setFont(font1);
        btnDangky->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));

        verticalLayout_5->addWidget(btnDangky);

        btnDangNhap = new QPushButton(groupBox);
        btnDangNhap->setObjectName("btnDangNhap");
        btnDangNhap->setFont(font1);
        btnDangNhap->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));

        verticalLayout_5->addWidget(btnDangNhap);

        tao_tai_khoan->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tao_tai_khoan);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        tao_tai_khoan->setMenuBar(menubar);
        statusbar = new QStatusBar(tao_tai_khoan);
        statusbar->setObjectName("statusbar");
        tao_tai_khoan->setStatusBar(statusbar);

        retranslateUi(tao_tai_khoan);

        QMetaObject::connectSlotsByName(tao_tai_khoan);
    } // setupUi

    void retranslateUi(QMainWindow *tao_tai_khoan)
    {
        tao_tai_khoan->setWindowTitle(QCoreApplication::translate("tao_tai_khoan", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("tao_tai_khoan", "T\341\272\241o t\303\240i kho\341\272\243n", nullptr));
        label_4->setText(QCoreApplication::translate("tao_tai_khoan", " CCCD:", nullptr));
        label->setText(QCoreApplication::translate("tao_tai_khoan", " T\303\252n t\303\240i kho\341\272\243n:", nullptr));
        label_2->setText(QCoreApplication::translate("tao_tai_khoan", " M\341\272\255t kh\341\272\251u:", nullptr));
        label_3->setText(QCoreApplication::translate("tao_tai_khoan", " Nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u:", nullptr));
        btnDangky->setText(QCoreApplication::translate("tao_tai_khoan", "T\341\272\241o", nullptr));
        btnDangNhap->setText(QCoreApplication::translate("tao_tai_khoan", "\304\220\304\203ng nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tao_tai_khoan: public Ui_tao_tai_khoan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAO_TAI_KHOAN_H
