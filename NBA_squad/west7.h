#ifndef WEST7_H
#define WEST7_H

#include <QWidget>

namespace Ui {
class West7;
}

class West7 : public QWidget
{
    Q_OBJECT

public:
    explicit West7(QWidget *parent = nullptr);
    ~West7();

private:
    Ui::West7 *ui;
};

#endif // WEST7_H
