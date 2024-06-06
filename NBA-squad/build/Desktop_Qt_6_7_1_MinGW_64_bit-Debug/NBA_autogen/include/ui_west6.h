/********************************************************************************
** Form generated from reading UI file 'west6.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST6_H
#define UI_WEST6_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West6
{
public:
    QTableView *tableView;
    QLabel *img6;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West6)
    {
        if (West6->objectName().isEmpty())
            West6->setObjectName("West6");
        West6->resize(1000, 550);
        West6->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West6);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(430, 40, 256, 192));
        img6 = new QLabel(West6);
        img6->setObjectName("img6");
        img6->setGeometry(QRect(90, 50, 190, 150));
        layoutWidget = new QWidget(West6);
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


        retranslateUi(West6);

        QMetaObject::connectSlotsByName(West6);
    } // setupUi

    void retranslateUi(QWidget *West6)
    {
        West6->setWindowTitle(QCoreApplication::translate("West6", "Form", nullptr));
        img6->setText(QCoreApplication::translate("West6", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West6: public Ui_West6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST6_H
