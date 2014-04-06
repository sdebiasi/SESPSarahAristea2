/********************************************************************************
** Form generated from reading UI file 'instructiondialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONDIALOG2_H
#define UI_INSTRUCTIONDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_InstructionDialog2
{
public:

    void setupUi(QDialog *InstructionDialog2)
    {
        if (InstructionDialog2->objectName().isEmpty())
            InstructionDialog2->setObjectName(QStringLiteral("InstructionDialog2"));
        InstructionDialog2->resize(400, 300);

        retranslateUi(InstructionDialog2);

        QMetaObject::connectSlotsByName(InstructionDialog2);
    } // setupUi

    void retranslateUi(QDialog *InstructionDialog2)
    {
        InstructionDialog2->setWindowTitle(QApplication::translate("InstructionDialog2", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class InstructionDialog2: public Ui_InstructionDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONDIALOG2_H
