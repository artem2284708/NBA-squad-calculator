#include "east3.h"
#include "ui_east3.h"
#include <QPixmap>


East3::East3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East3)
{
    ui->setupUi(this);

    QPixmap pix3(":/pic/nba_logos/East/Brooklyn Nets logo.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

}

East3::~East3()
{
    delete ui;
}
