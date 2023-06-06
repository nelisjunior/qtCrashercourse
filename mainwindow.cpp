#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum,secondNum, result;

void MainWindow::on_btnAdd_clicked()
{
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecondNum->text().toInt();
    result = firstNum+secondNum;
    ui->txtResult->setText(QString::number(result));
}

