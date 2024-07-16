#ifndef GIAO_DICH_H
#define GIAO_DICH_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlTableModel>

namespace Ui {
class giao_dich;
}

class giao_dich : public QMainWindow
{
    Q_OBJECT

public:
    explicit giao_dich(QSqlDatabase database,const QString &id_taikhoan ,QWidget *parent = nullptr);
    ~giao_dich();

private slots:
    void on_chon_loai_currentIndexChanged(int index);

    void on_exit_clicked();

private:
    Ui::giao_dich *ui;
    QSqlDatabase db;
    QString id_TaiKhoan;
    QSqlTableModel *model;
    bool connectToDatabase();
    void loadData(const QString &loai);
};

#endif // GIAO_DICH_H
