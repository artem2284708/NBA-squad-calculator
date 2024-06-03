#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include "clickablelabel.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Настройка первого лейбла с картинкой
    QPixmap pixmap_nuggets("D:/Qt/NBA-squad-calculator-fg/File.csv/nba_logos/West/Denver_Nuggets_logo.png");
    pixmap_nuggets = pixmap_nuggets.scaled(ui->label_logo->size(), Qt::KeepAspectRatio);
    ui->label_logo->setPixmap(pixmap_nuggets);
    connect(ui->label_logo, &ClickableLabel::clicked, this, &MainWindow::showForm);
    ui->label->setText("Denver_Nuggets");

    // Настройка второго лейбла с картинкой
    QPixmap pixmap_memphis("D:/Qt/NBA-squad-calculator-fg/File.csv/nba_logos/West/Memphis_Grizzlies_logo.png");
    pixmap_memphis = pixmap_memphis.scaled(ui->label_logo_2->size(), Qt::KeepAspectRatio);
    ui->label_logo_2->setPixmap(pixmap_memphis);
    connect(ui->label_logo_2, &ClickableLabel::clicked, this, &MainWindow::showForm_2);
    ui->label_2->setText("Memphis_Grizzlies");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showForm()
{
    form.show();
}

void MainWindow::showForm_2()
{
    form_2.show();
}
