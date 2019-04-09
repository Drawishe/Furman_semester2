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
    QString login = ui->login->text();
    QString password = ui->password->text();
    QMessageBox::about(this,"Окно авторизации","Вы успешно авторизированы!");
}

void MainWindow::on_pushButton_2_clicked()// Кнопка Регистрации при нажатии
{
    hide();
    reg = new Registration(this);
    reg -> show();
}
