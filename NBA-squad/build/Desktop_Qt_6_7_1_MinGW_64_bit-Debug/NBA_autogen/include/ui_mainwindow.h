/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *img;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1015, 809);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        img = new QLabel(centralwidget);
        img->setObjectName("img");
        img->setGeometry(QRect(-10, 0, 1031, 801));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(570, 650, 371, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QPalette palette;
        pushButton->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Bell MT")});
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferDefault);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"        id: testButton\n"
"        anchors.centerIn: parent\n"
"        text: qsTr(\"testButton\")\n"
"        contentItem: Text {\n"
"            text: testButton.text\n"
"            color: \"#ffffff\"\n"
"            horizontalAlignment: Text.AlignHCenter\n"
"            verticalAlignment: Text.AlignVCenter\n"
"            font.pointSize: 10\n"
"        }\n"
"       background: Rectangle {\n"
"            Gradient {\n"
"                id: normalGradient\n"
"                GradientStop { position: 0.0; color: \"#252525\" }\n"
"                GradientStop { position: 0.5; color: \"#e30000\" }\n"
"                GradientStop { position: 1.0; color: \"#252525\" }\n"
"            }\n"
"            Gradient {\n"
"                id: hoveredGradient\n"
"                GradientStop { position: 0.0; color: \"#252525\" }\n"
"                GradientStop { position: 0.5; color: \"#ff5e5e\" }\n"
"                GradientStop { position: 1.0; color: \"#252525\" }\n"
"            }\n"
"            G"
                        "radient {\n"
"                id: pressedGradient\n"
"                GradientStop { position: 0.0; color: \"#252525\" }\n"
"                GradientStop { position: 0.5; color: \"#b00000\" }\n"
"                GradientStop { position: 1.0; color: \"#252525\" }\n"
"            }\n"
"     }\n"
" }"));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bell MT")});
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1015, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        img->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
