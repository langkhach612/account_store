#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mua_acc.h"
#include "dang_ky.h"
#include "nap_tien.h"
#include "update_info.h"
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
    Update_info *ui_update = new Update_info(this);
    ui_update->show();
}

void MainWindow::on_nap_tien_clicked()
{
    nap_tien *nap_card = new nap_tien(this);
    nap_card->show();
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
    Update_info *ui_update = new Update_info(this);
    ui_update->show();
}

void MainWindow::setupuserinfo(const QString &CCCD, const QString &so_du)
{
    QSqlQuery qry;
    qry.prepare("select ho_ten, dia_chi, so_dien_thoai from nguoi_dung where CCCD = :CCCD ");
    qry.bindValue(":CCCD",CCCD);

    if (!qry.exec())
    {
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra tài khoản: " + qry.lastError().text());
        qDebug() << "Lỗi cơ sở dữ liệu: " << qry.lastError().text();
        return;
    }
    if(qry.next())
    {
        QString ho_ten = qry.value(0).toString();
        QString dia_chi = qry.value(1).toString();
        QString so_dien_thoai = qry.value(2).toString();
        ui->So_CCCD->setText(CCCD);
        ui->user_name->setText(ho_ten);
        ui->SDT_user->setText(so_dien_thoai);
        ui->dia_chi->setText(dia_chi);
        ui->so_du_tk->setText(so_du);
    }
    else{
        QMessageBox::warning(this, "Lỗi", "không xác định được lỗi");
    }
}
