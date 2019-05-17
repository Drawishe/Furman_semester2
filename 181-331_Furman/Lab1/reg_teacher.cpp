#include "reg_teacher.h"
#include "ui_reg_teacher.h"
#include "mainwindow.h"
#include "registration.h"
#include <QMessageBox>

#include <iostream>
#include <string>
#include <QString>
#include <fstream>
#include <QFile>
using namespace std;

reg_teacher::reg_teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_teacher)
{
    ui->setupUi(this);
}

reg_teacher::~reg_teacher()
{
    delete ui;
}


void reg_teacher::on_accept_button_clicked() //Кнопка регистрации новых преподавателей
{
    QString nameTeach = ui->nameTeach->text();
    QString specPas = ui->specPass->text();

    string tSname = nameTeach.toStdString ();//берем логин
    string tspecPass = specPas.toStdString ();

        if(specPas != "" && nameTeach !="")
        {
            ofstream tbase("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt",ios_base::app);
            tbase << tSname << ":" << tspecPass <<":prep;\n";
            tbase.close();

            QMessageBox::about(this,"Регистрация завершена","Вы успешно зарегистрировались! "
                                                        "Теперь вы можете использовать свои данные для входа в меню");
        hide();
        }


        else
            {
                QMessageBox::warning(this,"Ошибка","Неверный пароль, попробуйте ещё раз");

            }

}
