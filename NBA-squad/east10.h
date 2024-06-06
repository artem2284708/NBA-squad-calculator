#ifndef EAST10_H
#define EAST10_H

#include <QWidget>

namespace Ui {
class East10;
}

class East10 : public QWidget
{
    Q_OBJECT

public:
    explicit East10(QWidget *parent = nullptr);
    ~East10();

private:
    Ui::East10 *ui;
};

#endif // EAST10_H
