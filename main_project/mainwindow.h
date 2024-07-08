#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dashboard;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setupuserinfo(const QString &CCCD, const QString &so_du);
    void load_newdata(const QString &CCCD);
    void cap_nhat_so_du(const QString &CCCD);

private slots:
    void on_QL_tai_khoan_clicked();

    void on_nap_tien_clicked();

    void on_mua_acc_clicked();

    void on_QL_giao_dich_clicked();

    void on_QL_acc_clicked();

    void on_edit_info_clicked();

private:
    Ui::Dashboard *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};
#endif // MAINWINDOW_H
