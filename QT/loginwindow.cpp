#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "mainwindow.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    if (!connectToDatabase()) {
        QMessageBox::critical(this, "Database Error", "Unable to establish a database connection.");
    }
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

bool LoginWindow::connectToDatabase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./users.db");

        if (!db.open()) {
        return false;
    }

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS users (id INTEGER PRIMARY KEY AUTOINCREMENT, username TEXT NOT NULL UNIQUE, password TEXT NOT NULL)");
    return true;
}

bool LoginWindow::authenticateUser(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("SELECT password FROM users WHERE username = :username");
    query.bindValue(":username", username);
    query.exec();

    if (query.next()) {
        QString storedPassword = query.value(0).toString();
        return storedPassword == password;
    }
    return false;
}

bool LoginWindow::registerUser(const QString &username, const QString &password)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    db.commit();
    return query.exec();
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (authenticateUser(username, password)) {
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
    } else {
        ui->statusLabel->setText("Неверный пароль");
    }
}

void LoginWindow::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (registerUser(username, password)) {
        MainWindow *mainWindow = new MainWindow();
        mainWindow->show();
        this->close();
    } else {
        ui->statusLabel->setText("Этот логин уже используется");
    }
}
