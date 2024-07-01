#ifndef TEST_H
#define TEST_H



#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
class test;
}

class test : public QMainWindow
{
    Q_OBJECT

public:
    explicit test(QWidget *parent = nullptr);
    ~test();

private:
    Ui::test *ui;
    QSqlDatabase db;
    bool connectToDatabase();
};

#endif // TEST_H
