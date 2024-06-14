#include "west1.h"
#include "ui_west1.h"
#include "mainwindow.h"
#include <QProcess>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QStandardItemModel>
#include <QDebug>
#include <QHeaderView>

West1::West1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West1)
    , process(new QProcess(this)) // initialize the process
{
    ui->setupUi(this);
}



void West1::on_exit1Button_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}

void West1::setKeyword(const QString &keyword)
{
    m_keyword = keyword; // Save the keyword

    // Start the process with the provided keyword
    process->start("sh", {":/Table_preprocessing/run.sh", m_keyword});

    if (!process->waitForStarted()) {
        qDebug() << "Failed to start the process";
        return;
    }

    if (!process->waitForFinished()) {
        qDebug() << "Process failed to finish";
        return;
    }

    QString imagePath = QString(":/File.csv/nba_logos/%1.png").arg(m_keyword);
    QPixmap pix1(imagePath);
    ui->img1->setPixmap(pix1.scaled(300, 300, Qt::KeepAspectRatio));

    // Display tables
    QStandardItemModel *kickModel = new QStandardItemModel(this);
    QStandardItemModel *salaryModel = new QStandardItemModel(this);
    QStandardItemModel *newcomersModel = new QStandardItemModel(this);
    QStandardItemModel *squadModel = new QStandardItemModel(this);

    // Kick table
    QHeaderView* header_horizontal = ui->tableView->horizontalHeader();
    header_horizontal->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical = ui->tableView->verticalHeader();
    header_vertical->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->hide();
    ui->tableView->setModel(kickModel); // Set model in table

    QFile kickFile(":/Table_preprocessing/Kick.csv");
    if (!kickFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Kick file not exists";
    } else {
        QTextStream in(&kickFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                QStandardItem* standardItem = new QStandardItem(item);
                standardItem->setFlags(standardItem->flags() & ~Qt::ItemIsEditable); // Make item non-editable
                standardItemsList.append(standardItem);
            }
            kickModel->insertRow(kickModel->rowCount(), standardItemsList);
        }
        kickFile.close();
    }

    ui->tableView->setColumnHidden(0, true);
    ui->tableView->setRowHidden(0, true);

    // Salary table
    QHeaderView* header_horizontal_2 = ui->tableView_2->horizontalHeader();
    header_horizontal_2->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_2 = ui->tableView_2->verticalHeader();
    header_vertical_2->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_2->verticalHeader()->hide();
    ui->tableView_2->horizontalHeader()->hide();
    ui->tableView_2->setModel(salaryModel); // Set model in table

    QFile salaryFile(":/Table_preprocessing/Salary.csv");
    if (!salaryFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Salary file not exists";
    } else {
        QTextStream in(&salaryFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                QStandardItem* standardItem = new QStandardItem(item);
                standardItem->setFlags(standardItem->flags() & ~Qt::ItemIsEditable); // Make item non-editable
                standardItemsList.append(standardItem);
            }
            salaryModel->insertRow(salaryModel->rowCount(), standardItemsList);
        }
        salaryFile.close();
    }

    int rowToColor = 3; // Row index to color (0-based index)
    QColor color = Qt::gray; // Color to use
    for (int column = 0; column < salaryModel->columnCount(); ++column) {
        QStandardItem *item = salaryModel->item(rowToColor, column);
        if (item) {
            item->setBackground(color);
        }
    }
    ui->tableView_2->setColumnHidden(0, true);
    ui->tableView_2->setRowHidden(0, true);
    ui->tableView_2->setColumnWidth(0, 5);

    // Squad table
    QHeaderView* header_horizontal_3 = ui->tableView_3->horizontalHeader();
    header_horizontal_3->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_3 = ui->tableView_3->verticalHeader();
    header_vertical_3->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_3->verticalHeader()->hide();
    ui->tableView_3->horizontalHeader()->hide();
    ui->tableView_3->setModel(squadModel); // Set model in table

    QFile squadFile(":/Table_preprocessing/Squad.csv");
    if (!squadFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Squad file not exists";
    } else {
        QTextStream in(&squadFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                QStandardItem* standardItem = new QStandardItem(item);
                standardItem->setFlags(standardItem->flags() & ~Qt::ItemIsEditable); // Make item non-editable
                standardItemsList.append(standardItem);
            }
            squadModel->insertRow(squadModel->rowCount(), standardItemsList);
        }
        squadFile.close();
    }

    int startRow = 1; // Starting row index
    int endRow = 5;   // Ending row index (inclusive)
    QColor squadColor = Qt::gray; // Color to use

    for (int row = startRow; row <= endRow; ++row) {
        for (int column = 0; column < squadModel->columnCount(); ++column) {
            QStandardItem *item = squadModel->item(row, column);
            if (item) {
                item->setBackground(squadColor);
            }
        }
    }

    ui->tableView_3->setColumnHidden(0, true);
    ui->tableView_3->setRowHidden(0, true);

    // Newcomers table
    QHeaderView* header_horizontal_4 = ui->tableView_4->horizontalHeader();
    header_horizontal_4->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_4 = ui->tableView_4->verticalHeader();
    header_vertical_4->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_4->verticalHeader()->hide();
    ui->tableView_4->horizontalHeader()->hide();
    ui->tableView_4->setModel(newcomersModel); // Set model in table

    QFile newcomersFile(":/Table_preprocessing/Newcomers.csv");
    if (!newcomersFile.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Newcomers file not exists";
    } else {
        QTextStream in(&newcomersFile);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QList<QStandardItem *> standardItemsList;
            for (QString item : line.split(",")) {
                QStandardItem* standardItem = new QStandardItem(item);
                standardItem->setFlags(standardItem->flags() & ~Qt::ItemIsEditable); // Make item non-editable
                standardItemsList.append(standardItem);
            }
            newcomersModel->insertRow(newcomersModel->rowCount(), standardItemsList);
        }
        newcomersFile.close();
    }

    ui->tableView_4->setColumnHidden(0, true);
    ui->tableView_4->setRowHidden(0, true);
}


West1::~West1()
{
    delete ui;
}
