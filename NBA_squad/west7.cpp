#include "west7.h"
#include "ui_west7.h"
#include <QPixmap>

West7::West7(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West7)
{
    ui->setupUi(this);

    QPixmap pix7(":/pic/nba_logos/West/NBA Finals Oracle Arena.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

}

West7::~West7()
{
    delete ui;
}
