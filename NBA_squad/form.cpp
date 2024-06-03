#include "form.h"
#include "ui_form.h"
#include <QProcess>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QPixmap>

void readCSV(const QString &filePath) {
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Cannot open file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(',');
        qDebug() << fields;
    }
}

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);

    // Создаем модели данных для отображения таблиц из CSV файлов
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

    QFile kickFile("D:/Qt/NBA-squad-calculator-fg/File.csv/Kick.csv");
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

    QFile salaryFile("D:/Qt/NBA-squad-calculator-fg/File.csv/Salary.csv");
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

    //третья таблица newcomers
    QHeaderView* header_horizontal_3 = ui->tableView_3->horizontalHeader();
    header_horizontal_3->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_3 = ui->tableView_3->verticalHeader();
    header_vertical_3->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_3->verticalHeader()->hide();
    ui->tableView_3->horizontalHeader()->hide();

    ui->tableView_3->setModel(newcomersModel); // Устанавливаем модель в таблицу

    QFile newcomersFile("D:/Qt/NBA-squad-calculator-fg/File.csv/Newcomers.csv");
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


    //четвертая таблица squad
    QHeaderView* header_horizontal_4 = ui->tableView_4->horizontalHeader();
    header_horizontal_4->setSectionResizeMode(QHeaderView::Stretch);
    QHeaderView* header_vertical_4 = ui->tableView_4->verticalHeader();
    header_vertical_4->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableView_4->verticalHeader()->hide();
    ui->tableView_4->horizontalHeader()->hide();

    ui->tableView_4->setModel(squadModel); // Устанавливаем модель в таблицу

    QFile squadFile("D:/Qt/NBA-squad-calculator-fg/File.csv/Squad.csv");
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
    // Загрузка изображения в QLabel
    QString imagePath = "D:/Qt/NBA-squad-calculator-fg/File.csv/nba_logos/West/Denver_Nuggets_logo.png";
    QPixmap pixmap(imagePath);
    ui->label2->setPixmap(pixmap.scaled(ui->label2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

Form::~Form()
{
    delete ui;
}
