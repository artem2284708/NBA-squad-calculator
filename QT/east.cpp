#include "east.h"
#include "ui_east.h"
#include "mainwindow.h"
#include <QPixmap>

East::East(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::East)
{
    ui->setupUi(this);

    /*QPixmap pix1(":/File.csv/nba_logos/Atlanta Hawks.png");
    int w = ui->img1->width();
    int h = ui->img1->height();
    ui->img1->setPixmap(pix1.scaled(w, h, Qt::KeepAspectRatio));*/

    QPixmap pix1(":/File.csv/nba_logos/ATL.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix2(":/File.csv/nba_logos/BOS.png");
    ui->img2->setPixmap(pix2.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix3(":/File.csv/nba_logos/BRK.png");
    ui->img3->setPixmap(pix3.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix4(":/File.csv/nba_logos/CLE.png");
    ui->img4->setPixmap(pix4.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix5(":/File.csv/nba_logos/CHI.png");
    ui->img5->setPixmap(pix5.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix6(":/File.csv/nba_logos/DET.png");
    ui->img6->setPixmap(pix6.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix7(":/File.csv/nba_logos/MIA.png");
    ui->img7->setPixmap(pix7.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix8(":/File.csv/nba_logos/MIL.png");
    ui->img8->setPixmap(pix8.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix9(":/File.csv/nba_logos/TOR.png");
    ui->img9->setPixmap(pix9.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix10(":/File.csv/nba_logos/IND.png");
    ui->img10->setPixmap(pix10.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix11(":/File.csv/nba_logos/NYK.png");
    ui->img11->setPixmap(pix11.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix12(":/File.csv/nba_logos/ORL.png");
    ui->img12->setPixmap(pix12.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix13(":/File.csv/nba_logos/PHI.png");
    ui->img13->setPixmap(pix13.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix14(":/File.csv/nba_logos/CHO.png");
    ui->img14->setPixmap(pix14.scaled(120, 120, Qt::KeepAspectRatio));

    QPixmap pix15(":/File.csv/nba_logos/WAS.png");
    ui->img15->setPixmap(pix15.scaled(120, 120, Qt::KeepAspectRatio));
}

East::~East()
{
    delete ui;
}

void East::on_pushButton_clicked()
{
    QString keyword = "ATL"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_2_clicked()
{
    QString keyword = "BOS"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_3_clicked()
{
    QString keyword = "BRK"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();this->close();
}


void East::on_pushButton_4_clicked()
{
    QString keyword = "CLE"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();

}


void East::on_pushButton_5_clicked()
{
    QString keyword = "CHI"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_6_clicked()
{
    QString keyword = "DET"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_7_clicked()
{
    QString keyword = "MIA"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_8_clicked()
{
    QString keyword = "MIL"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_9_clicked()
{
    QString keyword = "TOR"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_10_clicked()
{
    QString keyword = "IND"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_11_clicked()
{
    QString keyword = "NYK"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_12_clicked()
{
    QString keyword = "ORL"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_13_clicked()
{
    QString keyword = "PHI"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_14_clicked()
{
    QString keyword = "CHO"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}


void East::on_pushButton_15_clicked()
{
    QString keyword = "WAS"; // ключевое слово, которое мы передаем
    west1.setKeyword(keyword); // передаем ключевое слово на вторую страницу
    west1.show();
    this->close();
}

void East::on_exitButton_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

