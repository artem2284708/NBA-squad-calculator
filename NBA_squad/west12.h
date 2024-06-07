#ifndef WEST12_H
#define WEST12_H

#include <QWidget>

namespace Ui {
class West12;
}

class West12 : public QWidget
{
    Q_OBJECT

public:
    explicit West12(QWidget *parent = nullptr);
    ~West12();

private:
    Ui::West12 *ui;
};

#endif // WEST12_H
