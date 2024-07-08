#ifndef NAP_TIEN_H
#define NAP_TIEN_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class nap_tien;
}

class nap_tien : public QMainWindow
{
    Q_OBJECT

public:
    explicit nap_tien(QSqlDatabase db, QWidget *parent = nullptr);
    ~nap_tien();

    void get_cccd(const QString &CCCD);

signals:
    void napTienThanhCong(const QString &CCCD);

private slots:
    void on_nut_nap_clicked();

private:
    Ui::nap_tien *ui;
    QSqlDatabase db;
    QString User_CCCD;
    bool connectToDatabase();
};

#endif // NAP_TIEN_H
