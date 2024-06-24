#include "mua_acc.h"
#include "ui_mua_acc.h"

mua_acc::mua_acc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mua_acc)
{
    ui->setupUi(this);
}

mua_acc::~mua_acc()
{
    delete ui;
}
