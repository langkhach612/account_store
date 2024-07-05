#include "update_info.h"
#include "ui_update_info.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql/QSqlDatabase>
#include <QDebug>

Update_info::Update_info(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Update_info)
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

void Update_info::on_btn_chinhsua_clicked()
{

}


void Update_info::on_btn_xacnhan_clicked()
{

}

