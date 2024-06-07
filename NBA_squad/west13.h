#ifndef WEST13_H
#define WEST13_H

#include <QWidget>

namespace Ui {
class West13;
}

class West13 : public QWidget
{
    Q_OBJECT

public:
    explicit West13(QWidget *parent = nullptr);
    ~West13();

private:
    Ui::West13 *ui;
};

#endif // WEST13_H
