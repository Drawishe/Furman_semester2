#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string teacher;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() //Кнопка Логина при нажатии
{
    ifstream file("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt");
    string line;

    QString Snametext = ui->Snametext->text();
    QString Passtext = ui->Passtext->text();

    string spname = Snametext.toStdString ();
    string pass = Passtext.toStdString ();

    while(getline(file, line))
    {
        if (line == spname + ":" + pass + ":prep;")
        {
            QMessageBox::information(this, "Информация", "Преподаватель, вы успешно вошли!", "Хорошо" );
            hide();
            tmenu = new teacher_menu(this);
            tmenu -> show();
            teacher = spname;

        }
    }


}

void MainWindow::on_pushButton_2_clicked()// Кнопка Регистрации при нажатии
{

    reg = new Registration(this);
    reg -> show();


}
