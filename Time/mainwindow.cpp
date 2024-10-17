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
    ui->showCircle->setEnabled(false);
}

void MainWindow::setTime() {
    Timer.update();
    ui->label->setText(QString("%1:%2:%3").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.sec));
}


MainWindow::~MainWindow()
{
    delete ui;
}



