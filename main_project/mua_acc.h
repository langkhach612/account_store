#ifndef MUA_ACC_H
#define MUA_ACC_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class mua_acc;
}

class mua_acc : public QMainWindow
{
    Q_OBJECT

public:
    explicit mua_acc(QWidget *parent = nullptr);
    ~mua_acc();

private:
    Ui::mua_acc *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // MUA_ACC_H
