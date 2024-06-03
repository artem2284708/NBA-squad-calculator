#include "form.h"
#include "ui_form.h"
#include <QProcess>
#include <QFile>
#include <QDebug>
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

    QProcess *process = new QProcess(this);

    process->start("sh", {"D:/pythonprepro/Table preprocessing/run.sh" , "MEM"});
    // process->start("python3", {"--version"});

    process->waitForFinished();
    // Wait for the process to finish
    // if (!process->waitForFinished())
    //     exit(1);

    // Read standard output
    //QByteArray output = process->readAllStandardOutput().trimmed();
    //qDebug() << "Output:" << output;

    // Read standard error
    // QByteArray errorOutput = process->readAllStandardError().trimmed();
    // qDebug() << "Error Output:" << errorOutput;

    if (!process->waitForStarted()) {
        qDebug() << "Failed to start the process";
        // exit(1);
    }

    if (!process->waitForFinished()) {
        qDebug() << "Process failed to finish";
        // exit(1);
    }

    qDebug() << process->readAllStandardOutput();
    qDebug() << process->readAllStandardError();

    readCSV("D:/pythonprepro/Table preprocessing/Salary.csv");
    readCSV("D:/pythonprepro/Table preprocessing/Squad.csv");
    readCSV("D:/pythonprepro/Table preprocessing/Newcomers.csv");
    readCSV("D:/pythonprepro/Table preprocessing/Kick.csv");

    // Загрузка изображения в QLabel
    QString imagePath = "D:/Qt/NBA-squad-calculator-artem2284708-patch-1/File.csv/nba_logos/West/Denver_Nuggets_logo.png";
    QPixmap pixmap(imagePath);
    ui->label2->setPixmap(pixmap.scaled(ui->label2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

}

Form::~Form()
{
    delete ui;
}
