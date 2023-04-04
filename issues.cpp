#include "issues.h"
#include "ui_issues.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Issues::Issues(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Issues)
{
    ui->setupUi(this);
}

Issues::~Issues()
{
    delete ui;
}
//Send button on Issues Page
void Issues::on_pushButton_clicked()
{
    QFile file("C:/Qt/covidDesktopAppuserIssues.txt");

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"title","File not open");
    }
    QTextStream out(&file);
    QString text = ui->plainTextEdit->toPlainText ();
    out << text;
    file.flush();
    file.close();
}

