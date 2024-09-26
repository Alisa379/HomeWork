#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTimer>
#include "stopwatch.h"

Stopwatch Timer;
QTimer *timer = new QTimer();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::setTime);
    ui->label->setText("00:00:00");
}

void MainWindow::setTime() {
    Timer.update();
    ui->label->setText(QString("%1:%2:%3").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.milliseconds));
    if (Timer.circleClicked == 1) {
        ui->textBrowser->setText(QString("Circle: %1 , time: %2 : %3").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.milliseconds));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->pushButton->text() == "Start") {
        ui->pushButton->setText("Stop");
        timer->start(10);
    }
    else {
        ui->pushButton->setText("Start");
        timer->stop();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->pushButton->text() == "Stop") {
        Timer.circleClicked = 1;
        ui->textBrowser->setText(QString("Circle: %1 , time: %2 : %3 ").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.milliseconds));
    }

}


void MainWindow::on_pushButton_3_clicked()
{
    if (ui->pushButton->text() == "Stop") {
        ui->pushButton->setText("Start");
        timer->stop();
        Timer.reset();
    }
    ui->label->setText("00:00:00");
    ui->textBrowser->clear();
}



