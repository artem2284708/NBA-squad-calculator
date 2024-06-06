#ifndef EAST14_H
#define EAST14_H

#include <QWidget>

namespace Ui {
class East14;
}

class East14 : public QWidget
{
    Q_OBJECT

public:
    explicit East14(QWidget *parent = nullptr);
    ~East14();

private:
    Ui::East14 *ui;
};

#endif // EAST14_H
