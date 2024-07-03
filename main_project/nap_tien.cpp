#include "nap_tien.h"
#include "ui_nap_tien.h"

nap_tien::nap_tien(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nap_tien)
{
    ui->setupUi(this);
}

nap_tien::~nap_tien()
{
    delete ui;
}
