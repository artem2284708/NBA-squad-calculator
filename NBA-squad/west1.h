#ifndef WEST1_H
#define WEST1_H

#include <QWidget>

namespace Ui {
class West1;
}

class West1 : public QWidget
{
    Q_OBJECT

public:
    explicit West1(QWidget *parent = nullptr);
    ~West1();

private:
    Ui::West1 *ui;
};

#endif // WEST1_H
