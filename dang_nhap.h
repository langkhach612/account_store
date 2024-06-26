#ifndef DANG_NHAP_H
#define DANG_NHAP_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class dang_nhap;
}

class dang_nhap : public QMainWindow
{
    Q_OBJECT

public:
    explicit dang_nhap(QWidget *parent = nullptr);
    ~dang_nhap();

private slots:
    void on_btnDangky_clicked();

    void on_btnDangky_3_clicked();

public:
    static QSqlDatabase& getInstance();

private:
    Ui::dang_nhap *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // DANG_NHAP_H
