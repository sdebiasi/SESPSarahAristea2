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

QT_BEGIN_NAMESPACE

class Ui_MathematicalWindow
{
public:
    QAction *actionEquation;
    QAction *actionPoint_s;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuInsert;
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
        centralwidget = new QWidget(MathematicalWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MathematicalWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MathematicalWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName(QStringLiteral("menuInsert"));
        MathematicalWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MathematicalWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MathematicalWindow->setStatusBar(statusbar);

        menubar->addAction(menuInsert->menuAction());
        menuInsert->addAction(actionEquation);
        menuInsert->addSeparator();
        menuInsert->addAction(actionPoint_s);

        retranslateUi(MathematicalWindow);

        QMetaObject::connectSlotsByName(MathematicalWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MathematicalWindow)
    {
        MathematicalWindow->setWindowTitle(QApplication::translate("MathematicalWindow", "MainWindow", 0));
        actionEquation->setText(QApplication::translate("MathematicalWindow", "Equation", 0));
        actionPoint_s->setText(QApplication::translate("MathematicalWindow", "Point/s", 0));
        menuInsert->setTitle(QApplication::translate("MathematicalWindow", "Insert ", 0));
    } // retranslateUi

};

namespace Ui {
    class MathematicalWindow: public Ui_MathematicalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATHEMATICALWINDOW_H
