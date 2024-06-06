/********************************************************************************
** Form generated from reading UI file 'west1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST1_H
#define UI_WEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West1
{
public:
    QLabel *img1;
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West1)
    {
        if (West1->objectName().isEmpty())
            West1->setObjectName("West1");
        West1->resize(1000, 550);
        West1->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        img1 = new QLabel(West1);
        img1->setObjectName("img1");
        img1->setGeometry(QRect(110, 60, 190, 150));
        tableView = new QTableView(West1);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(450, 50, 256, 192));
        layoutWidget = new QWidget(West1);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 310, 878, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        tableView_2 = new QTableView(layoutWidget);
        tableView_2->setObjectName("tableView_2");

        horizontalLayout->addWidget(tableView_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        tableView_3 = new QTableView(layoutWidget);
        tableView_3->setObjectName("tableView_3");

        horizontalLayout->addWidget(tableView_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tableView_4 = new QTableView(layoutWidget);
        tableView_4->setObjectName("tableView_4");

        horizontalLayout->addWidget(tableView_4);


        retranslateUi(West1);

        QMetaObject::connectSlotsByName(West1);
    } // setupUi

    void retranslateUi(QWidget *West1)
    {
        West1->setWindowTitle(QCoreApplication::translate("West1", "Form", nullptr));
        img1->setText(QCoreApplication::translate("West1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West1: public Ui_West1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST1_H
