#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mathematicalwindow.h"
#include <QMainWindow>
#include "grammaticalwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    MathematicalWindow *w;
    GrammaticalWindow *gw;
};

#endif // MAINWINDOW_H
