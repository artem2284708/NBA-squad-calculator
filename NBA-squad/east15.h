#ifndef EAST15_H
#define EAST15_H

#include <QWidget>

namespace Ui {
class East15;
}

class East15 : public QWidget
{
    Q_OBJECT

public:
    explicit East15(QWidget *parent = nullptr);
    ~East15();

private:
    Ui::East15 *ui;
};

#endif // EAST15_H
