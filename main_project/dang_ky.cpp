#include "dang_ky.h"
#include "ui_dang_ky.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>


Dang_ky::Dang_ky(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dang_ky)
{
    ui->setupUi(this);

    //connect(ui->btnExit,SIGNAL(clicked()),this,SLOT(close()));

    //Chữ chìm phần đăng kí:
    ui->textUser->setPlaceholderText("Nhập tên tài khoản");
    ui->textPassword->setPlaceholderText("Nhập mật khẩu");
    ui->textPassword2->setPlaceholderText("Nhập lại mật khẩu bên trên");
    ui->textCccd->setPlaceholderText("Nhập số CCCD");

    //Chữ chìm phần cập nhật tài khoản:
    ui->textCccd2->setPlaceholderText("Nhập CCCD của tk cần cập nhật");
    ui->textName->setPlaceholderText("Cập nhật họ tên");
    ui->textAddress->setPlaceholderText("Cập nhật địa chỉ");
    ui->textPhone->setPlaceholderText("Cập nhật SĐT");

}

Dang_ky::~Dang_ky()
{
    delete ui;
}

void Dang_ky::on_btnHello_clicked()
{
    ui->lblHello->setText("Ấn em rồi nè :v");
}




void Dang_ky::on_btnInfor_clicked()
{
    QMessageBox::information(this,"Thông Báo","Thông báo nè :v");
}


void Dang_ky::on_btnQuestion_clicked()
{
    //QMessageBox::question(this,"Thông báo","Chọn đi em");
    if(QMessageBox::question(this,"Thông báo","Chọn đi em") == QMessageBox::Yes){
        this->setWindowTitle("Yes");
    }
    else{
        this->setWindowTitle("No");
    }

}


void Dang_ky::on_btnDangky_clicked()
{
    //QString ho_ten = ui->username->text();
    QString ho_ten = ui->textUser->text();
    QString password = ui->textPassword->text();
    QString password_2 = ui->textPassword2->text();
    QString cccd = ui->textCccd->text();

    if(password != password_2) {
        QMessageBox::warning(this, "Lỗi", "Mật khẩu không khớp!");
        return;
    }

    QSqlQuery qry;
    qry.prepare("INSERT INTO tai_khoan (ten_tai_khoan, mat_khau, CCCD) "
                "VALUES (:ho_ten, :password, :cccd)");
    qry.bindValue(":ho_ten", ho_ten);
    qry.bindValue(":password", password);
    qry.bindValue(":cccd", cccd);

    if(qry.exec()) {
        QMessageBox::information(this, "Thành công", "Đăng ký tài khoản thành công!");
    } else {
        QMessageBox::critical(this, "Lỗi", "Đăng ký tài khoản thất bại: " + qry.lastError().text());
        qDebug() << "Database error: " << qry.lastError().text();
    }

}




// void Dang_ky::on_btnCapnhat_clicked()
// {
//     QString cccd2 = ui->textCccd2->text();
//     QString name = ui->textName->text();
//     QString sdt = ui->textPhone->text();
//     QString dia_chi = ui->textAddress->text();

//     QSqlQuery qry_cn;
//     qry_cn.prepare("INSERT INTO nguoi_dung(CCCD,ho_ten,dia_chi,so_dien_thoai)"
//                    "VALUES (:cccd2,:name,:dia_chi,:sdt)");



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
    check_query.prepare("SELECT * FROM tai_khoan WHERE CCCD = :cccd2"); //kiểm tra cccd có tồi tại không
    check_query.bindValue(":cccd2", cccd2);

    if (!check_query.exec()) {
        QMessageBox::critical(this, "Lỗi", "Lỗi khi kiểm tra CCCD: " + check_query.lastError().text());
        qDebug() << "Database error: " << check_query.lastError().text();
        return;
    }

    if (check_query.next()) {
        QSqlQuery update_query;
        update_query.prepare("UPDATE nguoi_dung SET ho_ten = :name, dia_chi = :dia_chi, so_dien_thoai = :sdt WHERE CCCD = :cccd2");
        update_query.bindValue(":name", name);
        update_query.bindValue(":dia_chi", dia_chi);
        update_query.bindValue(":sdt", sdt);
        update_query.bindValue(":cccd2", cccd2);

        if (update_query.exec()) {
            QMessageBox::information(this, "Thành công", "Cập nhật thông tin thành công!");
        } else {
            QMessageBox::critical(this, "Lỗi", "Cập nhật thông tin thất bại: " + update_query.lastError().text());
            qDebug() << "Database error: " << update_query.lastError().text();
        }
    } else {
        QMessageBox::warning(this, "Lỗi", "CCCD không tồn tại trong bảng tài khoản!");
    }
}
