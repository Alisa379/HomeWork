#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include "stopwatch.h"

Stopwatch Timer;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(Timer.timer, &QTimer::timeout, this, &MainWindow::setTime);
    ui->label->setText("00:00");
    ui->pushButton_2->setEnabled(false);
}

void MainWindow::setTime() {
    Timer.update();
    ui->label->setText(QString("%1:%2").arg(Timer.minutes).arg(Timer.seconds));
    if (Timer.circleClicked == 1) {
        ui->textBrowser->setText(QString("Circle: %1").arg(Timer.seconds));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->pushButton->text() == "Start") {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton->setText("Stop");
        Timer.Start();
    }
    else {
        ui->pushButton->setText("Start");
        ui->pushButton_2->setEnabled(false);
        Timer.Stop();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->pushButton->text() == "Stop") {
        Timer.circleClicked = 1;
        ui->textBrowser->setText(QString("Circle: %1").arg(Timer.seconds));
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    Timer.reset();
    ui->label->setText("00:00");
    ui->textBrowser->clear();
}



