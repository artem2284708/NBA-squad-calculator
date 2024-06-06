#include "east9.h"
#include "ui_east9.h"
#include <QPixmap>

East9::East9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::East9)
{
    ui->setupUi(this);

    QPixmap pix9(":/pic/nba_logos/East/NBA Logos Clipart.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));
}

East9::~East9()
{
    delete ui;
}
