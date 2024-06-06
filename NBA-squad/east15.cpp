#include "east15.h"
#include "ui_east15.h"
#include <QPixmap>

East15::East15(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East15)
{
    ui->setupUi(this);

    QPixmap pix15(":/pic/nba_logos/East/Washington Wizards.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));

}

East15::~East15()
{
    delete ui;
}
