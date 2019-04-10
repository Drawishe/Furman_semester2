#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;



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
    ifstream file ("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt");
    string line;

    QString Snametext = ui->Snametext->text();
    QString Passtext = ui->Passtext->text();

    string spname = Snametext.toStdString ();//берем логин
    string pass = Passtext.toStdString ();

    while(getline(file, line))
    {
        if (line == spname + ":" + pass + ":prep"){
            QMessageBox::information(this, "Информация", "Преподаватель, вы успешно вошли!", "Хорошо" );
            close();


        }
    }
        tmenu = new teacher_menu(this);
        tmenu -> show();
        QMessageBox::warning(this,"Ошибка","Проверьте введенные данные");

      }
    /*if(Snametext != 0 && Passtext == "1337boy")
    {
    QMessageBox::about(this,"Окно авторизации","Вы успешно авторизированы!");

    tmenu = new teacher_menu(this);
    tmenu -> show();
    hide();
    } */




void MainWindow::on_pushButton_2_clicked()// Кнопка Регистрации при нажатии
{
    hide();
    reg = new Registration(this);
    reg -> show();

}
