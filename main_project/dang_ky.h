#ifndef DANG_KY_H
#define DANG_KY_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class Dang_ky;
}

class Dang_ky : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dang_ky(QWidget *parent = nullptr);
    ~Dang_ky();

private slots:
    void on_btnHello_clicked();

    void on_btnInfor_clicked();

    void on_btnQuestion_clicked();

    void on_btnDangky_clicked();

    void on_btnCapnhat_clicked();

private:
    Ui::Dang_ky *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // DANG_KY_H
