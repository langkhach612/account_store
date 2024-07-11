/********************************************************************************
** Form generated from reading UI file 'quan_ly_acc.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUAN_LY_ACC_H
#define UI_QUAN_LY_ACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quan_ly_acc
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *btnBack;
    QPushButton *btnEdit;
    QPushButton *btnUpdate;
    QPushButton *btnUpdate_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *quan_ly_acc)
    {
        if (quan_ly_acc->objectName().isEmpty())
            quan_ly_acc->setObjectName("quan_ly_acc");
        quan_ly_acc->resize(800, 627);
        centralwidget = new QWidget(quan_ly_acc);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(80, 60, 631, 421));
        btnBack = new QPushButton(centralwidget);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(0, 10, 91, 31));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        btnBack->setFont(font);
        btnBack->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        btnEdit = new QPushButton(centralwidget);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(90, 510, 161, 41));
        btnEdit->setFont(font);
        btnEdit->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        btnUpdate = new QPushButton(centralwidget);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(510, 530, 151, 41));
        btnUpdate->setFont(font);
        btnUpdate->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        btnUpdate_2 = new QPushButton(centralwidget);
        btnUpdate_2->setObjectName("btnUpdate_2");
        btnUpdate_2->setGeometry(QRect(510, 490, 151, 41));
        btnUpdate_2->setFont(font);
        btnUpdate_2->setStyleSheet(QString::fromUtf8("#btnDangky:hover{\n"
"background-color:rgb(85, 255, 127);\n"
"}"));
        quan_ly_acc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(quan_ly_acc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        quan_ly_acc->setMenuBar(menubar);
        statusbar = new QStatusBar(quan_ly_acc);
        statusbar->setObjectName("statusbar");
        quan_ly_acc->setStatusBar(statusbar);

        retranslateUi(quan_ly_acc);

        QMetaObject::connectSlotsByName(quan_ly_acc);
    } // setupUi

    void retranslateUi(QMainWindow *quan_ly_acc)
    {
        quan_ly_acc->setWindowTitle(QCoreApplication::translate("quan_ly_acc", "Qu\341\272\243n l\303\275 acc", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("quan_ly_acc", "ID Acc", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("quan_ly_acc", "T\303\252n t\303\240i kho\341\272\243n", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("quan_ly_acc", "M\341\272\255t kh\341\272\251u", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("quan_ly_acc", "Lo\341\272\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("quan_ly_acc", "Gi\303\241", nullptr));
        btnBack->setText(QCoreApplication::translate("quan_ly_acc", "Back", nullptr));
        btnEdit->setText(QCoreApplication::translate("quan_ly_acc", "S\341\273\255a th\303\264ng tin", nullptr));
        btnUpdate->setText(QCoreApplication::translate("quan_ly_acc", "Th\303\252m acc", nullptr));
        btnUpdate_2->setText(QCoreApplication::translate("quan_ly_acc", "Th\303\252m 1 d\303\262ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quan_ly_acc: public Ui_quan_ly_acc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUAN_LY_ACC_H
