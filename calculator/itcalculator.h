#ifndef ITCALCULATOR_H
#define ITCALCULATOR_H

#include <QDialog>

namespace Ui {
class ITcalculator;
}

class ITcalculator : public QDialog
{
    Q_OBJECT

public:
    explicit ITcalculator(QWidget *parent = nullptr);
    ~ITcalculator();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ITcalculator *ui;
};

#endif // ITCALCULATOR_H
