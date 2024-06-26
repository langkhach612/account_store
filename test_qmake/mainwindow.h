#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_register_2_clicked();

    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};
#endif // MAINWINDOW_H
