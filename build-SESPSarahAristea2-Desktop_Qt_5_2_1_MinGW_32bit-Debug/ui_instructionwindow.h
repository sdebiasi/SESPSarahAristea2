/********************************************************************************
** Form generated from reading UI file 'instructionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONWINDOW_H
#define UI_INSTRUCTIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstructionWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InstructionWindow)
    {
        if (InstructionWindow->objectName().isEmpty())
            InstructionWindow->setObjectName(QStringLiteral("InstructionWindow"));
        InstructionWindow->resize(449, 255);
        centralwidget = new QWidget(InstructionWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 251, 91));
        InstructionWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InstructionWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 449, 21));
        InstructionWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InstructionWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InstructionWindow->setStatusBar(statusbar);

        retranslateUi(InstructionWindow);

        QMetaObject::connectSlotsByName(InstructionWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InstructionWindow)
    {
        InstructionWindow->setWindowTitle(QApplication::translate("InstructionWindow", "MainWindow", 0));
        label->setText(QApplication::translate("InstructionWindow", "Some instrucions how to use the application ", 0));
    } // retranslateUi

};

namespace Ui {
    class InstructionWindow: public Ui_InstructionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONWINDOW_H
