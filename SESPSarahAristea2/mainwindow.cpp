#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mathematicalwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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


