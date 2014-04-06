/********************************************************************************
** Form generated from reading UI file 'insertdialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTDIALOGWINDOW_H
#define UI_INSERTDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertDialogWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InsertDialogWindow)
    {
        if (InsertDialogWindow->objectName().isEmpty())
            InsertDialogWindow->setObjectName(QStringLiteral("InsertDialogWindow"));
        InsertDialogWindow->resize(367, 164);
        centralwidget = new QWidget(InsertDialogWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 251, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 60, 311, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 110, 51, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(254, 110, 71, 23));
        InsertDialogWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(InsertDialogWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        InsertDialogWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(InsertDialogWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        InsertDialogWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(InsertDialogWindow);

        QMetaObject::connectSlotsByName(InsertDialogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InsertDialogWindow)
    {
        InsertDialogWindow->setWindowTitle(QApplication::translate("InsertDialogWindow", "MainWindow", 0));
        label->setText(QApplication::translate("InsertDialogWindow", "Insert an equation you want to graphically display:", 0));
        pushButton->setText(QApplication::translate("InsertDialogWindow", "Ok", 0));
        pushButton_2->setText(QApplication::translate("InsertDialogWindow", "Cancel", 0));
        toolBar->setWindowTitle(QApplication::translate("InsertDialogWindow", "toolBar", 0));
#ifndef QT_NO_ACCESSIBILITY
        toolBar->setAccessibleName(QApplication::translate("InsertDialogWindow", "INSERT", 0));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class InsertDialogWindow: public Ui_InsertDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTDIALOGWINDOW_H
