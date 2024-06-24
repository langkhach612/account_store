#include "quan_ly_acc.h"
#include "ui_quan_ly_acc.h"

quan_ly_acc::quan_ly_acc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::quan_ly_acc)
{
    ui->setupUi(this);
}

quan_ly_acc::~quan_ly_acc()
{
    delete ui;
}
