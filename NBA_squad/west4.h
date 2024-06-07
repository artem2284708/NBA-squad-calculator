#ifndef WEST4_H
#define WEST4_H

#include <QWidget>

namespace Ui {
class West4;
}

class West4 : public QWidget
{
    Q_OBJECT

public:
    explicit West4(QWidget *parent = nullptr);
    ~West4();

private:
    Ui::West4 *ui;
};

#endif // WEST4_H
