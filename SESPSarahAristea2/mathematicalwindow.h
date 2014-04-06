#ifndef MATHEMATICALWINDOW_H
#define MATHEMATICALWINDOW_H
#include "insertequation.h"

#include <QMainWindow>

namespace Ui {
class MathematicalWindow;
}

class MathematicalWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MathematicalWindow(QWidget *parent = 0);
    ~MathematicalWindow();

public slots:
    void openAboutMath();
    void openInstructionsMath();
    void inputEquation();
    void insertPoints();


private:
    Ui::MathematicalWindow *ui;
    InsertEquation *ie;


};

#endif // MATHEMATICALWINDOW_H
