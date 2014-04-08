#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mathematicalwindow.h"
#include "grammaticalwindow_it.h"
#include "grammaticalwindow_en.h"
#include <QMessageBox>

//MAIN WINDOW WHICH CONTAINS THE OPENING WINDOW AND LET THE USER CHOOSE THE NEXT ACTIVITY TO DO

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("background-image: url(C:/Users/Sony/Documents/GitHub/SESPSarahAristea2/SESPSarahAristea2/bbbb)");
    connect( this->ui->pushButton_2, SIGNAL(clicked()), this, SLOT(changeWindow()));
    connect(this->ui->actionAbout, SIGNAL (triggered()), this, SLOT(openAbout()));
    connect(this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructions()));
}

//Open an isntruction window, giving some information on how to use the application
void MainWindow::openInstructions()
{

    QMessageBox::information(this, "Instructions", "Hello young user!\nHere you can find some information on how to"
                             " use this interesting and educational application.\nFirstly choose the field you want to"
                             " learn about, Mathematics or Grammatics(English/Italian).\nThen the corresponding window"
                             " will open and you can start working on it.\nMore information on each activity will be provided"
                             " on the corresponding window.\nAnd remeber,\n\t\t\t\tLEARNING IS FUN!");
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

void MainWindow::openAbout()
{
    QMessageBox::information(this,"About", "Hello young users!\nThis application is build by Sarah & Aristea, two"
                             " computer science students. This application is build on purpose of an university"
                             " course project, called Software Enginnering & Software Project.\nThe aim of this application"
                             " is to give a hand to middle-school students. Hopefully, they will study some exercises and"
                             " control the results of some other results and build their own ");
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
