/********************************************************************************
** Form generated from reading UI file 'grammaticalwindow_en.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAMMATICALWINDOW_EN_H
#define UI_GRAMMATICALWINDOW_EN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GrammaticalWindow_en
{
public:
    QAction *actionInstructions;
    QAction *actionAbout;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuHow_to;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GrammaticalWindow_en)
    {
        if (GrammaticalWindow_en->objectName().isEmpty())
            GrammaticalWindow_en->setObjectName(QStringLiteral("GrammaticalWindow_en"));
        GrammaticalWindow_en->resize(800, 600);
        actionInstructions = new QAction(GrammaticalWindow_en);
        actionInstructions->setObjectName(QStringLiteral("actionInstructions"));
        actionAbout = new QAction(GrammaticalWindow_en);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralwidget = new QWidget(GrammaticalWindow_en);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 90, 46, 13));
        GrammaticalWindow_en->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GrammaticalWindow_en);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHow_to = new QMenu(menubar);
        menuHow_to->setObjectName(QStringLiteral("menuHow_to"));
        GrammaticalWindow_en->setMenuBar(menubar);
        statusbar = new QStatusBar(GrammaticalWindow_en);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GrammaticalWindow_en->setStatusBar(statusbar);

        menubar->addAction(menuHow_to->menuAction());
        menuHow_to->addAction(actionInstructions);
        menuHow_to->addSeparator();
        menuHow_to->addAction(actionAbout);

        retranslateUi(GrammaticalWindow_en);

        QMetaObject::connectSlotsByName(GrammaticalWindow_en);
    } // setupUi

    void retranslateUi(QMainWindow *GrammaticalWindow_en)
    {
        GrammaticalWindow_en->setWindowTitle(QApplication::translate("GrammaticalWindow_en", "MainWindow", 0));
        actionInstructions->setText(QApplication::translate("GrammaticalWindow_en", "Instructions", 0));
        actionAbout->setText(QApplication::translate("GrammaticalWindow_en", "About...", 0));
        label->setText(QApplication::translate("GrammaticalWindow_en", "EN", 0));
        menuHow_to->setTitle(QApplication::translate("GrammaticalWindow_en", "How to ", 0));
    } // retranslateUi

};

namespace Ui {
    class GrammaticalWindow_en: public Ui_GrammaticalWindow_en {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAMMATICALWINDOW_EN_H
