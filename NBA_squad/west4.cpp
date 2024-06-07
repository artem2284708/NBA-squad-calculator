#include "west4.h"
#include "ui_west4.h"
#include <QPixmap>

West4::West4(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West4)
{
    ui->setupUi(this);

    QPixmap pix4(":/pic/nba_logos/West/Mavericks Heat Nuggets Thunder.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));

}

West4::~West4()
{
    delete ui;
}
