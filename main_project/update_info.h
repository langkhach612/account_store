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
    explicit Update_info(QWidget *parent = nullptr);
    ~Update_info();

private slots:
    void on_btn_chinhsua_clicked();

    void on_btn_xacnhan_clicked();

private:
    Ui::Update_info *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // UPDATE_INFO_H
