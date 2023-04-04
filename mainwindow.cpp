#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "issues.h"

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

//Report issues Page Button
void MainWindow::on_pushButton_clicked()
{
    Issues issues;
    issues.setModal(true);
    issues.exec();
}

