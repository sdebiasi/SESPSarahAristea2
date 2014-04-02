#ifndef MATHEMATICALWINDOW_H
#define MATHEMATICALWINDOW_H

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

private:
    Ui::MathematicalWindow *ui;
};

#endif // MATHEMATICALWINDOW_H
