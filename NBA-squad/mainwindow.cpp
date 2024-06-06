#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/p/mmm.png");
    ui->img->setPixmap(pix.scaled(1023, 820, Qt::KeepAspectRatio));

    /*QPixmap pix(":/p/mmm.png");
    int w = ui->img->width();
    int h = ui->img->height();
    ui->img->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    west.show();
}


void MainWindow::on_pushButton_2_clicked()
{
    east.show();
}

