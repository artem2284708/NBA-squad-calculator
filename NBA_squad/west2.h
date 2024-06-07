#ifndef WEST2_H
#define WEST2_H

#include <QWidget>

namespace Ui {
class West2;
}

class West2 : public QWidget
{
    Q_OBJECT

public:
    explicit West2(QWidget *parent = nullptr);
    ~West2();

private:
    Ui::West2 *ui;
};

#endif // WEST2_H
