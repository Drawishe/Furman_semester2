#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>
#include <fstream>

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
    QString newStatus = ui->newStatus->text();
    if(newEmail !=0 && newName !=0 && newSName !=0)
    {
        if(newStatus == "преподаватель" || newStatus == "слушатель")
        {
            if(newStatus == "преподаватель")
            {
                reg_t = new reg_teacher(this);
                reg_t -> show();
            }
            if(newStatus == "слушатель")
                {
                    QMessageBox::about(this,"Регистрация завершена","Вы успешно зарегистрировались!");
                }
        hide();
        }

        else {
            QMessageBox::warning(this,"Ошибка","Проверьте введённые данные!");
        }
    }
    else
    {
        QMessageBox::warning(this,"Ошибка","Проверьте введённые данные!");


    }


}


