#include "east10.h"
#include "ui_east10.h"
#include <QPixmap>

East10::East10(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East10)
{
    ui->setupUi(this);

    QPixmap pix10(":/pic/nba_logos/East/NBA Team Logos.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

}

East10::~East10()
{
    delete ui;
}
