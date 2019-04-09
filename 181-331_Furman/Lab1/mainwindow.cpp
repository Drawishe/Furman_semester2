#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


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
    QString Snametext = ui->Snametext->text();
    QString Passtext = ui->Passtext->text();
    if(Snametext != 0 && Passtext == "1337boy")
    {
    QMessageBox::about(this,"Окно авторизации","Вы успешно авторизированы!");

    tmenu = new teacher_menu(this);
    tmenu -> show();
    hide();
    }
    else
    {
        QMessageBox::warning(this,"Ошибка","Проверьте введенные данные");
    }

}

void MainWindow::on_pushButton_2_clicked()// Кнопка Регистрации при нажатии
{
    hide();
    reg = new Registration(this);
    reg -> show();
}
