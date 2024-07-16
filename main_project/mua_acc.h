#ifndef MUA_ACC_H
#define MUA_ACC_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class mua_acc;
}

class mua_acc : public QMainWindow
{
    Q_OBJECT

public:
    explicit mua_acc(QSqlDatabase database, const QString &Idtaikhoan, const QString &CCCD ,QWidget *parent = nullptr);
    ~mua_acc();
    void setDatabase(QSqlDatabase database);
    void getID_taikhoan(const QString &id_taikhoan);

signals:
    void mua_acc_success(const QString &CCCD);

private slots:
    void on_button_mua_clicked();

    void on_chon_loai_currentIndexChanged(int index);

    void on_exit_clicked();

private:
    Ui::mua_acc *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QString id_taikhoan;
    QString CCCD_user;
    bool connectToDatabase();
    void loadData(const QString &loai);
};

#endif // MUA_ACC_H
