#include "west5.h"
#include "ui_west5.h"
#include <QPixmap>

West5::West5(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West5)
{
    ui->setupUi(this);

    QPixmap pix5(":/pic/nba_logos/West/Memphis Grizzlies logo.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));

}

West5::~West5()
{
    delete ui;
}
