#include "ban_acc.h"
#include "ui_ban_acc.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

ban_acc::ban_acc(QSqlDatabase database,const QString &id,const QString &CCCD ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ban_acc),
    db(database),
    id_TaiKhoan(id),
    CCCD_user(CCCD)
{
    ui->setupUi(this);
    ui->ten_acc->setPlaceholderText("nhập tên acc");
    ui->mat_khau->setPlaceholderText("nhập mật khẩu acc");
    ui->gia_tien->setPlaceholderText("nhập giá tiền");
    ui->loai->setPlaceholderText("loại tài khoản");
    qDebug()<<"id:"<<id_TaiKhoan;
}

ban_acc::~ban_acc()
{
    delete ui;
}

void ban_acc::on_btn_ban_clicked()
{
    QString ten_acc = ui->ten_acc->text();
    QString mk = ui->mat_khau->text();
    QString gia = ui->gia_tien->text();
    QString loai = ui->loai->text();

    bool ok = true;
    int gia_tien = gia.toInt(&ok);

    if(!ok || gia_tien <= 0 || ten_acc.isEmpty() || mk.isEmpty() || gia.isEmpty() || loai.isEmpty() ){
        QMessageBox::warning(this, "Input Error", "nhập lỗi...nhập lại");
        return;
    }
    if(db.isOpen()){
        QSqlQuery qry(db);
        //thêm dữ liệu vào bảng acc_list
        qry.prepare("INSERT INTO acc_list (ten_tai_khoan, mat_khau,gia_tien,loai, id_tai_khoan) VALUES (:ten,:mk,:gia,:loai, :id)");
        qry.bindValue(":ten",ten_acc);
        qry.bindValue(":mk",mk);
        qry.bindValue(":gia",gia_tien);
        qry.bindValue(":loai",loai);
        qry.bindValue(":id",id_TaiKhoan);

        if(qry.exec()){
            QSqlQuery qry0(db); //lấy id_acc vừa tạo
            QString id_acc;
            qry0.prepare("SELECT id_acc FROM acc_list WHERE id_tai_khoan = :id AND id_acc NOT IN (SELECT id_acc FROM giao_dich_list)");
            qry0.bindValue(":id", id_TaiKhoan);
            if(qry0.exec()){
                if (qry0.next()) {
                    id_acc = qry0.value(0).toString();
                    qDebug() << id_acc;
                } else {
                    qDebug() << "khong lay duoc id_acc, query không trả về kết quả.";
                    return;
                }
            }
            else{
                qDebug() << "khong lay duoc id_Acc" << qry0.lastError().text();
                return;
            }
            QSqlQuery qry1(db);
            //thêm dữ liệu vào bảng giao_dich
            qry1.prepare("INSERT INTO giao_dich_list (thoi_gian, loai, id_acc, id_tai_khoan) VALUES (NOW(), 'bán', :accId, :userId)");
            qry1.bindValue(":accId",id_acc);
            qry1.bindValue(":userId",id_TaiKhoan);

            if(qry1.exec()){
                QSqlQuery qry2(db);
                //tăng số dư tài khoản
                qry2.prepare("UPDATE tai_khoan SET so_du = so_du + :so_tien WHERE id_tai_khoan = :id");
                qry2.bindValue(":so_tien",gia_tien);
                qry2.bindValue(":id",id_TaiKhoan);
                if(qry2.exec()){
                    QMessageBox::information(this, "success","bán acc thành công" );
                    emit ban_acc_success(CCCD_user);
                    this->close();
                    return;
                }
                else{
                    QMessageBox::critical(this, "no success","không thay đổi được số dư");
                    return;
                }
            }
            else{
                QMessageBox::critical(this, "no success",qry1.lastError().text());
                qDebug()<<"khong them duoc vao bang giao dich";
                return;
            }
        }
        else{
            QMessageBox::critical(this, "Database Error", qry.lastError().text());
            qDebug()<<"khong them duoc vao bang acc list : "<<qry.lastError().text();
            return;
        }
    }
    else{
        QMessageBox::critical(this, "Database Error", "database is not open");
        return;
    }
}

