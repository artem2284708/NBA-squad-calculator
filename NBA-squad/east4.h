#ifndef EAST4_H
#define EAST4_H

#include <QWidget>

namespace Ui {
class East4;
}

class East4 : public QWidget
{
    Q_OBJECT

public:
    explicit East4(QWidget *parent = nullptr);
    ~East4();

private:
    Ui::East4 *ui;
};

#endif // EAST4_H
