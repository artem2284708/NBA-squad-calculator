#include "east4.h"
#include "ui_east4.h"
#include <QPixmap>


East4::East4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East4)
{
    ui->setupUi(this);

    QPixmap pix4(":/pic/nba_logos/East/Cavaliers NBA Logo.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));
}

East4::~East4()
{
    delete ui;
}
