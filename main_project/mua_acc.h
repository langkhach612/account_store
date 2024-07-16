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
    explicit mua_acc(QSqlDatabase database, const QString &Idtaikhoan,QWidget *parent = nullptr);
    ~mua_acc();
    void setDatabase(QSqlDatabase database);
    void getID_taikhoan(const QString &id_taikhoan);

private slots:
    void on_button_mua_clicked();

    void on_chon_loai_currentIndexChanged(int index);

private:
    Ui::mua_acc *ui;
    QSqlDatabase db;
    QSqlTableModel *model;
    QString id_taikhoan;
    bool connectToDatabase();
    void loadData(const QString &loai);
};

#endif // MUA_ACC_H
