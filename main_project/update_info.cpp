#include "update_info.h"
#include "ui_update_info.h"
#include "dang_nhap.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QDebug>

Update_info::Update_info(QSqlDatabase database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Update_info)
    ,db(database)
{
    ui->setupUi(this);

    //chữ chìm cho phần user_info
    ui->so_dien_thoai->setPlaceholderText("nhập số điện thoại mới");
    ui->dia_chi->setPlaceholderText("nhập địa chỉ mới");
    //chữ chìm cho phần update_matkhau
    ui->mat_khau->setPlaceholderText("nhập mật khẩu mới");
    ui->nhap_lai->setPlaceholderText("nhập lại mật khẩu");


}

Update_info::~Update_info()
{
    delete ui;
}

void Update_info::get_cccd(const QString &CCCD){
    User_CCCD = CCCD;
}

void Update_info::on_btn_chinhsua_clicked()
{
    QString so_dien_thoai_new = ui->so_dien_thoai->text();
    QString dia_chi_new = ui->dia_chi->text();
    if(so_dien_thoai_new.isEmpty() || dia_chi_new.isEmpty()){
        QMessageBox::warning(this,"lỗi đầu vào","yêu cầu nhập đầy đủ thông tin");
        return;
    }
    else{
        if(db.isOpen()){
            QSqlQuery qry(db);
            qry.prepare("UPDATE nguoi_dung SET dia_chi = :address, so_dien_thoai = :phone WHERE CCCD = :cccd");
            qry.bindValue(":address",dia_chi_new);
            qry.bindValue(":phone",so_dien_thoai_new);
            qry.bindValue(":cccd",User_CCCD);
            if(qry.exec()) {
                QMessageBox::information(this, "Success", "Thông tin đã được cập nhật.");
                emit update_success(User_CCCD);
                this->close();
            } else {
                QMessageBox::critical(this, "Database Error", qry.lastError().text());
            }
        }
        else{
            QMessageBox::critical(this, "Database Error", "Database is not open.");
        }
    }
}


void Update_info::on_btn_xacnhan_clicked()
{
    QString mat_khau_new = ui->mat_khau->text();
    QString nhap_lai = ui->nhap_lai->text();

    if(mat_khau_new.isEmpty() || nhap_lai.isEmpty()){
        QMessageBox::warning(this,"lỗi đầu vào","yêu cầu nhập đầy đủ thông tin");
        return;
    }
    else{
        if(mat_khau_new != nhap_lai){
            QMessageBox::warning(this,"lỗi đầu vào","yêu cầu nhập lại mật khẩu");
            return;
        }
        if(db.isOpen()){
            QSqlQuery qry(db);
            qry.prepare("UPDATE tai_khoan SET mat_khau = :password WHERE CCCD = :cccd");
            qry.bindValue(":password",mat_khau_new);
            qry.bindValue(":cccd",User_CCCD);
            if(qry.exec()) {
                QMessageBox::information(this, "Success", "Thông tin đã được cập nhật.");
                this->close();
                dang_nhap *w = new dang_nhap();
                w->show();
            } else {
                QMessageBox::critical(this, "Database Error", qry.lastError().text());
            }
        }
        else{
            QMessageBox::critical(this, "Database Error", "Database is not open.");
        }
    }
}

