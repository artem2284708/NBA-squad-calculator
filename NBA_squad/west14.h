#ifndef WEST14_H
#define WEST14_H

#include <QWidget>

namespace Ui {
class West14;
}

class West14 : public QWidget
{
    Q_OBJECT

public:
    explicit West14(QWidget *parent = nullptr);
    ~West14();

private:
    Ui::West14 *ui;
};

#endif // WEST14_H
