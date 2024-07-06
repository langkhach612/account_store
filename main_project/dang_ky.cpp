#include "dang_ky.h"
#include "ui_dang_ky.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include "dang_nhap.h"
#include "ui_dang_nhap.h"
#include "tao_tai_khoan.h"

Dang_ky::Dang_ky(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dang_ky)
{
    ui->setupUi(this);


    // Database connection
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("acc");
    db.setUserName("root");
    db.setPassword("123456");

    if (!db.open()) {
        qDebug() << "Error: " << db.lastError().text();
        QMessageBox::critical(this, "Database Connection Error", "Could not connect to the database: " + db.lastError().text());
        return;
    }

    //connect(ui->btnExit,SIGNAL(clicked()),this,SLOT(close()));


    //Chữ chìm phần cập nhật tài khoản:
    ui->textCccd2->setPlaceholderText("Nhập CCCD");
    ui->textName->setPlaceholderText("Nhập nhật họ tên");
    ui->textAddress->setPlaceholderText("Nhập địa chỉ");
    ui->textPhone->setPlaceholderText("Nhập SĐT");

}

Dang_ky::~Dang_ky()
{
    delete ui;
}


// void Dang_ky::on_btnDangky_clicked()
// {
//     //QString ho_ten = ui->username->text();
//     QString ho_ten = ui->textUser->text();
//     QString password = ui->textPassword->text();
//     QString password_2 = ui->textPassword2->text();
//     QString cccd = ui->textCccd->text();

//     if(password != password_2) {
//         QMessageBox::warning(this, "Lỗi", "Mật khẩu không khớp!");
//         return;
//     }

//     // Kiểm tra xem CCCD đã tồn tại trong bảng tai_khoan chưa
//     QSqlQuery checkQuery;
//     checkQuery.prepare("SELECT COUNT(*) FROM tai_khoan WHERE CCCD = :cccd");
//     checkQuery.bindValue(":cccd", cccd);
//     if (!checkQuery.exec() || !checkQuery.next() || checkQuery.value(0).toInt() > 0) {
//         QMessageBox::warning(this, "Lỗi", "CCCD đã tồn tại!");
//         db.close();
//         return;
//     }

//     QSqlQuery qry;
//     qry.prepare("INSERT INTO tai_khoan (ten_tai_khoan, mat_khau, CCCD,so_du, tai_khoancol) "
//                 "VALUES (:ho_ten, :password, :cccd, 0, 'a')");
//     qry.bindValue(":ho_ten", ho_ten);
//     qry.bindValue(":password", password);
//     qry.bindValue(":cccd", cccd);

//     if(qry.exec()) {
//         QMessageBox::information(this, "Thành công", "Đăng ký tài khoản thành công!");
//     } else {
//         QMessageBox::critical(this, "Lỗi", "Đăng ký tài khoản thất bại: " + qry.lastError().text());
//         qDebug() << "Database error: " << qry.lastError().text();
//     }

// }




// void Dang_ky::on_btnCapnhat_clicked()
// {
//     QString cccd2 = ui->textCccd2->text();
//     QString name = ui->textName->text();
//     QString sdt = ui->textPhone->text();
//     QString dia_chi = ui->textAddress->text();

//     if (cccd2.isEmpty() || name.isEmpty() || dia_chi.isEmpty() || sdt.isEmpty()) {
//         QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ thông tin!");
//         return;
//     }

//     QSqlQuery check_query;
//     check_query.prepare("SELECT * FROM tai_khoan WHERE CCCD = :cccd2"); //kiểm tra cccd có tồi tại không
//     check_query.bindValue(":cccd2", cccd2);

//     if (!check_query.exec()) {
//         QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra CCCD: " + check_query.lastError().text());
//         qDebug() << "Database error: " << check_query.lastError().text();
//         return;
//     }

//     if (check_query.next()) {
//         QSqlQuery update_query;
//         update_query.prepare("UPDATE nguoi_dung SET ho_ten = :name, dia_chi = :dia_chi, so_dien_thoai = :sdt WHERE CCCD = :cccd2");
//         update_query.bindValue(":name", name);
//         update_query.bindValue(":dia_chi", dia_chi);
//         update_query.bindValue(":sdt", sdt);
//         update_query.bindValue(":cccd2", cccd2);

//         if (update_query.exec()) {
//             QMessageBox::information(this, "Thành công", "Cập nhật thông tin thành công!");
//         } else {
//             QMessageBox::critical(this, "Lỗi", "Cập nhật thông tin thất bại: " + update_query.lastError().text());
//             qDebug() << "Database error: " << update_query.lastError().text();
//         }
//     } else {
//         QMessageBox::warning(this, "Lỗi", "CCCD không tồn tại trong bảng tài khoản!");
//     }
// }

void Dang_ky::on_btnCapnhat_clicked()
{
    QString cccd2 = ui->textCccd2->text();
    QString name = ui->textName->text();
    QString sdt = ui->textPhone->text();
    QString dia_chi = ui->textAddress->text();

    if (cccd2.isEmpty() || name.isEmpty() || dia_chi.isEmpty() || sdt.isEmpty()) {
        QMessageBox::warning(this, "Lỗi", "Vui lòng nhập đầy đủ thông tin!");
        return;
    }

    QSqlQuery check_query;
    check_query.prepare("SELECT * FROM tai_khoan WHERE CCCD = :cccd2"); // kiểm tra cccd có tồn tại không
    check_query.bindValue(":cccd2", cccd2);

    if (!check_query.exec()) {
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra CCCD: " + check_query.lastError().text());
        qDebug() << "Database error: " << check_query.lastError().text();
        return;
    }

    if (check_query.next()) {
        QMessageBox::warning(this, "Lỗi", "CCCD đã tồn tại trong bảng tài khoản!");
        return;
    }

    QSqlQuery insert_query;
    insert_query.prepare("INSERT INTO nguoi_dung (CCCD, ho_ten, dia_chi, so_dien_thoai) VALUES (:cccd2, :name, :dia_chi, :sdt)");
    insert_query.bindValue(":cccd2", cccd2);
    insert_query.bindValue(":name", name);
    insert_query.bindValue(":dia_chi", dia_chi);
    insert_query.bindValue(":sdt", sdt);

    if (insert_query.exec()) {
        QMessageBox::information(this, "Thành công", "Thêm thông tin thành công!");
    } else {
        QMessageBox::critical(this, "Lỗi", "Thêm thông tin thất bại: " + insert_query.lastError().text());
        qDebug() << "Database error: " << insert_query.lastError().text();
    }
}


void Dang_ky::on_btnDangky_2_clicked()
{
    // Đóng cửa sổ hiện tại của đăng kí
    this->close();

    // Tạo một đối tượng dang_nhap và hiển thị nó
    dang_nhap *w = new dang_nhap();
    w->show();
}


void Dang_ky::on_btnCapnhat_2_clicked()
{
    // Đóng cửa sổ hiện tại của đăng kí
    this->close();

    // Tạo một đối tượng dang_nhap và hiển thị nó
    tao_tai_khoan *w = new tao_tai_khoan();
    w->show();
}

