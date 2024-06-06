#ifndef EAST7_H
#define EAST7_H

#include <QWidget>

namespace Ui {
class East7;
}

class East7 : public QWidget
{
    Q_OBJECT

public:
    explicit East7(QWidget *parent = nullptr);
    ~East7();

private:
    Ui::East7 *ui;
};

#endif // EAST7_H
