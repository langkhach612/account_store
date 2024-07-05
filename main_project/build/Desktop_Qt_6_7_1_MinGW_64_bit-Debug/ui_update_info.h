/********************************************************************************
** Form generated from reading UI file 'update_info.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_INFO_H
#define UI_UPDATE_INFO_H

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

class Ui_Update_info
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *so_dien_thoai;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *dia_chi;
    QPushButton *btn_chinhsua;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLineEdit *mat_khau;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *nhap_lai;
    QPushButton *btn_xacnhan;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Update_info)
    {
        if (Update_info->objectName().isEmpty())
            Update_info->setObjectName("Update_info");
        Update_info->resize(760, 406);
        Update_info->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 127);\n"
"background-color: rgb(98, 98, 98);"));
        centralwidget = new QWidget(Update_info);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 90, 291, 211));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 255);"));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 231, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        so_dien_thoai = new QLineEdit(widget);
        so_dien_thoai->setObjectName("so_dien_thoai");
        so_dien_thoai->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(so_dien_thoai);

        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 99, 231, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        dia_chi = new QLineEdit(layoutWidget);
        dia_chi->setObjectName("dia_chi");
        dia_chi->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(dia_chi);

        btn_chinhsua = new QPushButton(groupBox);
        btn_chinhsua->setObjectName("btn_chinhsua");
        btn_chinhsua->setGeometry(QRect(100, 163, 91, 31));
        btn_chinhsua->setFont(font);
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(480, 90, 251, 211));
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 255, 255);"));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 40, 231, 51));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        mat_khau = new QLineEdit(layoutWidget_2);
        mat_khau->setObjectName("mat_khau");
        mat_khau->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(mat_khau);

        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 100, 231, 51));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_4->setSpacing(1);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_4);

        nhap_lai = new QLineEdit(layoutWidget_3);
        nhap_lai->setObjectName("nhap_lai");
        nhap_lai->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(nhap_lai);

        btn_xacnhan = new QPushButton(groupBox_2);
        btn_xacnhan->setObjectName("btn_xacnhan");
        btn_xacnhan->setGeometry(QRect(80, 163, 91, 31));
        btn_xacnhan->setFont(font);
        Update_info->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Update_info);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 760, 22));
        Update_info->setMenuBar(menubar);
        statusbar = new QStatusBar(Update_info);
        statusbar->setObjectName("statusbar");
        Update_info->setStatusBar(statusbar);

        retranslateUi(Update_info);

        QMetaObject::connectSlotsByName(Update_info);
    } // setupUi

    void retranslateUi(QMainWindow *Update_info)
    {
        Update_info->setWindowTitle(QCoreApplication::translate("Update_info", "update_info", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Update_info", "s\341\273\255a th\303\264ng tin c\303\241 nh\303\242n", nullptr));
        label->setText(QCoreApplication::translate("Update_info", "s\341\273\221 \304\221i\341\273\207n tho\341\272\241i ", nullptr));
        label_3->setText(QCoreApplication::translate("Update_info", "\304\221\341\273\213a ch\341\273\211", nullptr));
        btn_chinhsua->setText(QCoreApplication::translate("Update_info", "ch\341\273\211nh s\341\273\255a", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Update_info", "\304\221\341\273\225i m\341\272\255t kh\341\272\251u", nullptr));
        label_2->setText(QCoreApplication::translate("Update_info", "m\341\272\255t kh\341\272\251u m\341\273\233i", nullptr));
        label_4->setText(QCoreApplication::translate("Update_info", "nh\341\272\255p l\341\272\241i m\341\272\255t kh\341\272\251u", nullptr));
        btn_xacnhan->setText(QCoreApplication::translate("Update_info", "x\303\241c nh\341\272\255n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Update_info: public Ui_Update_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_INFO_H
