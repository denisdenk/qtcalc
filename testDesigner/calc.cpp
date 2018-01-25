#include "calc.h"
#include "ui_calc.h"

Calc::Calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calc)
{
    ui->setupUi(this);
}

Calc::~Calc()
{
    delete ui;
}
