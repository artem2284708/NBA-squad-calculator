/********************************************************************************
** Form generated from reading UI file 'west15.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST15_H
#define UI_WEST15_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West15
{
public:
    QTableView *tableView;
    QLabel *img15;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West15)
    {
        if (West15->objectName().isEmpty())
            West15->setObjectName("West15");
        West15->resize(1000, 550);
        West15->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West15);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(430, 40, 256, 192));
        img15 = new QLabel(West15);
        img15->setObjectName("img15");
        img15->setGeometry(QRect(90, 50, 190, 150));
        layoutWidget = new QWidget(West15);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 300, 878, 194));
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


        retranslateUi(West15);

        QMetaObject::connectSlotsByName(West15);
    } // setupUi

    void retranslateUi(QWidget *West15)
    {
        West15->setWindowTitle(QCoreApplication::translate("West15", "Form", nullptr));
        img15->setText(QCoreApplication::translate("West15", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West15: public Ui_West15 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST15_H
