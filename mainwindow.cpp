#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "libs/Menu.h"
#include "libs/pch.h"
#include "libs/fileReader.h"
#include "libs/comparator.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText("Podaj nazwy plikow do porownania");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OKButton_clicked()
{
    QString name1, name2;
    name1 = ui->lineEdit->text();
    name2 = ui->lineEdit_2->text();

    Comparator *cmp = new Comparator(name1.toStdString(), name2.toStdString());
    std::string LCS = cmp->compare();
    QString qLCS = QString::fromStdString(LCS);
    ui->label->setText("Najdluzszy wspolny podciag: " + qLCS + "\nDlugosc podciagu: " + QString::number(qLCS.length()) );
}
