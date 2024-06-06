/********************************************************************************
** Form generated from reading UI file 'west11.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST11_H
#define UI_WEST11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West11
{
public:
    QTableView *tableView;
    QLabel *img11;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West11)
    {
        if (West11->objectName().isEmpty())
            West11->setObjectName("West11");
        West11->resize(1000, 550);
        West11->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West11);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(440, 40, 256, 192));
        img11 = new QLabel(West11);
        img11->setObjectName("img11");
        img11->setGeometry(QRect(100, 50, 190, 150));
        layoutWidget = new QWidget(West11);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 300, 878, 194));
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


        retranslateUi(West11);

        QMetaObject::connectSlotsByName(West11);
    } // setupUi

    void retranslateUi(QWidget *West11)
    {
        West11->setWindowTitle(QCoreApplication::translate("West11", "Form", nullptr));
        img11->setText(QCoreApplication::translate("West11", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West11: public Ui_West11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST11_H
