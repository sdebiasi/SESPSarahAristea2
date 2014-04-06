/********************************************************************************
** Form generated from reading UI file 'inputequationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTEQUATIONWINDOW_H
#define UI_INPUTEQUATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_InputEquationWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *InputEquationWindow)
    {
        if (InputEquationWindow->objectName().isEmpty())
            InputEquationWindow->setObjectName(QStringLiteral("InputEquationWindow"));
        InputEquationWindow->resize(393, 164);
        buttonBox = new QDialogButtonBox(InputEquationWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 120, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(InputEquationWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 261, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit = new QLineEdit(InputEquationWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 70, 331, 20));

        retranslateUi(InputEquationWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), InputEquationWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InputEquationWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(InputEquationWindow);
    } // setupUi

    void retranslateUi(QDialog *InputEquationWindow)
    {
        InputEquationWindow->setWindowTitle(QApplication::translate("InputEquationWindow", "Dialog", 0));
        label->setText(QApplication::translate("InputEquationWindow", "Insert an equation to display it graphically:", 0));
    } // retranslateUi

};

namespace Ui {
    class InputEquationWindow: public Ui_InputEquationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTEQUATIONWINDOW_H
