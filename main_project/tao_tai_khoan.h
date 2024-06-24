#ifndef TAO_TAI_KHOAN_H
#define TAO_TAI_KHOAN_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class tao_tai_khoan;
}

class tao_tai_khoan : public QMainWindow
{
    Q_OBJECT

public:
    explicit tao_tai_khoan(QWidget *parent = nullptr);
    ~tao_tai_khoan();

private:
    Ui::tao_tai_khoan *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // TAO_TAI_KHOAN_H
