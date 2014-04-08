#include "mathematicalwindow.h"
#include "ui_mathematicalwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QString>
#define MESSAGE \
     Dialog::tr("<p>Message boxes have a caption, a text, " \
                "and any number of buttons, each with standard or custom texts." \
                "<p>Click a button to close the message box. Pressing the Esc button " \
                "will activate the detected escape button (if any).")

MathematicalWindow::MathematicalWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MathematicalWindow)
{
    ui->setupUi(this);
    connect(this->ui->actionEquation, SIGNAL(triggered()), this, SLOT(setText()));//TODO
    connect (this->ui->actionPoint_s, SIGNAL(triggered()), this, SLOT(insertPoints()));//TODO
    connect(this->ui->actionInstructions, SIGNAL(triggered()), this, SLOT(openInstructionsMath()));//DONE
    connect(this->ui->actionAbout, SIGNAL(triggered()), this, SLOT(openAboutMath()));//DONE
}

void MathematicalWindow::setText()
{
    QLabel *textLabel = new QLabel();
    bool ok;
    QString text = QInputDialog::getText(this, tr("QInputDialog::getText()") ,tr("User name: "), QLineEdit::Normal, QString::null, &ok);
    if( ok && !text.isEmpty())
    {
        QCustomPlot *plot = new QCustomPlot();
        textLabel->setText(text);
        QVector<double> x(101), y(101);//initialize with entries from 0..100
        for(int i = 0; i<101; i++)
        {
            x[i]=i/5.0;//x goes from 0 to 20
            y[i]=x[i]*x[i];
            //TODO //y[i]= textLabel->text().toDouble();//the equation to plot DOESN'T READ THE EQUATION
        }
        //create graph and assign data to it
        plot->addGraph();
        plot->graph(0)->setData(x,y);
        //give the axis some label
        plot->xAxis->setLabel("x");
        plot->yAxis->setLabel("y");
        //set axes range, so we see all the data:
        plot->xAxis->setRange(0, 20);
        plot->yAxis->setRange(0, 50);
        plot->replot();
        plot->showMaximized();
    }

}

void MathematicalWindow::insertPoints()
{

}

void MathematicalWindow::openInstructionsMath()
{
    QMessageBox::information(this, "Mathematics Instruction", "Here I write some instructions on how the users have to"
                             " use this window!");
}

void MathematicalWindow::openAboutMath()
{
    QMessageBox::information(this, "About", "Here I write the about of the main window, and add some reasons why we added"
                             " the mathematics part in our application!");
}


MathematicalWindow::~MathematicalWindow()
{
    delete ui;
}
