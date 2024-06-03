#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "clickablelabel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("D:/Qt/NBA-squad-calculator-artem2284708-patch-1/File.csv/nba_logos/West/Denver_Nuggets_logo.png");
    pixmap = pixmap.scaled(ui->label_logo->size(), Qt::KeepAspectRatio);
    ui->label_logo->setPixmap(pixmap);
    connect(ui->label_logo, &ClickableLabel::clicked, this, &MainWindow::clicked);
    ui->lineEdit->setText("Denver_Nuggets");

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

