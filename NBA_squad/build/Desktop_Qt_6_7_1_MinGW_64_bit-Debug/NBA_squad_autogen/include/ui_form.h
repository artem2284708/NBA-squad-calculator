/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label2;
    QTableView *tableView;
    QTableView *tableView_2;
    QTableView *tableView_3;
    QTableView *tableView_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1302, 715);
        label2 = new QLabel(Form);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(10, 10, 161, 131));
        tableView = new QTableView(Form);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(690, 60, 551, 331));
        tableView_2 = new QTableView(Form);
        tableView_2->setObjectName("tableView_2");
        tableView_2->setGeometry(QRect(180, 40, 441, 221));
        tableView_3 = new QTableView(Form);
        tableView_3->setObjectName("tableView_3");
        tableView_3->setGeometry(QRect(750, 410, 441, 281));
        tableView_4 = new QTableView(Form);
        tableView_4->setObjectName("tableView_4");
        tableView_4->setGeometry(QRect(80, 340, 441, 361));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label2->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
