#ifndef EAST13_H
#define EAST13_H

#include <QWidget>

namespace Ui {
class East13;
}

class East13 : public QWidget
{
    Q_OBJECT

public:
    explicit East13(QWidget *parent = nullptr);
    ~East13();

private:
    Ui::East13 *ui;
};

#endif // EAST13_H
