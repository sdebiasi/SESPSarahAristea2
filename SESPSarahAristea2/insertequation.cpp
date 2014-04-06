#include "insertequation.h"
#include "ui_insertequation.h"
#include <QString>
#include <QMessageBox>
#include "qcustomplot.h"

InsertEquation::InsertEquation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InsertEquation)
{
    ui->setupUi(this);
}

InsertEquation::~InsertEquation()
{
    delete ui;
}

//ok button is clicked, do the control of the equation if it is right or not
void InsertEquation::on_pushButton_clicked()
{
    QString equation;
    equation = ui->lineEdit->text();
    QMessageBox::information(this, "Title", equation);//just for now, later control equation if it has the right pattern
    /*QVector<double> x(101), y(101);
    for(int i=0; i<101; i++){
        x[i]=i/50.0-1;
        y[i]=x[i]*x[i];
        QCustomPlot *customPlot;
        customPlot->addGraph(0, 0);
        customPlot->graph(0)->setData(x, y);
        customPlot->xAxis->setLabel("x");
        customPlot->yAxis->setLabel("y");
        customPlot->xAxis->setRange(-1, 1);
        customPlot->yAxis->setRange(0, 1);
        customPlot->replot();
    }*/
}

//Cancel button is clicked, so return to the window where you re-enter an equation
void InsertEquation::on_pushButton_2_clicked()
{

}
