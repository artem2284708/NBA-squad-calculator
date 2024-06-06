#ifndef EAST1_H
#define EAST1_H

#include <QWidget>

namespace Ui {
class East1;
}

class East1 : public QWidget
{
    Q_OBJECT

public:
    explicit East1(QWidget *parent = nullptr);
    ~East1();

private:
    Ui::East1 *ui;
};

#endif // EAST1_H
