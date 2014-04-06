#ifndef GRAMMATICALWINDOW_IT_H
#define GRAMMATICALWINDOW_IT_H

#include <QMainWindow>

namespace Ui {
class GrammaticalWindow_it;
}

class GrammaticalWindow_it : public QMainWindow
{
    Q_OBJECT

public:
    explicit GrammaticalWindow_it(QWidget *parent = 0);
    ~GrammaticalWindow_it();

public slots:
    void openInstructionIT();
    void openAboutIT();

private:
    Ui::GrammaticalWindow_it *ui;
};

#endif // GRAMMATICALWINDOW_IT_H
