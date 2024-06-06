/********************************************************************************
** Form generated from reading UI file 'west3.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST3_H
#define UI_WEST3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West3
{
public:
    QTableView *tableView;
    QLabel *img3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West3)
    {
        if (West3->objectName().isEmpty())
            West3->setObjectName("West3");
        West3->resize(1000, 550);
        West3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West3);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(440, 30, 256, 192));
        img3 = new QLabel(West3);
        img3->setObjectName("img3");
        img3->setGeometry(QRect(100, 40, 190, 150));
        layoutWidget = new QWidget(West3);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 290, 878, 194));
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


        retranslateUi(West3);

        QMetaObject::connectSlotsByName(West3);
    } // setupUi

    void retranslateUi(QWidget *West3)
    {
        West3->setWindowTitle(QCoreApplication::translate("West3", "Form", nullptr));
        img3->setText(QCoreApplication::translate("West3", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West3: public Ui_West3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST3_H
