/********************************************************************************
** Form generated from reading UI file 'insertequation.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTEQUATION_H
#define UI_INSERTEQUATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InsertEquation
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *InsertEquation)
    {
        if (InsertEquation->objectName().isEmpty())
            InsertEquation->setObjectName(QStringLiteral("InsertEquation"));
        InsertEquation->resize(387, 144);
        label = new QLabel(InsertEquation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 331, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        lineEdit = new QLineEdit(InsertEquation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 50, 331, 20));
        widget = new QWidget(InsertEquation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 100, 158, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(InsertEquation);

        QMetaObject::connectSlotsByName(InsertEquation);
    } // setupUi

    void retranslateUi(QDialog *InsertEquation)
    {
        InsertEquation->setWindowTitle(QApplication::translate("InsertEquation", "Dialog", 0));
        label->setText(QApplication::translate("InsertEquation", "Insert the equation you want to display graphically:", 0));
        pushButton->setText(QApplication::translate("InsertEquation", "Ok", 0));
        pushButton_2->setText(QApplication::translate("InsertEquation", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class InsertEquation: public Ui_InsertEquation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTEQUATION_H
