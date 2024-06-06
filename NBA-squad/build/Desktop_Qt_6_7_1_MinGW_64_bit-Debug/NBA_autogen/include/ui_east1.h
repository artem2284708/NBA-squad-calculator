/********************************************************************************
** Form generated from reading UI file 'east1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EAST1_H
#define UI_EAST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_East1
{
public:
    QLabel *img1;
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QListView *listView;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_3;

    void setupUi(QWidget *East1)
    {
        if (East1->objectName().isEmpty())
            East1->setObjectName("East1");
        East1->resize(1000, 550);
        East1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(186, 186, 186);\n"
"}"));
        img1 = new QLabel(East1);
        img1->setObjectName("img1");
        img1->setGeometry(QRect(150, 60, 161, 131));
        tableView = new QTableView(East1);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(520, 40, 256, 192));
        widget = new QWidget(East1);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 280, 880, 196));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableView_2 = new QTableView(widget);
        tableView_2->setObjectName("tableView_2");

        horizontalLayout->addWidget(tableView_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listView = new QListView(widget);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tableView_3 = new QTableView(widget);
        tableView_3->setObjectName("tableView_3");

        horizontalLayout_2->addWidget(tableView_3);


        retranslateUi(East1);

        QMetaObject::connectSlotsByName(East1);
    } // setupUi

    void retranslateUi(QWidget *East1)
    {
        East1->setWindowTitle(QCoreApplication::translate("East1", "Form", nullptr));
        img1->setText(QCoreApplication::translate("East1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class East1: public Ui_East1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EAST1_H
