#ifndef EAST_H
#define EAST_H

#include <QMainWindow>
#include "east1.h"
#include "east2.h"
#include "east3.h"
#include "east4.h"
#include "east5.h"
#include "east6.h"
#include "east7.h"
#include "east8.h"
#include "east9.h"
#include "east10.h"
#include "east11.h"
#include "east12.h"
#include "east13.h"
#include "east14.h"
#include "east15.h"


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

private:
    Ui::East *ui;
    East1 east1;
    East2 east2;
    East3 east3;
    East4 east4;
    East5 east5;
    East6 east6;
    East7 east7;
    East8 east8;
    East9 east9;
    East10 east10;
    East11 east11;
    East12 east12;
    East13 east13;
    East14 east14;
    East15 east15;
};

#endif // EAST_H
