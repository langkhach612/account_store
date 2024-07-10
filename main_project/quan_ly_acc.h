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
    explicit quan_ly_acc(QWidget *parent = nullptr);
    ~quan_ly_acc();

private slots:
    void on_btnBack_clicked();

    void on_btnEdit_clicked();

    void on_btnUpdate_clicked();

    void on_btnUpdate_2_clicked();

private:
    Ui::quan_ly_acc *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // QUAN_LY_ACC_H
