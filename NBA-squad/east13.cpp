#include "east13.h"
#include "ui_east13.h"
#include <QPixmap>

East13::East13(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East13)
{
    ui->setupUi(this);

    QPixmap pix13(":/pic/nba_logos/East/Philadelphia 76ers logo.png");
    ui->img13->setPixmap(pix13.scaled(120, 120, Qt::KeepAspectRatio));

}

East13::~East13()
{
    delete ui;
}
