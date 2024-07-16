#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mua_acc.h"
#include "dang_nhap.h"
#include "giao_dich.h"
#include "nap_tien.h"
#include "update_info.h"
#include "quan_ly_acc.h"
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

    //connect dtb
    if (!QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setPort(3306);
        db.setDatabaseName("acc");
        db.setUserName("root");
        db.setPassword("123456");

        if (!db.open()) {
            qDebug() << "Error: " << db.lastError().text();
            QMessageBox::critical(this, "Database Connection Error", "Could not connect to the database: " + db.lastError().text());
        }
    } else {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}


// bool MainWindow::connectToDatabase()
// {
//     db = QSqlDatabase::addDatabase("QMYSQL");
//     db.setHostName("127.0.0.1");
//     db.setPort(3306);
//     db.setDatabaseName("acc");
//     db.setUserName("root");
//     db.setPassword("123456");

//     if (!db.open()) {
//         qDebug() << "Error: " << db.lastError().text();
//         return false;
//     }
//     return true;
// }

void MainWindow::on_QL_tai_khoan_clicked()
{
    QString CCCD = ui->So_CCCD->text();
    this->close();
    Update_info *ui_update = new Update_info(db,this);
    ui_update->get_cccd(CCCD);
    ui_update->show();
}

void MainWindow::on_nap_tien_clicked()
{
    QString CCCD = ui->So_CCCD->text();
    nap_tien *nap_card = new nap_tien(db, this);
    connect(nap_card, &nap_tien::napTienThanhCong, this, &MainWindow::cap_nhat_so_du);
    nap_card->get_cccd(CCCD);
    nap_card->show();
}

void MainWindow::setID_taikhoan(){
    QString CCCD = ui->So_CCCD->text();
    QSqlQuery qry;
    qry.prepare("SELECT id_tai_khoan FROM tai_khoan WHERE CCCD = :cccd");
    qry.bindValue(":cccd", CCCD);

    if (!qry.exec()) {
        QMessageBox::critical(this, "Lỗi", "Lỗi khi lấy ID tài khoản: " + qry.lastError().text());
        qDebug() << "Lỗi cơ sở dữ liệu: " << qry.lastError().text();
        return;
    }

    if (qry.next()) {
        id_taikhoan = qry.value(0).toString();
        qDebug() << "ID Tài khoản:" << id_taikhoan;
    } else {
        QMessageBox::warning(this, "Lỗi", "Không tìm thấy ID tài khoản.");
        id_taikhoan.clear();
    }
}


void MainWindow::on_mua_acc_clicked()
{
    QString CCCD = ui->So_CCCD->text();
    mua_acc *ma = new mua_acc(db,id_taikhoan, CCCD,this);
    connect(ma,&mua_acc::mua_acc_success,this,&MainWindow::cap_nhat_so_du);
    ma->show();
}


void MainWindow::on_QL_giao_dich_clicked()
{
    giao_dich *g = new giao_dich(db,id_taikhoan,this);

    g->show();
}


void MainWindow::on_QL_acc_clicked()
{
    quan_ly_acc *w = new quan_ly_acc();
    w->show();
}


void MainWindow::on_edit_info_clicked()
{
    QString CCCD = ui->So_CCCD->text();
    Update_info *ui_update = new Update_info(db,this);
    connect(ui_update, &Update_info::update_success,this, &MainWindow::load_newdata);
    ui_update->get_cccd(CCCD);
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
    setID_taikhoan();
}

void MainWindow::load_newdata(const QString &CCCD){
    QSqlQuery qry(db);
    qry.prepare("select ho_ten,dia_chi,so_dien_thoai from nguoi_dung where CCCD = :CCCD");
    qry.bindValue(":CCCD",CCCD);

    QSqlQuery qry1(db);
    qry1.prepare("select so_du from tai_khoan where CCCD = :CCCD");
    qry1.bindValue(":CCCD",CCCD);

    if(!qry.exec()){
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra tài khoản " + qry.lastError().text());
        qDebug() << qry.lastError().text();
        return;
    }
    if(!qry1.exec()){
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra tài khoản1 " + qry.lastError().text());
        qDebug() << qry.lastError().text();
        return;
    }
    if(qry.next() && qry1.next()){
        QString ho_ten = qry.value(0).toString();
        QString dia_chi = qry.value(1).toString();
        QString so_dien_thoai = qry.value(2).toString();
        QString so_du = qry1.value(0).toString();
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

void MainWindow::cap_nhat_so_du(const QString &CCCD){
    load_newdata(CCCD);
}
