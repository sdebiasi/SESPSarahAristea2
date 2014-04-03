/********************************************************************************
** Form generated from reading UI file 'grammaticalwindow_it.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAMMATICALWINDOW_IT_H
#define UI_GRAMMATICALWINDOW_IT_H

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

class Ui_GrammaticalWindow_it
{
public:
    QAction *actionInstructions;
    QAction *actionAbout;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuHow_to;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GrammaticalWindow_it)
    {
        if (GrammaticalWindow_it->objectName().isEmpty())
            GrammaticalWindow_it->setObjectName(QStringLiteral("GrammaticalWindow_it"));
        GrammaticalWindow_it->resize(800, 600);
        actionInstructions = new QAction(GrammaticalWindow_it);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        actionAbout = new QAction(GrammaticalWindow_it);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(GrammaticalWindow_it);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GrammaticalWindow_it->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GrammaticalWindow_it);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHow_to = new QMenu(menubar);
        menuHow_to->setObjectName(QStringLiteral("menuHow_to"));
        GrammaticalWindow_it->setMenuBar(menubar);
        statusbar = new QStatusBar(GrammaticalWindow_it);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GrammaticalWindow_it->setStatusBar(statusbar);

        menubar->addAction(menuHow_to->menuAction());
        menuHow_to->addAction(actionInstructions);
        menuHow_to->addSeparator();
        menuHow_to->addAction(actionAbout);

        retranslateUi(GrammaticalWindow_it);

        QMetaObject::connectSlotsByName(GrammaticalWindow_it);
    } // setupUi

    void retranslateUi(QMainWindow *GrammaticalWindow_it)
    {
        GrammaticalWindow_it->setWindowTitle(QApplication::translate("GrammaticalWindow_it", "MainWindow", 0));
        actionInstructions->setText(QApplication::translate("GrammaticalWindow_it", "Instructions", 0));
        actionAbout->setText(QApplication::translate("GrammaticalWindow_it", "About...", 0));
        menuHow_to->setTitle(QApplication::translate("GrammaticalWindow_it", "How to ", 0));
    } // retranslateUi

};

namespace Ui {
    class GrammaticalWindow_it: public Ui_GrammaticalWindow_it {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAMMATICALWINDOW_IT_H
