#ifndef EAST8_H
#define EAST8_H

#include <QWidget>

namespace Ui {
class East8;
}

class East8 : public QWidget
{
    Q_OBJECT

public:
    explicit East8(QWidget *parent = nullptr);
    ~East8();

private:
    Ui::East8 *ui;
};

#endif // EAST8_H
