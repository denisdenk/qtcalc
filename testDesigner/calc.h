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
    void on_clearButton_released();

    void on_hexButton_released();

    void on_decButton_released();

    void on_octButton_released();

    void on_sqrtButton_released();

    void on_powButton_released();

    void on_substractButton_released();

    void on_plusButton_released();

    void on_multiplyButton_released();

    void on_equallyButton_released();

    void on_divideButton_released();

    void on_dotButton_released();

    void on_mcButton_released();

    void on_mrButton_released();

    void on_msButton_released();

    void on_mplusButton_released();

    void on_zeroButton_released();

    void on_oneButton_released();

    void on_twoButton_released();

    void on_threeButton_released();

    void on_fourButton_released();

    void on_fiveButton_released();

    void on_sixButton_released();

    void on_sevenButton_released();

    void on_eightButton_released();

    void on_nineButton_released();

private:
    Ui::Calc *ui;
};

#endif // CALC_H
