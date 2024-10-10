#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "stopwatch.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(Timer.timer, &QTimer::timeout, this, &MainWindow::setTime);
    ui->label->setText("00:00:00");
    ui->pushButton_2->setEnabled(false);
}

void MainWindow::setTime() {
    Timer.update();
    ui->label->setText(QString("%1:%2:%3").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.sec));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_or_stop()
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

void MainWindow::showCircle()
{
    Timer.circle;
    ui->textBrowser->append(QString("Circle: %1, time %2 : %3 : %4").arg(Timer.circle).arg(Timer.minutes).arg(Timer.seconds).arg(Timer.sec));
}


void MainWindow::clear()
{
    Timer.reset();
    ui->label->setText("00:00:00");
    ui->textBrowser->clear();
}



