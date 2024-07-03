#include "mainwindow.h"
#include "dang_ky.h"
#include "dang_nhap.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dang_ky w;
    dang_nhap w;
    //MainWindow w;
    w.show();
    return a.exec();
}
