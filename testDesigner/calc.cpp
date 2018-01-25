#include "calc.h"
#include "ui_calc.h"

Calc::Calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calc)
{
    ui->setupUi(this);

    connect(ui->clearButton, SIGNAL(released()), this, SLOT(on_clearButton_released()));
    connect(ui->hexButton, SIGNAL(released()), this, SLOT(on_hexButton_released()));
    connect(ui->decButton, SIGNAL(released()), this, SLOT(on_decButton_released()));
    connect(ui->octButton, SIGNAL(released()), this, SLOT(on_octButton_released()));
    connect(ui->sqrtButton, SIGNAL(released()), this, SLOT(on_sqrtButton_released()));
    connect(ui->powButton, SIGNAL(released()), this, SLOT(on_powButton_released()));
    connect(ui->substractButton, SIGNAL(released()), this, SLOT(on_substractButton_released()));
    connect(ui->plusButton, SIGNAL(released()), this, SLOT(on_plusButton_released()));
    connect(ui->multiplyButton, SIGNAL(released()), this, SLOT(on_multiplyButton_released()));
    connect(ui->equallyButton, SIGNAL(released()), this, SLOT(on_equallyButton_released()));
    connect(ui->divideButton, SIGNAL(released()), this, SLOT(on_divideButton_released()));
    connect(ui->dotButton, SIGNAL(released()), this, SLOT(on_dotButton_released()));
    connect(ui->mcButton, SIGNAL(released()), this, SLOT(on_mcButton_released()));
    connect(ui->mrButton, SIGNAL(released()), this, SLOT(on_mrButton_released()));
    connect(ui->msButton, SIGNAL(released()), this, SLOT(on_msButton_released()));
    connect(ui->plusButton, SIGNAL(released()), this, SLOT(on_mrButton_released()));
    connect(ui->zeroButton, SIGNAL(released()), this, SLOT(on_zeroButton_released()));
    connect(ui->oneButton, SIGNAL(released()), this, SLOT(on_oneButton_released()));
    connect(ui->twoButton, SIGNAL(released()), this, SLOT(on_twoButton_released()));
    connect(ui->threeButton, SIGNAL(released()), this, SLOT(on_threeButton_released()));
    connect(ui->fourButton, SIGNAL(released()), this, SLOT(on_fourButton_released()));
    connect(ui->fiveButton, SIGNAL(released()), this, SLOT(on_fiveButton_released()));
    connect(ui->sixButton, SIGNAL(released()), this, SLOT(on_sixButton_released()));
    connect(ui->sevenButton, SIGNAL(released()), this, SLOT(on_sevenButton_released()));
    connect(ui->eightButton, SIGNAL(released()), this, SLOT(on_eightButton_released()));
    connect(ui->nineButton, SIGNAL(released()), this, SLOT(on_nineButton_released()));




}

Calc::~Calc()
{
    delete ui;
}

void Calc::on_clearButton_released()
{
    ui->textBrowser->setText("Clear!");
}

void Calc::on_hexButton_released()
{

}

void Calc::on_decButton_released()
{

}

void Calc::on_octButton_released()
{

}

void Calc::on_sqrtButton_released()
{

}

void Calc::on_powButton_released()
{

}

void Calc::on_substractButton_released()
{

}

void Calc::on_plusButton_released()
{

}

void Calc::on_multiplyButton_released()
{

}

void Calc::on_equallyButton_released()
{

}

void Calc::on_divideButton_released()
{

}

void Calc::on_dotButton_released()
{

}

void Calc::on_mcButton_released()
{

}

void Calc::on_mrButton_released()
{

}

void Calc::on_msButton_released()
{

}

void Calc::on_mplusButton_released()
{

}

void Calc::on_zeroButton_released()
{

}

void Calc::on_oneButton_released()
{

}

void Calc::on_twoButton_released()
{

}

void Calc::on_threeButton_released()
{

}

void Calc::on_fourButton_released()
{

}

void Calc::on_fiveButton_released()
{

}

void Calc::on_sixButton_released()
{

}

void Calc::on_sevenButton_released()
{

}

void Calc::on_eightButton_released()
{

}

void Calc::on_nineButton_released()
{

}
