#include "mainwindow.h"

#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QMessageBox>
#include <iostream>

using namespace std;

bool connectToDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");  // Địa chỉ máy chủ MySQL
    db.setPort(3306);  // Cổng của MySQL
    db.setDatabaseName("<name>");  // Tên cơ sở dữ liệu -- tự điền
    db.setUserName("root");  // Tên người dùng
    db.setPassword(".....");  // Mật khẩu -- tự điền

    if (!db.open()) {
        std::cerr << "Failed to connect to database: " << db.lastError().text().toStdString() << std::endl;
        return false;
    }

    std::cout << "Connected to database successfully!" << std::endl;
    return true;
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    if (!connectToDatabase()) {
        QMessageBox::critical(nullptr, "Database Connection", "Failed to connect to database.");
        return -1; // Kết thúc chương trình nếu kết nối thất bại
    }

    // Tiếp tục khởi tạo các thành phần giao diện
    MainWindow w;
    w.show();

    return a.exec();
}
