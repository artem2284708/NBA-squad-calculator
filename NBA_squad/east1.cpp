#include "east1.h"
#include "ui_east1.h"
#include <QPixmap>


East1::East1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East1)
{
    ui->setupUi(this);

    QPixmap pix1(":/pic/nba_logos/East/Atlanta Hawks.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));
}

East1::~East1()
{
    delete ui;
}
