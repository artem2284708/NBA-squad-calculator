#include "east11.h"
#include "ui_east11.h"
#include <QPixmap>

East11::East11(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East11)
{
    ui->setupUi(this);

    QPixmap pix11(":/pic/nba_logos/East/New York Knicks logo.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

}

East11::~East11()
{
    delete ui;
}
