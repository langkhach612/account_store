#ifndef QUAN_LY_ACC_H
#define QUAN_LY_ACC_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class quan_ly_acc;
}

class quan_ly_acc : public QMainWindow
{
    Q_OBJECT

public:
    explicit quan_ly_acc(QSqlDatabase database,const QString &id_taikhoan,const QString &CCCD ,QWidget *parent = nullptr);
    ~quan_ly_acc();

private slots:
    void on_btnBack_clicked();

    void on_btnEdit_clicked();

    void on_btnUpdate_clicked();

//    void on_btnUpdate_2_clicked();

private:
    Ui::quan_ly_acc *ui;
    QSqlDatabase db;
    QString id_taikhoan;
    QString CCCD_user;
    bool connectToDatabase();
};

#endif // QUAN_LY_ACC_H
