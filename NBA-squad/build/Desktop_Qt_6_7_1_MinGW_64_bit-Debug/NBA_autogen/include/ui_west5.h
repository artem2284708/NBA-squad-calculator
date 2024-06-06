/********************************************************************************
** Form generated from reading UI file 'west5.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEST5_H
#define UI_WEST5_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_West5
{
public:
    QTableView *tableView;
    QLabel *img5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView_2;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView_3;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_4;

    void setupUi(QWidget *West5)
    {
        if (West5->objectName().isEmpty())
            West5->setObjectName("West5");
        West5->resize(1000, 550);
        West5->setStyleSheet(QString::fromUtf8("QWidget {\n"
"     background-color:rgb(128, 128, 128);\n"
"}"));
        tableView = new QTableView(West5);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(430, 40, 256, 192));
        img5 = new QLabel(West5);
        img5->setObjectName("img5");
        img5->setGeometry(QRect(90, 50, 190, 150));
        layoutWidget = new QWidget(West5);
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


        retranslateUi(West5);

        QMetaObject::connectSlotsByName(West5);
    } // setupUi

    void retranslateUi(QWidget *West5)
    {
        West5->setWindowTitle(QCoreApplication::translate("West5", "Form", nullptr));
        img5->setText(QCoreApplication::translate("West5", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class West5: public Ui_West5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEST5_H
