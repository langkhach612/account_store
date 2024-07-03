#include "mua_acc.h"
#include "ui_mua_acc.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QStandardItemModel>
mua_acc::mua_acc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mua_acc)
{
    ui->setupUi(this);
    loadData();
}

mua_acc::~mua_acc()
{
    delete ui;
    db.close();
}

bool mua_acc::connectToDatabase(){
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("acc");
    db.setUserName("root");
    db.setPassword("123456");

    if (!db.open()) {
        qDebug() << "Error: " << db.lastError().text();
        return false;
    }
    return true;
}

void mua_acc::setDatabase(QSqlDatabase database){
    db = database;
}

void mua_acc::loadData(){
    if (connectToDatabase()) {
        QSqlQuery query(db);
        query.prepare("SELECT * FROM acc_list");
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }

        // Thiết lập model và đưa dữ liệu vào table view
        QStandardItemModel *model = new QStandardItemModel();
        QSqlRecord rec = query.record();
        int columns = rec.count();
        model->setColumnCount(columns);
        for (int i = 0; i < columns; ++i) {
            model->setHeaderData(i, Qt::Horizontal, rec.fieldName(i));
        }

        int row = 0;
        while (query.next()) {
            model->insertRow(row);
            for (int i = 0; i < columns; ++i) {
                model->setData(model->index(row, i), query.value(i));
            }
            ++row;
        }
        ui->tableView->setModel(model);
    } else {
        QMessageBox::critical(this, "Database Error", "Database ......");
    }
}



void mua_acc::on_button_mua_clicked()
{

}

