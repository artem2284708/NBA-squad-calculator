#include "east8.h"
#include "ui_east8.h"
#include <QPixmap>

East8::East8(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East8)
{
    ui->setupUi(this);

    QPixmap pix8(":/pic/nba_logos/East/Milwaukee Bucks logo.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));
}

East8::~East8()
{
    delete ui;
}
