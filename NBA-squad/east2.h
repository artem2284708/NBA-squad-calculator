#ifndef EAST2_H
#define EAST2_H

#include <QWidget>

namespace Ui {
class East2;
}

class East2 : public QWidget
{
    Q_OBJECT

public:
    explicit East2(QWidget *parent = nullptr);
    ~East2();

private:
    Ui::East2 *ui;
};

#endif // EAST2_H
