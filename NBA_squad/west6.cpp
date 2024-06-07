#include "west6.h"
#include "ui_west6.h"
#include <QPixmap>

West6::West6(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West6)
{
    ui->setupUi(this);

    QPixmap pix6(":/pic/nba_logos/West/NBA Clippers Lakers Logo.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));

}

West6::~West6()
{
    delete ui;
}
