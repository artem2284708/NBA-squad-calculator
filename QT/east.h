#ifndef EAST_H
#define EAST_H

#include <QMainWindow>
#include "west1.h"



namespace Ui {
class East;
}

class East : public QMainWindow
{
    Q_OBJECT

public:
    explicit East(QWidget *parent = nullptr);
    ~East();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_exitButton_clicked();

private:
    Ui::East *ui;
    West1 west1;

};

#endif // EAST_H
