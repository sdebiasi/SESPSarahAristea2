#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mathematicalwindow.h"
#include "grammaticalwindow_it.h"
#include "grammaticalwindow_en.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect( this->ui->pushButton_2, SIGNAL( clicked() ), this, SLOT(changeWindow()));
    //connect( this->ui->radioButton, SIGNAL( clicked() ), this, SLOT());
    //connect( this->ui->radioButton_2, SIGNAL( clicked() ), this, SLOT());
}

void MainWindow::changeWindow()
{

    if(this->ui->radioButton->isChecked())
      {
        gwi = new GrammaticalWindow_it(this);
        gwi->show();
      }

    if(this->ui->radioButton_2->isChecked())
      {
        gwe = new GrammaticalWindow_en(this);
        gwe->show();
      }
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


