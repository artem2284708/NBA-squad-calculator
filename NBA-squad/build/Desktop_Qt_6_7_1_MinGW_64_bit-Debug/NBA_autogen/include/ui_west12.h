/********************************************************************************
** Form generated from reading UI file 'west12.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST12_H
#define UI_WEST12_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West12
{
public:
    QTableView *tableView;
    QLabel *img12;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West12)
    {
        if (West12->objectName().isEmpty())
            West12->setObjectName("West12");
        West12->resize(1000, 550);
        West12->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West12);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(440, 50, 256, 192));
        img12 = new QLabel(West12);
        img12->setObjectName("img12");
        img12->setGeometry(QRect(100, 60, 190, 150));
        layoutWidget = new QWidget(West12);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 310, 878, 194));
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


        retranslateUi(West12);

        QMetaObject::connectSlotsByName(West12);
    } // setupUi

    void retranslateUi(QWidget *West12)
    {
        West12->setWindowTitle(QCoreApplication::translate("West12", "Form", nullptr));
        img12->setText(QCoreApplication::translate("West12", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West12: public Ui_West12 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST12_H
