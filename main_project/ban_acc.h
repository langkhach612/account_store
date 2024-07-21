#ifndef BAN_ACC_H
#define BAN_ACC_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class ban_acc;
}

class ban_acc : public QMainWindow
{
    Q_OBJECT

public:
    explicit ban_acc(QSqlDatabase database,const QString &id ,const QString &CCCD,QWidget *parent = nullptr);
    ~ban_acc();

signals:
    void ban_acc_success(const QString &CCCD);

private slots:
    void on_btn_ban_clicked();

private:
    Ui::ban_acc *ui;
    QSqlDatabase db;
    QString id_TaiKhoan;
    QString CCCD_user;
};

#endif // BAN_ACC_H
