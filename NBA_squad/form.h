#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

private:
    Ui::Form *ui;
    QStandardItemModel *csvModel;

};

#endif // FORM_H
