#include "east2.h"
#include "ui_east2.h"
#include <QPixmap>


East2::East2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East2)
{
    ui->setupUi(this);

    QPixmap pix2(":/pic/nba_logos/East/Boston Celtics Miami Heat Brooklyn Nets.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));
}

East2::~East2()
{
    delete ui;
}
