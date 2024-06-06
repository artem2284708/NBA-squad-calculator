#include "east6.h"
#include "ui_east6.h"
#include <QPixmap>

East6::East6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East6)
{
    ui->setupUi(this);

    QPixmap pix6(":/pic/nba_logos/East/Detroit Pistons Logo.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));
}

East6::~East6()
{
    delete ui;
}
