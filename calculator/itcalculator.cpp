#include "itcalculator.h"
#include "ui_itcalculator.h"

ITcalculator::ITcalculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ITcalculator)
{
    ui->setupUi(this);
}

ITcalculator::~ITcalculator()
{
    delete ui;
}

void ITcalculator::on_pushButton_clicked()
{
    QT_FEATURE_mainwindow;
}

