#include "grammaticalwindow_it.h"
#include "ui_grammaticalwindow_it.h"

GrammaticalWindow_it::GrammaticalWindow_it(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GrammaticalWindow_it)
{
    ui->setupUi(this);
}

GrammaticalWindow_it::~GrammaticalWindow_it()
{
    delete ui;
}
