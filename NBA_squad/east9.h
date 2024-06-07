#ifndef EAST9_H
#define EAST9_H

#include <QWidget>

namespace Ui {
class East9;
}

class East9 : public QWidget
{
    Q_OBJECT

public:
    explicit East9(QWidget *parent = nullptr);
    ~East9();

private:
    Ui::East9 *ui;
};

#endif // EAST9_H
