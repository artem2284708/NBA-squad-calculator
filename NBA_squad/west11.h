#ifndef WEST11_H
#define WEST11_H

#include <QWidget>

namespace Ui {
class West11;
}

class West11 : public QWidget
{
    Q_OBJECT

public:
    explicit West11(QWidget *parent = nullptr);
    ~West11();

private:
    Ui::West11 *ui;
};

#endif // WEST11_H
