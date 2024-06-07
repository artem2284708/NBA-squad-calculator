#ifndef EAST12_H
#define EAST12_H

#include <QWidget>

namespace Ui {
class East12;
}

class East12 : public QWidget
{
    Q_OBJECT

public:
    explicit East12(QWidget *parent = nullptr);
    ~East12();

private:
    Ui::East12 *ui;
};

#endif // EAST12_H
