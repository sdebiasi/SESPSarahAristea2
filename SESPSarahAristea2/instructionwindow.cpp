#include "instructionwindow.h"
#include "ui_instructionwindow.h"

InstructionWindow::InstructionWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionWindow)
{
    ui->setupUi(this);
}

InstructionWindow::~InstructionWindow()
{
    delete ui;
}
