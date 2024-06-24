#ifndef GIAO_DICH_H
#define GIAO_DICH_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class giao_dich;
}

class giao_dich : public QMainWindow
{
    Q_OBJECT

public:
    explicit giao_dich(QWidget *parent = nullptr);
    ~giao_dich();

private:
    Ui::giao_dich *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // GIAO_DICH_H
