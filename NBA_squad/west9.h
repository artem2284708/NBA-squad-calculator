#ifndef WEST9_H
#define WEST9_H

#include <QWidget>

namespace Ui {
class West9;
}

class West9 : public QWidget
{
    Q_OBJECT

public:
    explicit West9(QWidget *parent = nullptr);
    ~West9();

private:
    Ui::West9 *ui;
};

#endif // WEST9_H
