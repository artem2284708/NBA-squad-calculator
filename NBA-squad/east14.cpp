#include "east14.h"
#include "ui_east14.h"
#include <QPixmap>

East14::East14(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East14)
{
    ui->setupUi(this);

    QPixmap pix14(":/pic/nba_logos/East/Phoenix Suns Talking Stick Arena.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

}

East14::~East14()
{
    delete ui;
}
