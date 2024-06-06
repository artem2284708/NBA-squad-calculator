#include "east.h"
#include "ui_east.h"
#include <QPixmap>

East::East(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::East)
{
    ui->setupUi(this);

    /*QPixmap pix1(":/pic/nba_logos/East/Atlanta Hawks.png");
    int w = ui->img1->width();
    int h = ui->img1->height();
    ui->img1->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));*/

    QPixmap pix1(":/pic/nba_logos/East/Atlanta Hawks.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix2(":/pic/nba_logos/East/Boston Celtics Miami Heat Brooklyn Nets.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix3(":/pic/nba_logos/East/Brooklyn Nets logo.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix4(":/pic/nba_logos/East/Cavaliers NBA Logo.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix5(":/pic/nba_logos/East/Chicago Bulls vs Boston Celtics logo.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix6(":/pic/nba_logos/East/Detroit Pistons Logo.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix7(":/pic/nba_logos/East/Miami Heat logo.svg.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix8(":/pic/nba_logos/East/Milwaukee Bucks logo.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix9(":/pic/nba_logos/East/NBA Logos Clipart.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix10(":/pic/nba_logos/East/NBA Team Logos.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix11(":/pic/nba_logos/East/New York Knicks logo.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix12(":/pic/nba_logos/East/Orlando Magic NBA.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix13(":/pic/nba_logos/East/Philadelphia 76ers logo.png");
    ui->img13->setPixmap(pix13.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix14(":/pic/nba_logos/East/Phoenix Suns Talking Stick Arena.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix15(":/pic/nba_logos/East/Washington Wizards.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));

}

East::~East()
{
    delete ui;
}



void East::on_pushButton_clicked()
{
    east1.show();
}


void East::on_pushButton_2_clicked()
{
    east2.show();
}


void East::on_pushButton_3_clicked()
{
    east3.show();
}


void East::on_pushButton_4_clicked()
{
    east4.show();
}


void East::on_pushButton_5_clicked()
{
    east5.show();
}


void East::on_pushButton_6_clicked()
{
    east6.show();
}


void East::on_pushButton_7_clicked()
{
    east7.show();
}


void East::on_pushButton_8_clicked()
{
    east8.show();
}


void East::on_pushButton_9_clicked()
{
    east9.show();
}


void East::on_pushButton_10_clicked()
{
    east10.show();
}


void East::on_pushButton_11_clicked()
{
    east11.show();
}


void East::on_pushButton_12_clicked()
{
    east12.show();
}


void East::on_pushButton_13_clicked()
{
    east13.show();
}


void East::on_pushButton_14_clicked()
{
    east14.show();
}


void East::on_pushButton_15_clicked()
{
    east15.show();
}

