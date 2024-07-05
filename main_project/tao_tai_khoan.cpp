#include "tao_tai_khoan.h"
#include "ui_tao_tai_khoan.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include "dang_nhap.h"
#include "ui_dang_nhap.h"

tao_tai_khoan::tao_tai_khoan(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tao_tai_khoan)
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

    //Chữ chìm phần đăng kí:
    ui->textUser->setPlaceholderText("Nhập tên tài khoản");
    ui->textPassword->setPlaceholderText("Nhập mật khẩu");
    ui->textPassword2->setPlaceholderText("Nhập lại mật khẩu bên trên");
    ui->textCccd->setPlaceholderText("Nhập lại số CCCD đã đăng kí");

}

tao_tai_khoan::~tao_tai_khoan()
{
    delete ui;
}

// void tao_tai_khoan::on_textUser_cursorPositionChanged(int arg1, int arg2)
// {

// }

void tao_tai_khoan::on_btnDangky_clicked()
{
    QString ho_ten = ui->textUser->text();
    QString password = ui->textPassword->text();
    QString password_2 = ui->textPassword2->text();
    QString cccd = ui->textCccd->text();


    if (ho_ten.isEmpty() || password.isEmpty() || password_2.isEmpty() || cccd.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ thông tin!");
        return;
    }
    if (password != password_2) {
        QMessageBox::warning(this, "Lỗi", "Mật khẩu không khớp!");
        return;
    }

    // Kiểm tra xem CCCD đã tồn tại trong bảng nguoi_dung chưa
    QSqlQuery checkNguoiDungQuery;
    checkNguoiDungQuery.prepare("SELECT COUNT(*) FROM nguoi_dung WHERE CCCD = :cccd");
    checkNguoiDungQuery.bindValue(":cccd", cccd);

    if (!checkNguoiDungQuery.exec() || !checkNguoiDungQuery.next() || checkNguoiDungQuery.value(0).toInt() == 0) {
        QMessageBox::warning(this, "Lỗi", "CCCD không trùng khớp với cccd vừa đăng kí!"); //CCCD không tồn tại trong bảng người dùng
        return;
    }

    // Kiểm tra xem CCCD đã tồn tại trong bảng tai_khoan chưa
    QSqlQuery checkTaiKhoanQuery;
    checkTaiKhoanQuery.prepare("SELECT COUNT(*) FROM tai_khoan WHERE CCCD = :cccd");
    checkTaiKhoanQuery.bindValue(":cccd", cccd);

    if (!checkTaiKhoanQuery.exec() || !checkTaiKhoanQuery.next() || checkTaiKhoanQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Lỗi", "CCCD không trùng khớp với cccd vừa đăng kí!"); //CCCD đã tồn tại trong bảng tài khoản
        return;
    }

    // Kiểm tra xem ten_tai_khoan đã tồn tại chưa
    QSqlQuery checkUserNameQuery;
    checkUserNameQuery.prepare("SELECT COUNT(*) FROM tai_khoan WHERE ten_tai_khoan = :ho_ten");
    checkUserNameQuery.bindValue(":ho_ten", ho_ten);

    if (!checkUserNameQuery.exec() || !checkUserNameQuery.next() || checkUserNameQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Lỗi", "Tên tài khoản đã tồn tại!");
        return;
    }

    // Tạo tài khoản mới
    QSqlQuery qry;
    qry.prepare("INSERT INTO tai_khoan (ten_tai_khoan, mat_khau, CCCD, so_du, tai_khoancol) "
                "VALUES (:ho_ten, :password, :cccd, 0, 'a')");
    qry.bindValue(":ho_ten", ho_ten);
    qry.bindValue(":password", password);
    qry.bindValue(":cccd", cccd);

    if (qry.exec()) {
        QMessageBox::information(this, "Thành công", "Đăng ký tài khoản thành công!");
    } else {
        QMessageBox::critical(this, "Lỗi", "Đăng ký tài khoản thất bại: " + qry.lastError().text());
        qDebug() << "Database error: " << qry.lastError().text();
    }
}


void tao_tai_khoan::on_btnDangNhap_clicked()
{
    // Đóng cửa sổ hiện tại của đăng kí
    this->close();

    // Tạo một đối tượng dang_nhap và hiển thị nó
    dang_nhap *w = new dang_nhap();
    w->show();
}

