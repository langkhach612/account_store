#include "mainwindow.h"
#include "dang_nhap.h"
#include "ui_dang_nhap.h"
#include "dang_ky.h"
#include "ui_dang_ky.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QPointer>
#include "mainwindow.h"



dang_nhap::dang_nhap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dang_nhap)
{
    ui->setupUi(this);


    // Database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("acc");
    db.setUserName("root");
    db.setPassword("123456789");

    if (!db.open()) {
        qDebug() << "Error: " << db.lastError().text();
        QMessageBox::critical(this, "Database Connection Error", "Could not connect to the database: " + db.lastError().text());
        return;
    }



}

dang_nhap::~dang_nhap()
{
    delete ui;
}

void dang_nhap::on_btnDangky_clicked()
{
    QString user = ui->textUser->text();
    QString pass = ui->textPassword->text();

    if (user.isEmpty() || pass.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập tên tài khoản và mật khẩu!");
        return;
    }

    QSqlQuery qry;
    qry.prepare("SELECT * FROM tai_khoan WHERE ten_tai_khoan = :user AND mat_khau = :pass");
    qry.bindValue(":user", user);
    qry.bindValue(":pass", pass);

    if (!qry.exec()) {
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra tài khoản: " + qry.lastError().text());
        qDebug() << "Lỗi cơ sở dữ liệu: " << qry.lastError().text();
        return;
    }

    if (qry.next()) {
        QMessageBox::information(this, "Thành công", "Đăng nhập thành công!");

        // Đóng cửa sổ hiện tại của đăng kí
        this->close();

        // Tạo một đối tượng dang_nhap và hiển thị nó
        MainWindow *w = new MainWindow();
        w->show();
    } else {
        QMessageBox::warning(this, "Lỗi", "Sai tên tài khoản hoặc mật khẩu!");
    }

}


// void dang_nhap::on_btnDangky_3_clicked()
// {
//     // Dang_ky *dangKyWindow = new Dang_ky(this);
//     // dangKyWindow->show();
//     // this->close();

//     this->close();
//     Dang_ky w;
//     w.show();

//     // // Sử dụng QPointer để đảm bảo quản lý bộ nhớ tốt hơn
//     // QPointer<Dang_ky> dangKyWindow = new Dang_ky(this);
//     // dangKyWindow->show();
//     // this->close(); // Đóng cửa sổ đăng nhập nếu cần
// }

void dang_nhap::on_btnDangky_3_clicked()
{
    // Đóng cửa sổ hiện tại của đăng nhập
    this->close();

    // Tạo một đối tượng Dang_ky và hiển thị nó
    Dang_ky *w = new Dang_ky();
    w->show();
}


