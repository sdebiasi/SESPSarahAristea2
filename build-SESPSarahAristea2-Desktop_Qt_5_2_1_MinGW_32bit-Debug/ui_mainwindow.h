/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInstructions;
    QAction *actionAbout;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuHow_to;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setAcceptDrops(true);
        actionInstructions = new QAction(MainWindow);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        actionInstructions->setCheckable(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 470, 521, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(132, 302, 153, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        pushButton->setFont(font2);
        pushButton->setAutoFillBackground(true);
        pushButton->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(390, 360, 168, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font3;
        font3.setFamily(QStringLiteral("Calibri"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        radioButton->setFont(font3);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        radioButton_2->setFont(font3);

        horizontalLayout->addWidget(radioButton_2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(390, 300, 171, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Calibri"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_2->setFont(font4);
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        radioButton->raise();
        radioButton_2->raise();
        pushButton_2->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuHow_to = new QMenu(menuBar);
        menuHow_to->setObjectName(QStringLiteral("menuHow_to"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuHow_to->menuAction());
        menuHow_to->addAction(actionInstructions);
        menuHow_to->addSeparator();
        menuHow_to->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Grammath", 0));
        actionInstructions->setText(QApplication::translate("MainWindow", "Instructions", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label->setText(QApplication::translate("MainWindow", "GRAMMATH", 0));
        label_2->setText(QApplication::translate("MainWindow", "A SCHOOL AID THOUGHT JUST FOR YOU!", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Mathematics", 0));
        radioButton->setText(QApplication::translate("MainWindow", "Italian", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "English", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Grammatics", 0));
        menuHow_to->setTitle(QApplication::translate("MainWindow", "How to ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
