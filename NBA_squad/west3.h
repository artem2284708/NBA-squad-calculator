#ifndef WEST3_H
#define WEST3_H

#include <QWidget>

namespace Ui {
class West3;
}

class West3 : public QWidget
{
    Q_OBJECT

public:
    explicit West3(QWidget *parent = nullptr);
    ~West3();

private:
    Ui::West3 *ui;
};

#endif // WEST3_H
