#include "east12.h"
#include "ui_east12.h"
#include <QPixmap>

East12::East12(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East12)
{
    ui->setupUi(this);

    QPixmap pix12(":/pic/nba_logos/East/Orlando Magic NBA.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

}

East12::~East12()
{
    delete ui;
}
