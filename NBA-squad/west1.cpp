#include "west1.h"
#include "ui_west1.h"
#include <QPixmap>

West1::West1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West1)
{
    ui->setupUi(this);

    QPixmap pix1(":/pic/nba_logos/West/Denver_Nuggets_logo.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));
}

West1::~West1()
{
    delete ui;
}
