#ifndef UPDATE_INFO_H
#define UPDATE_INFO_H

#include <QMainWindow>
#include <QSqlDatabase>
namespace Ui {
class Update_info;
}

class Update_info : public QMainWindow
{
    Q_OBJECT

public:
    explicit Update_info(QSqlDatabase database, QWidget *parent = nullptr);
    ~Update_info();
    void get_cccd(const QString &CCCD);
    //void info_update(const QString &dia_chi, const QString &so_dien_thoai);
    //void account_update(const QString &mat_khau);

signals:
    void update_success(const QString &CCCD);

private slots:
    void on_btn_chinhsua_clicked();

    void on_btn_xacnhan_clicked();

private:
    Ui::Update_info *ui;
    QSqlDatabase db;
    bool connectToDatabase();
    QString User_CCCD;
    QString Id_taikhoan;
};

#endif // UPDATE_INFO_H
