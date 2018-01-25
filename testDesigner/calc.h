#ifndef CALC_H
#define CALC_H

#include <QDialog>

namespace Ui {
class Calc;
}

class Calc : public QDialog
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = 0);
    ~Calc();

private:
    Ui::Calc *ui;
};

#endif // CALC_H
