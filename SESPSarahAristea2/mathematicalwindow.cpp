#include "mathematicalwindow.h"
#include "ui_mathematicalwindow.h"

MathematicalWindow::MathematicalWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MathematicalWindow)
{
    ui->setupUi(this);


}

MathematicalWindow::~MathematicalWindow()
{
    delete ui;
}
