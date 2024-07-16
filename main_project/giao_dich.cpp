#include "giao_dich.h"
#include "ui_giao_dich.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QSqlTableModel>
#include <QtSql/QSqlDatabase>

giao_dich::giao_dich(QSqlDatabase database, const QString &id_taikhoan ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::giao_dich),
    db(database),
    id_TaiKhoan(id_taikhoan)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this, db);

    ui->tableView->setModel(model);
    ui->tableView->setSelectionMode(QAbstractItemView::MultiSelection);

    loadData("ALL");
    connect(ui->chon_loai,QOverload<int>::of(&QComboBox::currentIndexChanged), this, &giao_dich::on_chon_loai_currentIndexChanged);
}

giao_dich::~giao_dich()
{
    delete ui;
}

void giao_dich::loadData(const QString &loai){
    QString query = "select id_giaodich,thoi_gian,loai,id_acc from giao_dich_list where id_tai_khoan = :id_taikhoan ";
    if(loai != "ALL"){
        query += "and loai = :loai";
    }

    QSqlQuery qry(db);
    qry.prepare(query);
    qry.bindValue(":id_taikhoan",id_TaiKhoan);
    qDebug()<<id_TaiKhoan;
    if(loai !=  "ALL"){
        qry.bindValue(":loai",loai);
        qDebug()<<loai;
    }

    qDebug()<<query;

    if(qry.exec()){
        model->setQuery(std::move(qry));
        qDebug() << "Query executed successfully. Number of rows:" << model->rowCount();
    }
    else{
        QMessageBox::critical(this, "Database Error", qry.lastError().text());
        qDebug() << "Query execution failed:" << qry.lastError().text();
    }
}

void giao_dich::on_chon_loai_currentIndexChanged(int index)
{
    QString loai = ui->chon_loai->itemText(index);
    loadData(loai);
}


void giao_dich::on_exit_clicked()
{
    this->close();
}

