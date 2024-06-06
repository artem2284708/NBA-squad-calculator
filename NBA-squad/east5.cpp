#include "east5.h"
#include "ui_east5.h"
#include <QPixmap>


East5::East5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East5)
{
    ui->setupUi(this);

    QPixmap pix5(":/pic/nba_logos/East/Chicago Bulls vs Boston Celtics logo.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));
}

East5::~East5()
{
    delete ui;
}
