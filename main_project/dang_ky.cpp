#include "dang_ky.h"
#include "ui_dang_ky.h"

Dang_ky::Dang_ky(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dang_ky)
{
    ui->setupUi(this);
}

Dang_ky::~Dang_ky()
{
    delete ui;
}
