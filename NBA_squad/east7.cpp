#include "east7.h"
#include "ui_east7.h"
#include <QPixmap>

East7::East7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East7)
{
    ui->setupUi(this);

    QPixmap pix7(":/pic/nba_logos/East/Miami Heat logo.svg.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

}

East7::~East7()
{
    delete ui;
}
