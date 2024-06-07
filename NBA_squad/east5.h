#ifndef EAST5_H
#define EAST5_H

#include <QWidget>

namespace Ui {
class East5;
}

class East5 : public QWidget
{
    Q_OBJECT

public:
    explicit East5(QWidget *parent = nullptr);
    ~East5();

private:
    Ui::East5 *ui;
};

#endif // EAST5_H
