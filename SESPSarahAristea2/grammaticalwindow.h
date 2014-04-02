#ifndef GRAMMATICALWINDOW_H
#define GRAMMATICALWINDOW_H

#include <QMainWindow>

namespace Ui {
class GrammaticalWindow;
}

class GrammaticalWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GrammaticalWindow(QWidget *parent = 0);
    ~GrammaticalWindow();

private:
    Ui::GrammaticalWindow *ui;
};

#endif // GRAMMATICALWINDOW_H
