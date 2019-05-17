#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>
#include <fstream>
#include <QString>
#include <iostream>
#include <string>
#include <QFile>

using namespace std;

Registration::Registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);
}

Registration::~Registration()
{
    delete ui;
}



void Registration::on_newRegButton_clicked()// Кнопка регистрации нового аккаунта
{
    QString newName = ui->newName->text();
    QString newSName = ui->newSName->text();
    QString newEmail = ui->newEmail->text();

    string newsName = newName.toStdString ();
    string newsSName = newSName.toStdString ();
    string newsEmail = newEmail.toStdString();


    /* Проверка заполнения всех полей на пропущенные поля*/

    if(newEmail !="" && newName !="" && newSName !="")
    {
        ofstream sbase("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/stud_base.txt",ios_base::app);
        sbase  << newsName << ":" << newsSName << ":" << newsEmail <<":stud;\n";
        sbase.close();
        QMessageBox::about(this,"Регистрация завершена","Вы успешно зарегистрировались!");
        hide();
    }

    else
        {
            QMessageBox::warning(this,"Ошибка","Проверьте введённые данные!");
        }



}


void Registration::on_teacher_clicked()
{
    sp_check = new spec_check(this);
    sp_check -> show();
    hide();
}
