#include "grammaticalwindow.h"
#include "ui_grammaticalwindow.h"


GrammaticalWindow::GrammaticalWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GrammaticalWindow)
{
    ui->setupUi(this);
}

GrammaticalWindow::~GrammaticalWindow()
{
    delete ui;
}
