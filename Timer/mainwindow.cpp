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
    ui->ShowCircle->setEnabled(false);
}

void MainWindow::setTime() {
    Timer.update();
    ui->label->setText(QString("%1:%2:%3").arg(Timer.minutes).arg(Timer.seconds).arg(Timer.sec));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_StartStop_clicked()
{
    if (ui->StartStop->text() == "Start") {
        ui->StartStop->setText("Stop");
        ui->ShowCircle->setEnabled(true);
        Timer.Start();
    }
    else {
        Timer.Stop();
        ui->StartStop->setText("Start");
        ui->ShowCircle->setEnabled(false);
    }
}


void MainWindow::on_ShowCircle_clicked()
{
    Timer.circle++;
    ui->textBrowser->append(QString("Circle: %1 Time: %2:%3:%4").arg(Timer.circle).arg(Timer.minutes).arg(Timer.seconds).arg(Timer.sec));

}


void MainWindow::on_Clear_clicked()
{
    Timer.reset();
    ui->label->setText("00:00:00");
    ui->textBrowser->clear();
}

