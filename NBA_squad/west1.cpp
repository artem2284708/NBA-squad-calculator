#include "west1.h"
#include "ui_west1.h"
#include <QPixmap>
#include <QFile>

West1::West1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::West1)
{
    ui->setupUi(this);

    QPixmap pix1(":/pic/nba_logos/West/Denver_Nuggets_logo.png");
    ui->img1->setPixmap(pix1.scaled(120, 120, Qt::KeepAspectRatio));




    //отображение таблиц
    QStandardItemModel *kickModel = new QStandardItemModel(this);
    QStandardItemModel *salaryModel = new QStandardItemModel(this);
    QStandardItemModel *newcomersModel = new QStandardItemModel(this);
    QStandardItemModel *squadModel = new QStandardItemModel(this);




    //первая таблица kick
    QHeaderView* header_horizontal = ui->tableView->horizontalHeader();
    header_horizontal->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical = ui->tableView->verticalHeader();
    header_vertical->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView->verticalHeader()->hide();
    ui->tableView->horizontalHeader()->hide();

    ui->tableView->setModel(kickModel); // Устанавливаем модель в таблицу

    // Открываем файл из ресурсов. Вместо данного файла
    // необходимо указывать путь к вашему требуемому файлу

    QFile kickFile("D:/Qt/NBA/Kick.csv");
    if ( !kickFile.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        // Создаем поток для извлечения данных из файла
        QTextStream in(&kickFile);
        // Считываем данные до конца файла
        while (!in.atEnd()) {
            // ... построчно
            QString line = in.readLine();
            // Добавляем в модель по строке с элементами
            QList<QStandardItem *> standardItemsList;
            // учитываем, что строка разделяется точкой с запятой на колонки
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            kickModel->insertRow(kickModel->rowCount(), standardItemsList);
        }
        kickFile.close();
    }




    //вторая таблица salary
    QHeaderView* header_horizontal_2 = ui->tableView_2->horizontalHeader();
    header_horizontal_2->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_2 = ui->tableView_2->verticalHeader();
    header_vertical_2->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_2->verticalHeader()->hide();
    ui->tableView_2->horizontalHeader()->hide();

    ui->tableView_2->setModel(salaryModel); // Устанавливаем модель в таблицу

    // Открываем файл из ресурсов. Вместо данного файла
    // необходимо указывать путь к вашему требуемому файлу

    QFile salaryFile("D:/Qt/NBA/Salary.csv");
    if ( !salaryFile.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        // Создаем поток для извлечения данных из файла
        QTextStream in(&salaryFile);
        // Считываем данные до конца файла
        while (!in.atEnd()) {
            // ... построчно
            QString line = in.readLine();
            // Добавляем в модель по строке с элементами
            QList<QStandardItem *> standardItemsList;
            // учитываем, что строка разделяется точкой с запятой на колонки
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            salaryModel->insertRow(salaryModel->rowCount(), standardItemsList);
        }
        salaryFile.close();
    }




    //третья таблица Squad
    QHeaderView* header_horizontal_3 = ui->tableView_3->horizontalHeader();
    header_horizontal_3->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_3 = ui->tableView_3->verticalHeader();
    header_vertical_3->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_3->verticalHeader()->hide();
    ui->tableView_3->horizontalHeader()->hide();

    ui->tableView_3->setModel(squadModel); // Устанавливаем модель в таблицу

    // Открываем файл из ресурсов. Вместо данного файла
    // необходимо указывать путь к вашему требуемому файлу

    QFile squadFile("D:/Qt/NBA/Squad.csv");
    if ( !squadFile.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        // Создаем поток для извлечения данных из файла
        QTextStream in(&squadFile);
        // Считываем данные до конца файла
        while (!in.atEnd()) {
            // ... построчно
            QString line = in.readLine();
            // Добавляем в модель по строке с элементами
            QList<QStandardItem *> standardItemsList;
            // учитываем, что строка разделяется точкой с запятой на колонки
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            squadModel->insertRow(squadModel->rowCount(), standardItemsList);
        }
        squadFile.close();
    }




    //четвертая таблица newcomers
    QHeaderView* header_horizontal_4 = ui->tableView_4->horizontalHeader();
    header_horizontal_4->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_4 = ui->tableView_4->verticalHeader();
    header_vertical_4->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_4->verticalHeader()->hide();
    ui->tableView_4->horizontalHeader()->hide();

    ui->tableView_4->setModel(newcomersModel); // Устанавливаем модель в таблицу

    // Открываем файл из ресурсов. Вместо данного файла
    // необходимо указывать путь к вашему требуемому файлу

    QFile newcomersFile("D:/Qt/NBA/Newcomers.csv");
    if ( !newcomersFile.open(QFile::ReadOnly | QFile::Text) ) {
        qDebug() << "File not exists";
    } else {
        // Создаем поток для извлечения данных из файла
        QTextStream in(&newcomersFile);
        // Считываем данные до конца файла
        while (!in.atEnd()) {
            // ... построчно
            QString line = in.readLine();
            // Добавляем в модель по строке с элементами
            QList<QStandardItem *> standardItemsList;
            // учитываем, что строка разделяется точкой с запятой на колонки
            for (QString item : line.split(",")) {
                standardItemsList.append(new QStandardItem(item));
            }
            newcomersModel->insertRow(newcomersModel->rowCount(), standardItemsList);
        }
        newcomersFile.close();
    }


}

West1::~West1()
{
    delete ui;
}
