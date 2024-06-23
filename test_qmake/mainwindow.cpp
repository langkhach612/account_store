#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Driver List: " << QSqlDatabase::drivers()  ;
    if (connectToDatabase()) {
        qDebug() << "Connected to database successfully!";
    } else {
        qDebug() << "Failed to connect to database.";
    }
    ui->username->setPlaceholderText(" nhập vào họ tên ");
    ui->cccd->setPlaceholderText(" nhập vào số cccd ");
    ui->address->setPlaceholderText("nhập địa chỉ");
    ui->sdt->setPlaceholderText("nhập số điện thoại");
    ui->usernamelogin->setPlaceholderText("nhập tên tài khoản");
    ui->password->setPlaceholderText("nhập password");
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

bool MainWindow::connectToDatabase()
{
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




void MainWindow::on_register_2_clicked()
{
    //bool k = connectToDatabase();
    //if(k == true){
        QString ho_ten = ui->username->text();
        QString cccd = ui->cccd->text();
        QString dia_chi = ui->address->text();
        QString so_dien_thoai = ui->sdt->text();
    //  INSERT INTO `acc`.`nguoi_dung` (`CCCD`, `ho_ten`, `dia_chi`, `so_dien_thoai`) VALUES ('980483927901', 'pham quang L', 'dilangthang', '07938293753');

        QSqlQuery qry;
        qry.prepare("insert into nguoi_dung(CCCD,ho_ten,dia_chi,so_dien_thoai)"
                    "values(:cccd,:ho_ten,:dia_chi,:so_dien_thoai)");

        qry.bindValue(":cccd",cccd);
        qry.bindValue(":ho_ten",ho_ten);
        qry.bindValue(":dia_chi",dia_chi);
        qry.bindValue(":so_dien_thoai",so_dien_thoai);

        if(qry.exec()){
            QMessageBox::information(this,"inserted","inserted data success");
        }
        else{
            QMessageBox::information(this,"can't be inserted","not success");
        }

    //}
    //else{
    //    QMessageBox::information(this,"not connected","database not connected");
    //}
}


void MainWindow::on_login_clicked()
{
    //bool k = connectToDatabase();
    //if(k == true){
        QString ten_tai_khoan = ui->usernamelogin->text();
        QString mat_khau = ui->password->text();

        QSqlQuery query ;//(QSqlDatabase::database("QMYSQL"))
        query.prepare("select * from tai_khoan where ten_tai_khoan = :ten_tai_khoan and mat_khau = :mat_khau");

        query.bindValue(":ten_tai_khoan",ten_tai_khoan);
        query.bindValue(":mat_khau",mat_khau);

        if(query.exec()){

        //    bool found = false;

            if(query.next()){

            //    found = true;

                QString tai_khoandn = query.value(1).toString();
                QString mat_khau = query.value(2).toString();

                if(tai_khoandn == ten_tai_khoan && mat_khau == mat_khau){
                    QMessageBox::information(this,"success","login success");
                }
                else{
                    QMessageBox::information(this,"fail","login fail"); //đoạn này không cần thiết
                }
            }
            else{
                QMessageBox::information(this,"fail","login fail");
            }

        }
        else{
            QMessageBox::information(this,"fail","query fail");
        }

    //}
    //else{
    //    QMessageBox::information(this,"not connected","database not connected");
    //}
}

