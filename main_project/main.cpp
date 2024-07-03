#include "mainwindow.h"
#include "dang_ky.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dang_ky w;
    w.show();
    return a.exec();
}
