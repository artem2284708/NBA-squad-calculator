#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "clickablelabel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("D:\Qt\NBA-squad-calculator-4efbe96d857e28629352847526f628d1e54dc9d9\File.csv\nba logos\West\Denver_Nuggets_logo.png");
    pixmap = pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio);
    ui->label->setPixmap(pixmap);
    connect(ui->label , &ClickableLabel::clicked, this, &MainWindow::clicked);

    // connect(ui->label, SIGNAL())
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicked()
{
    form.show();
}


