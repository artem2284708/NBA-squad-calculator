#include "west.h"
#include "ui_west.h"
#include <QPixmap>

West::West(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::West)
{
    ui->setupUi(this);

    /*QPixmap pix1(":/pic/nba_logos/West/Denver_Nuggets_logo.png");
    int w = ui->imgw1->width();
    int h = ui->imgw1->height();
    ui->imgw1->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));*/

    QPixmap pix1(":/pic/nba_logos/West/Denver_Nuggets_logo.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix2(":/pic/nba_logos/West/Houston Rockets logo.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix3(":/pic/nba_logos/West/Lakers 2017-18 vs Knicks logo.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix4(":/pic/nba_logos/West/Mavericks Heat Nuggets Thunder.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix5(":/pic/nba_logos/West/Memphis Grizzlies logo.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix6(":/pic/nba_logos/West/NBA Clippers Lakers Logo.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix7(":/pic/nba_logos/West/NBA Finals Oracle Arena.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix8(":/pic/nba_logos/West/NBA Teams Logo.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix9(":/pic/nba_logos/West/New Orleans Pelicans logo.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix10(":/pic/nba_logos/West/OKC Thunder vs Lakers 2013-14.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix11(":/pic/nba_logos/West/Sacramento Kings 2016-17 Season.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix12(":/pic/nba_logos/West/San Antonio Spurs logo.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix13(":/pic/nba_logos/West/Timberwolves Clippers Lakers.png");
    ui->img13->setPixmap(pix13.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix14(":/pic/nba_logos/West/Trail Blazers 2016-17 NBA.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix15(":/pic/nba_logos/West/Utah Jazz logo 2022.svg.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));
}

West::~West()
{
    delete ui;
}

void West::on_pushButton_clicked()
{
    west1.show();
}


void West::on_pushButton_2_clicked()
{
    west2.show();
}


void West::on_pushButton_3_clicked()
{
    west3.show();
}


void West::on_pushButton_4_clicked()
{
    west4.show();
}


void West::on_pushButton_5_clicked()
{
    west5.show();
}


void West::on_pushButton_12_clicked()
{
    west6.show();
}


void West::on_pushButton_13_clicked()
{
    west7.show();
}


void West::on_pushButton_15_clicked()
{
    west8.show();
}


void West::on_pushButton_8_clicked()
{
    west9.show();
}


void West::on_pushButton_10_clicked()
{
    west10.show();
}


void West::on_pushButton_14_clicked()
{
    west11.show();
}


void West::on_pushButton_7_clicked()
{
    west12.show();
}


void West::on_pushButton_9_clicked()
{
    west13.show();
}


void West::on_pushButton_11_clicked()
{
    west14.show();
}


void West::on_pushButton_6_clicked()
{
    west15.show();
}

