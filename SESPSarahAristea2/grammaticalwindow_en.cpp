#include "grammaticalwindow_en.h"
#include "ui_grammaticalwindow_en.h"
#include <QMessageBox>

GrammaticalWindow_en::GrammaticalWindow_en(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GrammaticalWindow_en)
{
    ui->setupUi(this);
    connect(this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructionEN()));
    connect(this->ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAboutEN()));

}

void GrammaticalWindow_en::openInstructionEN()
{
    QMessageBox::information(this, "English Grammatics Instructions", "Enter the instructions of the this section."
                             "TODO!");

}

void GrammaticalWindow_en::openAboutEN()
{
    QMessageBox::information(this, "About English Grammatics", "Enter the about information in the main window, plus"
                             " some other information about the main reasons why this section was added in this appliation"
                             " TODO!");
}

GrammaticalWindow_en::~GrammaticalWindow_en()
{
    delete ui;
}
