#include "west3.h"
#include "ui_west3.h"
#include <QPixmap>

West3::West3(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West3)
{
    ui->setupUi(this);

    QPixmap pix3(":/pic/nba_logos/West/Lakers 2017-18 vs Knicks logo.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

}

West3::~West3()
{
    delete ui;
}
