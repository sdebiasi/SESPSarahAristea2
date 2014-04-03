#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mathematicalwindow.h"
#include "grammaticalwindow_it.h"
#include "grammaticalwindow_en.h"
#include "instructionwindow.h"
#include "aboutwindow.h"

//MAIN WINDOW WHICH CONTAINS THE OPENING WINDOW AND LET THE USER CHOOSE THE NEXT ACTIVITY TO DO

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( this->ui->pushButton_2, SIGNAL( clicked() ), this, SLOT(changeWindow()));
    connect( this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructions()));
    connect(this->ui->actionAbout, SIGNAL (triggered()), this, SLOT(openAboutWindow()));
    //connect( this->ui->radioButton, SIGNAL( clicked() ), this, SLOT());
    //connect( this->ui->radioButton_2, SIGNAL( clicked() ), this, SLOT());
}

void MainWindow::changeWindow()
{
    // Italian radio button is checked, so the Grammatival in italian window is opened
    if(this->ui->radioButton->isChecked())
      {
        gwi = new GrammaticalWindow_it(this);
        gwi->show();
      }

    // English radio button is checked, so the Grammatical in English window is opened
    if(this->ui->radioButton_2->isChecked())
      {
        gwe = new GrammaticalWindow_en(this);
        gwe->show();
      }
}

//Open an isntruction window, giving some information on how to use the application
void MainWindow::openInstructions()
{
        instr = new InstructionWindow(this);
        instr->show();
}

void MainWindow::openAboutWindow()
{
    abt = new AboutWindow(this);
    abt->show();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    w = new MathematicalWindow(this);
    w->show();

}


