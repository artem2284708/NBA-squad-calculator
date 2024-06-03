#ifndef FORM_2_H
#define FORM_2_H

#include <QWidget>

namespace Ui {
class Form_2;
}

class Form_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Form_2(QWidget *parent = nullptr);
    ~Form_2();

private:
    Ui::Form_2 *ui;
};

#endif // FORM_2_H
