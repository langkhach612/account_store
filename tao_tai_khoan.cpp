#include "tao_tai_khoan.h"
#include "ui_tao_tai_khoan.h"

tao_tai_khoan::tao_tai_khoan(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::tao_tai_khoan)
{
    ui->setupUi(this);
}

tao_tai_khoan::~tao_tai_khoan()
{
    delete ui;
}
