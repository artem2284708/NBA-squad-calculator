#ifndef WEST_H
#define WEST_H

#include <QMainWindow>
#include "west1.h"
#include "west2.h"
#include "west3.h"
#include "west4.h"
#include "west5.h"
#include "west6.h"
#include "west7.h"
#include "west8.h"
#include "west9.h"
#include "west10.h"
#include "west11.h"
#include "west12.h"
#include "west13.h"
#include "west14.h"
#include "west15.h"

namespace Ui {
class West;
}

class West : public QMainWindow
{
    Q_OBJECT

public:
    explicit West(QWidget *parent = nullptr);
    ~West();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::West *ui;
    West1 west1;
    West2 west2;
    West3 west3;
    West4 west4;
    West5 west5;
    West6 west6;
    West7 west7;
    West8 west8;
    West9 west9;
    West10 west10;
    West11 west11;
    West12 west12;
    West13 west13;
    West14 west14;
    West15 west15;
};

#endif // WEST_H
