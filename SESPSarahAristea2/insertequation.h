#ifndef INSERTEQUATION_H
#define INSERTEQUATION_H

#include <QDialog>

namespace Ui {
class InsertEquation;
}

class InsertEquation : public QDialog
{
    Q_OBJECT

public:
    explicit InsertEquation(QWidget *parent = 0);
    ~InsertEquation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InsertEquation *ui;
};

#endif // INSERTEQUATION_H
