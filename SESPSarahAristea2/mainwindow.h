#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mathematicalwindow.h"
#include <QMainWindow>
#include "grammaticalwindow_it.h"
#include "grammaticalwindow_en.h"

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

public slots:
    void changeWindow();
    void openAbout();
    void openInstructions();

private:
    Ui::MainWindow *ui;
    MathematicalWindow *w;
    GrammaticalWindow_it *gwi;
    GrammaticalWindow_en *gwe;
};

#endif // MAINWINDOW_H
