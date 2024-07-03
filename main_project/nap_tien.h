#ifndef NAP_TIEN_H
#define NAP_TIEN_H

#include <QMainWindow>

namespace Ui {
class nap_tien;
}

class nap_tien : public QMainWindow
{
    Q_OBJECT

public:
    explicit nap_tien(QWidget *parent = nullptr);
    ~nap_tien();

private:
    Ui::nap_tien *ui;
};

#endif // NAP_TIEN_H
