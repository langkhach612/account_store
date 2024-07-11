#include "quan_ly_acc.h"
#include "ui_quan_ly_acc.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

quan_ly_acc::quan_ly_acc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::quan_ly_acc)
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

    // Set up the table widget
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels({"ID Acc", "Tên tài khoản", "Mật khẩu", "Loại", "Giá"});

    // Retrieve data from MySQL and populate the table
    QSqlQuery query("SELECT id_acc, ten_tai_khoan, mat_khau, loai, gia_tien FROM acc_list");
    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        QMessageBox::critical(this, "Query Error", "Could not retrieve data: " + query.lastError().text());
        return;
    }

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("id_acc").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("ten_tai_khoan").toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("mat_khau").toString()));
        ui->tableWidget->setItem(row, 3, new QTableWidgetItem(query.value("loai").toString()));
        ui->tableWidget->setItem(row, 4, new QTableWidgetItem(query.value("gia_tien").toString()));
        row++;
    }
}

quan_ly_acc::~quan_ly_acc()
{
    delete ui;
}

void quan_ly_acc::on_btnBack_clicked()
{
    this->close();
}

void quan_ly_acc::on_btnEdit_clicked()
{
    int row = ui->tableWidget->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "Selection Error", "Please select a row to edit.");
        return;
    }

    QString id_acc = ui->tableWidget->item(row, 0)->text();
    QString ten_tai_khoan = ui->tableWidget->item(row, 1)->text();
    QString mat_khau = ui->tableWidget->item(row, 2)->text();
    QString loai = ui->tableWidget->item(row, 3)->text();
    QString gia_tien = ui->tableWidget->item(row, 4)->text();

    QSqlQuery query;
    query.prepare("UPDATE acc_list SET ten_tai_khoan = ?, mat_khau = ?, loai = ?, gia_tien = ? WHERE id_acc = ?");
    query.addBindValue(ten_tai_khoan);
    query.addBindValue(mat_khau);
    query.addBindValue(loai);
    query.addBindValue(gia_tien);
    query.addBindValue(id_acc);

    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        QMessageBox::critical(this, "Thất bại", "Không thể cập nhật dữ liệu do: " + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Thành Công", "Dữ liệu được cập nhật thành công!");
}


void quan_ly_acc::on_btnUpdate_clicked()
{
    int row = ui->tableWidget->rowCount() - 1; // Lấy hàng cuối cùng

    QString id_acc = ui->tableWidget->item(row, 0)->text();
    QString ten_tai_khoan = ui->tableWidget->item(row, 1)->text();
    QString mat_khau = ui->tableWidget->item(row, 2)->text();
    QString loai = ui->tableWidget->item(row, 3)->text();
    QString gia_tien = ui->tableWidget->item(row, 4)->text();

    // Kiểm tra nếu bất kỳ trường nào trống
    if (id_acc.isEmpty() || ten_tai_khoan.isEmpty() || mat_khau.isEmpty() || loai.isEmpty() || gia_tien.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields must be filled.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO acc_list (id_acc, ten_tai_khoan, mat_khau, loai, gia_tien) VALUES (?, ?, ?, ?, ?)");
    query.addBindValue(id_acc);
    query.addBindValue(ten_tai_khoan);
    query.addBindValue(mat_khau);
    query.addBindValue(loai);
    query.addBindValue(gia_tien);

    if (!query.exec()) {
        qDebug() << "Error: " << query.lastError().text();
        QMessageBox::critical(this, "Insert Error", "Could not insert data: " + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Thành công", "Thêm thông tin thành công !");
}


void quan_ly_acc::on_btnUpdate_2_clicked()  //thêm 1 dòng để thêm acc
{
    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
        ui->tableWidget->setItem(row, col, new QTableWidgetItem(""));
    }
}

