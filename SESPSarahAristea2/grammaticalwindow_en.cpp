#include "grammaticalwindow_en.h"
#include "ui_grammaticalwindow_en.h"

GrammaticalWindow_en::GrammaticalWindow_en(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GrammaticalWindow_en)
{
    ui->setupUi(this);
}

GrammaticalWindow_en::~GrammaticalWindow_en()
{
    delete ui;
}
