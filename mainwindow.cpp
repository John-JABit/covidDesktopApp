//User Manual
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QStackedWidget>

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

//Next page button(Home Page)
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex (1);
}

//Next page button(page 2)
void MainWindow::on_pushButton_2_clicked()
{
   ui->stackedWidget->setCurrentIndex (2);
}

//Next page button(page 3)
void MainWindow::on_pushButton_3_clicked()
{
   ui->stackedWidget->setCurrentIndex (3);
}

//Next page button(page 4)
void MainWindow::on_pushButton_4_clicked()
{
   ui->stackedWidget->setCurrentIndex (4);
}

//Next page button(page 5)
void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex (5);
}

//Next page button(page 6)
void MainWindow::on_pushButton_6_clicked()
{
   ui->stackedWidget->setCurrentIndex (6);
}

//Next page button(page 7)
void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex (7);
}

//Previous page button(page 2)
void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex (0);
}

//Previous page button(page 3)
void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex (1);
}

//Previous page button(page 4)
void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex (2);
}

//Previous page button(page 5)
void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex (3);
}

//Previous page button(page 6)
void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex (4);
}

//Previous page button(page 7)
void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex (5);
}

//Previous page button(page 8)
void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex (6);
}

//Exit button on last page
void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->close();
}

