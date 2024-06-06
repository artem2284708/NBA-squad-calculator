/********************************************************************************
** Form generated from reading UI file 'west4.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST4_H
#define UI_WEST4_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West4
{
public:
    QTableView *tableView;
    QLabel *img4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West4)
    {
        if (West4->objectName().isEmpty())
            West4->setObjectName("West4");
        West4->resize(1000, 550);
        West4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West4);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(440, 40, 256, 192));
        img4 = new QLabel(West4);
        img4->setObjectName("img4");
        img4->setGeometry(QRect(100, 50, 190, 150));
        layoutWidget = new QWidget(West4);
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


        retranslateUi(West4);

        QMetaObject::connectSlotsByName(West4);
    } // setupUi

    void retranslateUi(QWidget *West4)
    {
        West4->setWindowTitle(QCoreApplication::translate("West4", "Form", nullptr));
        img4->setText(QCoreApplication::translate("West4", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West4: public Ui_West4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST4_H
