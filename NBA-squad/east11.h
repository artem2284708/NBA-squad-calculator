#ifndef EAST11_H
#define EAST11_H

#include <QWidget>

namespace Ui {
class East11;
}

class East11 : public QWidget
{
    Q_OBJECT

public:
    explicit East11(QWidget *parent = nullptr);
    ~East11();

private:
    Ui::East11 *ui;
};

#endif // EAST11_H
