#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    counter = 0;
    ui->txtResult->setText(QString::number(counter));
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{

    counter++;


    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText(QString("Painiketta painettu %1 kertaa").arg(s));
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;

    QString s = QString::number(counter);


    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
}
