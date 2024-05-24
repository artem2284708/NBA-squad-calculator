#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form)
{
    ui->setupUi(this);


    QProcess *process = new QProcess(parent);
    process->start("python3", {"/Users/artem2284708/PycharmProjects/NbaSquadGenerator/Table preprocessing/Get results.py"});
    process->waitForFinished();
    process->write("den");
    process->closeWriteChannel();
    process->waitForFinished();
    qDebug() << process->readAllStandardOutput();
    delete process;
}

Form::~Form()
{
    delete ui;
}
