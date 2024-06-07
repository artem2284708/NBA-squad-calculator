#include "west10.h"
#include "ui_west10.h"
#include <QPixmap>

West10::West10(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West10)
{
    ui->setupUi(this);

    QPixmap pix10(":/pic/nba_logos/West/OKC Thunder vs Lakers 2013-14.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

}

West10::~West10()
{
    delete ui;
}
