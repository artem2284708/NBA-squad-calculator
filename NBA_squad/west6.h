#ifndef WEST6_H
#define WEST6_H

#include <QWidget>

namespace Ui {
class West6;
}

class West6 : public QWidget
{
    Q_OBJECT

public:
    explicit West6(QWidget *parent = nullptr);
    ~West6();

private:
    Ui::West6 *ui;
};

#endif // WEST6_H
