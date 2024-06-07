#ifndef WEST15_H
#define WEST15_H

#include <QWidget>

namespace Ui {
class West15;
}

class West15 : public QWidget
{
    Q_OBJECT

public:
    explicit West15(QWidget *parent = nullptr);
    ~West15();

private:
    Ui::West15 *ui;
};

#endif // WEST15_H
