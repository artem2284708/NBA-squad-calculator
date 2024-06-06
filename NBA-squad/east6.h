#ifndef EAST6_H
#define EAST6_H

#include <QWidget>

namespace Ui {
class East6;
}

class East6 : public QWidget
{
    Q_OBJECT

public:
    explicit East6(QWidget *parent = nullptr);
    ~East6();

private:
    Ui::East6 *ui;
};

#endif // EAST6_H
