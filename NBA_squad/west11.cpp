#include "west11.h"
#include "ui_west11.h"
#include <QPixmap>

West11::West11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West11)
{
    ui->setupUi(this);

    QPixmap pix11(":/pic/nba_logos/West/Sacramento Kings 2016-17 Season.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

}

West11::~West11()
{
    delete ui;
}
