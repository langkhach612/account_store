#include "mua_acc.h"
#include "ui_mua_acc.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStandardItemModel>
#include <QSqlTableModel>
mua_acc::mua_acc(QSqlDatabase database, const QString &Idtaikhoan, const QString &CCCD ,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mua_acc),
    db(database),
    id_taikhoan(Idtaikhoan),
    CCCD_user(CCCD)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this, db);

    //setup tableview
    ui->tableView->setModel(model);
    ui->tableView->setSelectionMode(QAbstractItemView::MultiSelection);

    loadData("ALL");
    connect(ui->chon_loai,QOverload<int>::of(&QComboBox::currentIndexChanged), this, &mua_acc::on_chon_loai_currentIndexChanged);
//    connect(ui->button_mua, &QPushButton::clicked, this, &mua_acc::on_button_mua_clicked);
}

mua_acc::~mua_acc()
{
    delete ui;
    db.close();
}

// bool mua_acc::connectToDatabase(){
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

void mua_acc::loadData(const QString &loai){
    QString query = "select id_acc,ten_tai_khoan,gia_tien,loai from acc_list where id_tai_khoan != :id_taikhoan ";
    if(loai != "ALL"){
        query += "and loai = :loai";
    }

    QSqlQuery qry(db);
    qry.prepare(query);
    qry.bindValue(":id_taikhoan",id_taikhoan);
    qDebug()<<id_taikhoan;
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
    //ui->tableView->resizeColumnsToContents();
    //ui->tableView->horizontalHeader()->setStretchLastSection(true);

}



void mua_acc::on_button_mua_clicked()
{
    QModelIndexList select_row = ui->tableView->selectionModel()->selectedRows();

    if(select_row.isEmpty()){
        QMessageBox::warning(this, "Input Error", "Please select at least one account to buy.");
        return;
    }

    int totalPrice = 0;
    QList<QString> accIds;

    for (const QModelIndex &index : select_row) {
        int row = index.row();
        int price = model->data(model->index(row, 2)).toInt(); // cột gia_tien là cột thứ 3
        QString accId = model->data(model->index(row, 0)).toString(); // cột id_acc là cột đầu tiên

        totalPrice += price;
        accIds.append(accId);
    }

    QSqlQuery userQuery(db);
    userQuery.prepare("SELECT so_du FROM tai_khoan WHERE id_tai_khoan = :userId");
    userQuery.bindValue(":userId", id_taikhoan);

    if (!userQuery.exec() || !userQuery.next()) {
        QMessageBox::critical(this, "Database Error", "Could not fetch user balance: " + userQuery.lastError().text());
        return;
    }

    int userBalance = userQuery.value(0).toInt();

    if (userBalance < totalPrice) {
        QMessageBox::warning(this, "Balance Error", "You do not have enough balance to buy the selected accounts.");
        return;
    }

    QSqlQuery transaction(db);
    transaction.prepare("UPDATE tai_khoan SET so_du = so_du - :totalPrice WHERE id_tai_khoan = :userId");
    transaction.bindValue(":totalPrice", totalPrice);
    transaction.bindValue(":userId", id_taikhoan);

    if (!transaction.exec()) {
        QMessageBox::critical(this, "Database Error", "Could not update user balance: " + transaction.lastError().text());
        return;
    }

    db.transaction();

    bool success = true;
    for (QString accId : accIds) {
        QSqlQuery updateAcc(db);
        updateAcc.prepare("UPDATE acc_list SET id_tai_khoan = :userId WHERE id_acc = :accId");
        updateAcc.bindValue(":userId", id_taikhoan);
        updateAcc.bindValue(":accId", accId);

        if (!updateAcc.exec()) {
            success = false;
            QMessageBox::critical(this, "fail:", updateAcc.lastError().text());
            qDebug()<<updateAcc.lastError().text();
            break;
        }

        QSqlQuery insertTransaction(db);
        insertTransaction.prepare("INSERT INTO giao_dich_list (thoi_gian, loai, id_acc, id_tai_khoan) VALUES (NOW(), 'mua', :accId, :userId)");
        insertTransaction.bindValue(":accId", accId);
        insertTransaction.bindValue(":userId", id_taikhoan);

        if (!insertTransaction.exec()) {
            success = false;
            QMessageBox::critical(this, "fail1:",insertTransaction.lastError().text());
            qDebug()<<insertTransaction.lastError().text();
            break;
        }
    }

    if (success) {
        db.commit();
        QMessageBox::information(this, "Success", "Mua acc thành công!");
        emit mua_acc_success(CCCD_user);
        loadData(ui->chon_loai->currentText()); // Cập nhật lại dữ liệu sau khi mua
    } else {
        db.rollback();
        QMessageBox::critical(this, "Database Error", "There was an error while updating the accounts.");
    }
}


void mua_acc::on_chon_loai_currentIndexChanged(int index)
{
    QString loai = ui->chon_loai->itemText(index);
    loadData(loai);
}


void mua_acc::on_exit_clicked()
{
    this->close();
}

