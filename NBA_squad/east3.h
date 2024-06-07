#ifndef EAST3_H
#define EAST3_H

#include <QWidget>

namespace Ui {
class East3;
}

class East3 : public QWidget
{
    Q_OBJECT

public:
    explicit East3(QWidget *parent = nullptr);
    ~East3();

private:
    Ui::East3 *ui;
};

#endif // EAST3_H
