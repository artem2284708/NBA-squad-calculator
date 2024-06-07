#include "west14.h"
#include "ui_west14.h"
#include <QPixmap>

West14::West14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West14)
{
    ui->setupUi(this);

    QPixmap pix14(":/pic/nba_logos/West/Trail Blazers 2016-17 NBA.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

}

West14::~West14()
{
    delete ui;
}
