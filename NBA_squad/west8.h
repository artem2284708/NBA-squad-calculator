#ifndef WEST8_H
#define WEST8_H

#include <QWidget>

namespace Ui {
class West8;
}

class West8 : public QWidget
{
    Q_OBJECT

public:
    explicit West8(QWidget *parent = nullptr);
    ~West8();

private:
    Ui::West8 *ui;
};

#endif // WEST8_H
