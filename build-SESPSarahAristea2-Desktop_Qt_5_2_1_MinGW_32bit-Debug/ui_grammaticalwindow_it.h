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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GrammaticalWindow_it
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GrammaticalWindow_it)
    {
        if (GrammaticalWindow_it->objectName().isEmpty())
            GrammaticalWindow_it->setObjectName(QStringLiteral("GrammaticalWindow_it"));
        GrammaticalWindow_it->resize(800, 600);
        menubar = new QMenuBar(GrammaticalWindow_it);
        menubar->setObjectName(QStringLiteral("menubar"));
        GrammaticalWindow_it->setMenuBar(menubar);
        centralwidget = new QWidget(GrammaticalWindow_it);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GrammaticalWindow_it->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(GrammaticalWindow_it);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GrammaticalWindow_it->setStatusBar(statusbar);

        retranslateUi(GrammaticalWindow_it);

        QMetaObject::connectSlotsByName(GrammaticalWindow_it);
    } // setupUi

    void retranslateUi(QMainWindow *GrammaticalWindow_it)
    {
        GrammaticalWindow_it->setWindowTitle(QApplication::translate("GrammaticalWindow_it", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class GrammaticalWindow_it: public Ui_GrammaticalWindow_it {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAMMATICALWINDOW_IT_H
