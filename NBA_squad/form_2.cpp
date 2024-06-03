#include "form_2.h"
#include "ui_form_2.h"

Form_2::Form_2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form_2)
{
    ui->setupUi(this);
}

Form_2::~Form_2()
{
    delete ui;
}
