#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <form.h>
#include <form_2.h>
#include "clickablelabel.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showForm();
    void showForm_2();

private:
    Ui::MainWindow *ui;
    Form form;
    Form_2 form_2;
};
#endif // MAINWINDOW_H
