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

private slots:

    void digitButtonPressed();
    void on_dotButton_released();
    void binaryOperationPressed();
    void on_equallyButton_released();
    void on_clearButton_released();
    void on_powButton_released();
    void on_sqrtButton_released();
    void on_hexButton_released();
    void on_octButton_released();
    void on_mcButton_released();
    void on_mrButton_released();
    void on_msButton_released();
    void on_mplusButton_released();

private:
    Ui::Calc *ui;

};

#endif // CALC_H
