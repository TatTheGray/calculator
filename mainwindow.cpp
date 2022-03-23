#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "string"
#include "dialog.h"
#include "math.h"
#include "ui_dialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int buf3=1;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_16_clicked() //clear
{
    f1=f2=false;
    buf=buf2=-1;
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_2_clicked()
{
    int buf3=2;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    int buf3=3;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    int buf3=4;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    int buf3=5;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    int buf3=6;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    int buf3=7;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    int buf3=8;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    int buf3=9;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_10_clicked()
{
    int buf3=0;
    if (f1==false)
    {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf==-1) {
                buf=buf3;
            } else buf=buf*10+buf3;
    } else {
            QString s;
            s=ui->lineEdit->text();
            s+=QString::number(buf3);
            ui->lineEdit->setText(s);
            if (buf2==-1) {
                buf2=buf3;
            } else buf2=buf2*10+buf3;
    }
}


void MainWindow::on_pushButton_11_clicked()
{
        if (f2==true){
            QString qw=ui->lineEdit->text();
            qw.remove(qw.length()-1,1);
            ui->lineEdit->setText(qw);
        }
        ui->lineEdit->setText(ui->lineEdit->text()+'+');
        sign=1;
        f1=true;
        f2=true;
}


void MainWindow::on_pushButton_12_clicked()
{
    if (f2==true){
        QString qw=ui->lineEdit->text();
        qw.remove(qw.length()-1,1);
        ui->lineEdit->setText(qw);
    }
    ui->lineEdit->setText(ui->lineEdit->text()+'-');
    sign=2;
    f1=true;
    f2=true;
}


void MainWindow::on_pushButton_13_clicked()
{
    if (f2==true){
        QString qw=ui->lineEdit->text();
        qw.remove(qw.length()-1,1);
        ui->lineEdit->setText(qw);
    }
    ui->lineEdit->setText(ui->lineEdit->text()+'*');
    sign=3;
    f1=true;
    f2=true;
}


void MainWindow::on_pushButton_14_clicked()
{
    if (f2==true){
        QString qw=ui->lineEdit->text();
        qw.remove(qw.length()-1,1);
        ui->lineEdit->setText(qw);
    }
    ui->lineEdit->setText(ui->lineEdit->text()+'/');
    sign=4;
    f1=true;
    f2=true;
}


void MainWindow::on_pushButton_15_clicked()
{
    if (sign==0) {
        QMessageBox box;
       box.warning(this,"предупреждение","действие не выбрано");
    }
    if (sign==1) {
        buf+=buf2;
        ui->lineEdit->setText(QString::number(buf));
    }
    if (sign==2) {
        buf-=buf2;
        ui->lineEdit->setText(QString::number(buf));
    }
    if (sign==3) {
        buf*=buf2;
        ui->lineEdit->setText(QString::number(buf));
    }
    if (sign==4) {
        if (buf2==0){
            QMessageBox box2;
            box2.warning(this,"ошибка","деление на 0!");
        } else {
            buf/=buf2;
            ui->lineEdit->setText(QString::number(buf));
        }
    }
    buf2=0;
    f2=false;
    sign=0;

    ui->lineEdit_3->setText(QString::number(buf));
    int tbin=buf,bin=0,toct=buf,oct=0,ibin=1,ibin2;
    while (tbin>0) {
        ibin2=(tbin % 2)*pow(10,ibin);
        bin+=ibin;
        tbin/=2;
    }
        ui->lineEdit_4->setText(QString::number(bin));





        //connect(this,&MainWindow::signal, win2, &win2::slot());
}


void MainWindow::on_pushButton_17_clicked()
{
    dialog=new Dialog;
    dialog->show();

    //connect(this, &MainWindow::signal,dialog, &Dialog::slot);

    emit signal();

    /* second window
    Dialog win2;
    //win2= new Dialog;
    win2.exec();
    win2.show();*/
}

void MainWindow::slot2()
{
    ui->lineEdit->setText( ui->lineEdit->text()+"+");
}
// проверка заливки обновлений продукта
