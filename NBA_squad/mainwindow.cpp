#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "clickablelabel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("/Users/artem2284708/Downloads/NBA-squad-calculator-main 2/File.csv/nba logos/West/Denver Nuggets logo.png");
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
    ui->lineEdit->setText("hello");
}


