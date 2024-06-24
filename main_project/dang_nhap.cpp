#include "dang_nhap.h"
#include "ui_dang_nhap.h"

dang_nhap::dang_nhap(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dang_nhap)
{
    ui->setupUi(this);
}

dang_nhap::~dang_nhap()
{
    delete ui;
}
