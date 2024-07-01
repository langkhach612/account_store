#include "giao_dich.h"
#include "ui_giao_dich.h"

giao_dich::giao_dich(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::giao_dich)
{
    ui->setupUi(this);
}

giao_dich::~giao_dich()
{
    delete ui;
}
