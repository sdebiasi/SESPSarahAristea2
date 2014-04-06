#include "mathematicalwindow.h"
#include "ui_mathematicalwindow.h"
#include "insertequation.h"
#include <QMessageBox>
#include <QInputDialog>

MathematicalWindow::MathematicalWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MathematicalWindow)
{
    ui->setupUi(this);
    connect(this->ui->actionEquation, SIGNAL(triggered()), this, SLOT(inputEquation()));
    connect (this->ui->actionPoint_s, SIGNAL(triggered()), this, SLOT(insertPoints()));
    connect(this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructionsMath()));
    connect(this->ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAboutMath()));
}

void MathematicalWindow::inputEquation()
{
    ie = new InsertEquation(this);
    ie->show();
}

void MathematicalWindow::insertPoints()
{

}

void MathematicalWindow::openInstructionsMath()
{
    QMessageBox::information(this, "Mathematics Instruction", "Here I write some instructions on how the users have to"
                             " use this window!");
}

void MathematicalWindow::openAboutMath()
{
    QMessageBox::information(this, "About", "Here I write the about of the main window, and add some reasons why we added"
                             " the mathematics part in our application!");
}


MathematicalWindow::~MathematicalWindow()
{
    delete ui;
}
