#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mua_acc.h"
#include "dang_ky.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


bool MainWindow::connectToDatabase()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("acc");
    db.setUserName("root");
    db.setPassword("123456");

    if (!db.open()) {
        qDebug() << "Error: " << db.lastError().text();
        return false;
    }
    return true;
}

void MainWindow::on_QL_tai_khoan_clicked()
{
    Dang_ky *dang_ky = new Dang_ky(this);
    dang_ky->show();
}

void MainWindow::on_nap_tien_clicked()
{

}


void MainWindow::on_mua_acc_clicked()
{
    mua_acc *mua_accc = new mua_acc(this);
    mua_accc->setDatabase(db);
    mua_accc->show();
}


void MainWindow::on_QL_giao_dich_clicked()
{

}


void MainWindow::on_QL_acc_clicked()
{

}


void MainWindow::on_edit_info_clicked()
{

}
