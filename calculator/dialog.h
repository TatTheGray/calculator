#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <mainwindow.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
signals:
    void signal2();
public slots:
    void slot();
private slots:
    void on_pushButton_clicked();
};

#endif // DIALOG_H
