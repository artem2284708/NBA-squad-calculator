#include "west.h"
#include "ui_west.h"
#include "mainwindow.h"
#include <QPixmap>

West::West(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::West)
{
    ui->setupUi(this);

    /*QPixmap pix1(":/File.csv/nba_logos/Denver_Nuggets_logo.png");
    int w = ui->imgw1->width();
    int h = ui->imgw1->height();
    ui->imgw1->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));*/

    QPixmap pix1(":/File.csv/nba_logos/DEN.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix2(":/File.csv/nba_logos/HOU.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix3(":/File.csv/nba_logos/LAL.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix4(":/File.csv/nba_logos/DAL.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix5(":/File.csv/nba_logos/MEM.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix6(":/File.csv/nba_logos/LAC.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix7(":/File.csv/nba_logos/GSW.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix8(":/File.csv/nba_logos/PHO.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix9(":/File.csv/nba_logos/NOP.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix10(":/File.csv/nba_logos/OKC.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix11(":/File.csv/nba_logos/SAC.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix12(":/File.csv/nba_logos/SAS.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix13(":/File.csv/nba_logos/MIN.png");
    ui->img13->setPixmap(pix13.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix14(":/File.csv/nba_logos/POR.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix15(":/File.csv/nba_logos/UTA.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));
}

West::~West()
{
    delete ui;
}

void West::on_pushButton_clicked()
{
    QString keyword = "DEN"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_2_clicked()
{
    QString keyword = "HOU"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_3_clicked()
{
    QString keyword = "LAL"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_4_clicked()
{
    QString keyword = "DAL"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_5_clicked()
{
    QString keyword = "MEM"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_12_clicked()
{
    QString keyword = "LAC"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_13_clicked()
{
    QString keyword = "GSW"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_15_clicked()
{
    QString keyword = "PHO"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_8_clicked()
{
    QString keyword = "NOP"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_10_clicked()
{
    QString keyword = "OKC"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_14_clicked()
{
    QString keyword = "SAC"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_7_clicked()
{
    QString keyword = "SAS"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_9_clicked()
{
    QString keyword = "MIN"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_11_clicked()
{
    QString keyword = "POR"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void West::on_pushButton_6_clicked()
{
    QString keyword = "UTA"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}

void West::on_exitButton_clicked()
{
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
}
