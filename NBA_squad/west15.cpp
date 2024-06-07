#include "west15.h"
#include "ui_west15.h"
#include <QPixmap>

West15::West15(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West15)
{
    ui->setupUi(this);

    QPixmap pix15(":/pic/nba_logos/West/Utah Jazz logo 2022.svg.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));
}

West15::~West15()
{
    delete ui;
}
