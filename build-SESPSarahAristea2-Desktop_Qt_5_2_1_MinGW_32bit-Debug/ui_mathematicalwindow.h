/********************************************************************************
** Form generated from reading UI file 'mathematicalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATHEMATICALWINDOW_H
#define UI_MATHEMATICALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MathematicalWindow
{
public:
    QAction *actionEquation;
    QAction *actionPoint_s;
    QAction *actionInstructions;
    QAction *actionAbout;
    QWidget *centralwidget;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QMenu *menuInsert;
    QMenu *menuHow_to;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MathematicalWindow)
    {
        if (MathematicalWindow->objectName().isEmpty())
            MathematicalWindow->setObjectName(QStringLiteral("MathematicalWindow"));
        MathematicalWindow->resize(800, 600);
        actionEquation = new QAction(MathematicalWindow);
        actionEquation->setObjectName(QStringLiteral("actionEquation"));
        actionPoint_s = new QAction(MathematicalWindow);
        actionPoint_s->setObjectName(QStringLiteral("actionPoint_s"));
        actionInstructions = new QAction(MathematicalWindow);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        actionAbout = new QAction(MathematicalWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(MathematicalWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 30, 451, 291));
        MathematicalWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MathematicalWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QStringLiteral("menuInsert"));
        menuHow_to = new QMenu(menubar);
        menuHow_to->setObjectName(QStringLiteral("menuHow_to"));
        MathematicalWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MathematicalWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MathematicalWindow->setStatusBar(statusbar);

        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuHow_to->menuAction());
        menuInsert->addAction(actionEquation);
        menuInsert->addSeparator();
        menuInsert->addAction(actionPoint_s);
        menuHow_to->addAction(actionInstructions);
        menuHow_to->addSeparator();
        menuHow_to->addAction(actionAbout);

        retranslateUi(MathematicalWindow);

        QMetaObject::connectSlotsByName(MathematicalWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MathematicalWindow)
    {
        MathematicalWindow->setWindowTitle(QApplication::translate("MathematicalWindow", "MainWindow", 0));
        actionEquation->setText(QApplication::translate("MathematicalWindow", "Equation", 0));
        actionPoint_s->setText(QApplication::translate("MathematicalWindow", "Point/s", 0));
        actionInstructions->setText(QApplication::translate("MathematicalWindow", "Instructions", 0));
        actionAbout->setText(QApplication::translate("MathematicalWindow", "About...", 0));
        menuInsert->setTitle(QApplication::translate("MathematicalWindow", "Insert ", 0));
        menuHow_to->setTitle(QApplication::translate("MathematicalWindow", "How to", 0));
    } // retranslateUi

};

namespace Ui {
    class MathematicalWindow: public Ui_MathematicalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHEMATICALWINDOW_H
