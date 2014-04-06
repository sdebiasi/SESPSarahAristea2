#include "inputequationwindow.h"
#include "ui_inputequationwindow.h"
#include <QLineEdit>

InputEquationWindow::InputEquationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputEquationWindow)
{
    ui->setupUi(this);
    connect(this->ui->lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(readValue(const QString&)));
}

void InputEquationWindow::readValue(const QString&){
    QString text;
    text = ui->lineEdit->text();
    //bool ok;
    //QString text = QLineEdit::
}

InputEquationWindow::~InputEquationWindow()
{
    delete ui;
}

