#ifndef WEST10_H
#define WEST10_H

#include <QWidget>

namespace Ui {
class West10;
}

class West10 : public QWidget
{
    Q_OBJECT

public:
    explicit West10(QWidget *parent = nullptr);
    ~West10();

private:
    Ui::West10 *ui;
};

#endif // WEST10_H
