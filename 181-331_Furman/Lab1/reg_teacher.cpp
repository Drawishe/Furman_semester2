#include "reg_teacher.h"
#include "ui_reg_teacher.h"
#include "mainwindow.h"
#include "registration.h"
#include <QMessageBox>

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
    QString specPass = ui->specPass->text();
    if(specPass == "1337boy")
    {
    QMessageBox::about(this,"Регистрация завершена","Вы успешно зарегистрировались! "
                                                    "Теперь вы можете использовать свои данные для входа в меню");
    hide();
    }
    else
    {
        QMessageBox::warning(this,"Ошибка","Неверный пароль, попробуйте ещё раз");

    }

}
