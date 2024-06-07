#include "west2.h"
#include "ui_west2.h"
#include <QPixmap>

West2::West2(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West2)
{
    ui->setupUi(this);

    QPixmap pix2(":/pic/nba_logos/West/Houston Rockets logo.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));

}

West2::~West2()
{
    delete ui;
}
