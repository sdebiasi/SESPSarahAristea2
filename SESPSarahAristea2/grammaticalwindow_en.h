#ifndef GRAMMATICALWINDOW_EN_H
#define GRAMMATICALWINDOW_EN_H

#include <QMainWindow>

namespace Ui {
class GrammaticalWindow_en;
}

class GrammaticalWindow_en : public QMainWindow
{
    Q_OBJECT

public:
    explicit GrammaticalWindow_en(QWidget *parent = 0);
    ~GrammaticalWindow_en();

public slots:
    void openInstructionEN();
    void openAboutEN();

private:
    Ui::GrammaticalWindow_en *ui;
};

#endif // GRAMMATICALWINDOW_EN_H
