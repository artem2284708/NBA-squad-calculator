#ifndef WEST5_H
#define WEST5_H

#include <QWidget>

namespace Ui {
class West5;
}

class West5 : public QWidget
{
    Q_OBJECT

public:
    explicit West5(QWidget *parent = nullptr);
    ~West5();

private:
    Ui::West5 *ui;
};

#endif // WEST5_H
