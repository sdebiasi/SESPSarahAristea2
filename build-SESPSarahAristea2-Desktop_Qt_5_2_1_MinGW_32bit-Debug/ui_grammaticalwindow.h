/********************************************************************************
** Form generated from reading UI file 'grammaticalwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAMMATICALWINDOW_H
#define UI_GRAMMATICALWINDOW_H

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

class Ui_GrammaticalWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GrammaticalWindow)
    {
        if (GrammaticalWindow->objectName().isEmpty())
            GrammaticalWindow->setObjectName(QStringLiteral("GrammaticalWindow"));
        GrammaticalWindow->resize(435, 252);
        centralwidget = new QWidget(GrammaticalWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GrammaticalWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GrammaticalWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 435, 21));
        GrammaticalWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GrammaticalWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GrammaticalWindow->setStatusBar(statusbar);

        retranslateUi(GrammaticalWindow);

        QMetaObject::connectSlotsByName(GrammaticalWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GrammaticalWindow)
    {
        GrammaticalWindow->setWindowTitle(QApplication::translate("GrammaticalWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class GrammaticalWindow: public Ui_GrammaticalWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAMMATICALWINDOW_H
