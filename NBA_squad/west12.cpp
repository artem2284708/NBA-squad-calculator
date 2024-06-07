#include "west12.h"
#include "ui_west12.h"
#include <QPixmap>

West12::West12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West12)
{
    ui->setupUi(this);

    QPixmap pix12(":/pic/nba_logos/West/San Antonio Spurs logo.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

}

West12::~West12()
{
    delete ui;
}
