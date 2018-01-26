#include "calc.h"
#include "ui_calc.h"
#include "math.h"
#include "stdlib.h"
#include "stdio.h"

double fNum;
bool secondNumber = false;

Calc::Calc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Calc)
{
    ui->setupUi(this);

    connect(ui->oneButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->twoButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->threeButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->fourButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->fiveButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->sixButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->sevenButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->eightButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));
    connect(ui->nineButton, SIGNAL(released()), this, SLOT(digitButtonPressed()));

    connect(ui->plusButton, SIGNAL(released()), this, SLOT(binaryOperationPressed()));
    connect(ui->substractButton, SIGNAL(released()), this, SLOT(binaryOperationPressed()));
    connect(ui->multiplyButton, SIGNAL(released()), this, SLOT(binaryOperationPressed()));
    connect(ui->divideButton, SIGNAL(released()), this, SLOT(binaryOperationPressed()));

    ui->plusButton->setCheckable(true);
    ui->substractButton->setCheckable(true);
    ui->multiplyButton->setCheckable(true);
    ui->divideButton->setCheckable(true);
}

Calc::~Calc(){
    delete ui;
}

// Check the digit
void Calc::digitButtonPressed(){
    QPushButton *button = (QPushButton*)sender();
    double Number = (ui->label->text() + button->text()).toDouble();

    // Check if number already entered
    if(ui->plusButton->isChecked() || ui->substractButton->isChecked() ||
            ui->multiplyButton->isChecked() || ui->divideButton->isChecked() && (!secondNumber)){
        Number = button->text().toDouble();
        secondNumber = true;
    }
    else {
        Number = (ui->label->text() + button->text()).toDouble();
    }

    ui->label->setText(QString::number(Number, 'g', 15));
}

// Check the dot button
void Calc::on_dotButton_released(){
    ui->label->setText(ui->label->text() + ".");
}

// Check the binary operation
void Calc::binaryOperationPressed(){
    QPushButton *button = (QPushButton*)sender();

    fNum = ui->label->text().toDouble();

    // Check what the button was pressed
    button->setChecked(true);

}

// Check the operation and calculating
void Calc::on_equallyButton_released()
{
    double Number, sNum;
    sNum = ui->label->text().toDouble();

    if(ui->plusButton->isChecked()){
        Number = fNum + sNum;
        ui->label->setText(QString::number(Number, 'g', 15));
        ui->plusButton->setChecked(false);
    }
    else if(ui->substractButton->isChecked()){
        Number = fNum - sNum;
        ui->label->setText(QString::number(Number, 'g', 15));
        ui->substractButton->setChecked(false);
    }
    else if(ui->multiplyButton->isChecked()){
        Number = fNum * sNum;
        ui->label->setText(QString::number(Number, 'g', 15));
        ui->multiplyButton->setChecked(false);
    }
    else if(ui->divideButton->isChecked()){
        Number = fNum / sNum;
        ui->label->setText(QString::number(Number, 'g', 15));
        ui->divideButton->setChecked(false);
    }
    secondNumber = false;
}

// Clear all display
void Calc::on_clearButton_released(){
    ui->plusButton->setChecked(false);
    ui->substractButton->setChecked(false);
    ui->multiplyButton->setChecked(false);
    ui->divideButton->setChecked(false);

    secondNumber = false;

    ui->label->setText("0");
}

// Power on 2
void Calc::on_powButton_released()
{
    fNum = ui->label->text().toDouble();
    fNum = pow(fNum, 2);
    ui->label->setText(QString::number(fNum, 'g', 15));
}

// Square root
void Calc::on_sqrtButton_released()
{
    fNum = ui->label->text().toDouble();
    fNum = sqrt(fNum);
    ui->label->setText(QString::number(fNum, 'g', 15));
}

// Convert to HEX
void Calc::on_hexButton_released()
{
    fNum = ui->label->text().toDouble();

    QString hex = QString("0x%1").arg(ui->label->text().toInt(), -1, 16, QLatin1Char('O'));
    ui->label->setText(hex);
}

// Convert to OCT
void Calc::on_octButton_released()
{
    fNum = ui->label->text().toDouble();

    QString oct = QString("%1").arg(ui->label->text().toInt(), -1, 8, QLatin1Char('O'));
    ui->label->setText(oct);
}
