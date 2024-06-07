#include "west9.h"
#include "ui_west9.h"
#include <QPixmap>

West9::West9(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West9)
{
    ui->setupUi(this);

    QPixmap pix9(":/pic/nba_logos/West/New Orleans Pelicans logo.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));

}

West9::~West9()
{
    delete ui;
}
