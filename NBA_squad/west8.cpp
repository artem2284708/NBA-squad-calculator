#include "west8.h"
#include "ui_west8.h"
#include <QPixmap>

West8::West8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West8)
{
    ui->setupUi(this);

    QPixmap pix8(":/pic/nba_logos/West/NBA Teams Logo.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));

}

West8::~West8()
{
    delete ui;
}
