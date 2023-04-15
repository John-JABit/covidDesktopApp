#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>

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






//Covid Vaccine information button
void MainWindow::on_commandLinkButton_clicked()
{
    QString link="https://covid19.govt.nz/covid-19-vaccines/get-your-covid-19-vaccination/";
    QDesktopServices::openUrl(QUrl(link));
}

//Boosters information button
void MainWindow::on_commandLinkButton_2_clicked()
{
    QString link="https://covid19.govt.nz/covid-19-vaccines/covid-19-vaccine-boosters/";
    QDesktopServices::openUrl(QUrl(link));
}

