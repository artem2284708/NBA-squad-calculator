#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H


#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>



QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

private slots:
    void on_loginButton_clicked();
    void on_registerButton_clicked();

private:
    Ui::LoginWindow *ui;
    QSqlDatabase db;
    bool connectToDatabase();
    bool authenticateUser(const QString &username, const QString &password);
    bool registerUser(const QString &username, const QString &password);
};

#endif // LOGINWINDOW_H
