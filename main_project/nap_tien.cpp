#include "nap_tien.h"
#include "ui_nap_tien.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QPointer>

nap_tien::nap_tien(QSqlDatabase database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nap_tien)
    , db(database)  // Sử dụng kết nối database từ bên ngoài
{
    ui->setupUi(this);
    ui->so_tien_nap->setPlaceholderText("nhập vào số tiền");
}

nap_tien::~nap_tien()
{
    delete ui;
}

// bool nap_tien::connectToDatabase()
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

void nap_tien::on_nut_nap_clicked()
{
    QString so_du = ui->so_tien_nap->text();
    if (so_du.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter an amount to deposit.");
        return;
    }

    bool ok;

    int so_tien = so_du.toInt(&ok);

    if(!ok || so_tien < 0){
        QMessageBox::warning(this, "Input Error", "nhập lỗi...nhập lại");
        return;
    }

    if(db.isOpen()){
        QSqlQuery qry;
        qry.prepare("UPDATE tai_khoan SET so_du = so_du + :so_tien WHERE CCCD = :cccd");
        qry.bindValue(":so_tien", so_tien);
        qry.bindValue(":cccd", User_CCCD);

        if (qry.exec()) {
            QMessageBox::information(this, "Success", "nạp tiền thành công");
            emit napTienThanhCong(User_CCCD);
            this->close();
//            MainWindow *w = new MainWindow();
//            w->load_newdata(User_CCCD);
//            w->show();
        } else {
            QMessageBox::critical(this, "Database Error", qry.lastError().text());
        }
    }
    else {
        QMessageBox::critical(this, "Database Error", "Database is not open.");
    }

}

void nap_tien::get_cccd(const QString &CCCD)
{
    User_CCCD = CCCD;
}

