/********************************************************************************
** Form generated from reading UI file 'east14.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EAST14_H
#define UI_EAST14_H

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

class Ui_East14
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QListView *listView;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_3;
    QLabel *img14;

    void setupUi(QWidget *East14)
    {
        if (East14->objectName().isEmpty())
            East14->setObjectName("East14");
        East14->resize(1000, 550);
        East14->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(186, 186, 186);\n"
"}"));
        tableView = new QTableView(East14);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(500, 50, 256, 192));
        layoutWidget = new QWidget(East14);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 290, 880, 196));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");

        horizontalLayout->addWidget(tableView_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        listView = new QListView(layoutWidget);
        listView->setObjectName("listView");

        horizontalLayout->addWidget(listView);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tableView_3 = new QTableView(layoutWidget);
        tableView_3->setObjectName("tableView_3");

        horizontalLayout_2->addWidget(tableView_3);

        img14 = new QLabel(East14);
        img14->setObjectName("img14");
        img14->setGeometry(QRect(130, 70, 161, 131));

        retranslateUi(East14);

        QMetaObject::connectSlotsByName(East14);
    } // setupUi

    void retranslateUi(QWidget *East14)
    {
        East14->setWindowTitle(QCoreApplication::translate("East14", "Form", nullptr));
        img14->setText(QCoreApplication::translate("East14", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class East14: public Ui_East14 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EAST14_H
