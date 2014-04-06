#include "grammaticalwindow_it.h"
#include "ui_grammaticalwindow_it.h"
#include <QMessageBox>

GrammaticalWindow_it::GrammaticalWindow_it(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GrammaticalWindow_it)
{
    ui->setupUi(this);
    connect(this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructionIT()));
    connect(this->ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAboutIT()));
}

void GrammaticalWindow_it::openInstructionIT()
{
    QMessageBox::information(this, "Italian Grammatics Instructions", "Here the instructions for the italian grammatic"
                             " exercises. TODO!");
}

void GrammaticalWindow_it::openAboutIT()
{
   QMessageBox::information(this, "About Italian Grammatics", "Here the about as in the mainwindow, but add some fair reasons why you added"
                            " this section in the application. TODO!");
}

GrammaticalWindow_it::~GrammaticalWindow_it()
{
    delete ui;
}
