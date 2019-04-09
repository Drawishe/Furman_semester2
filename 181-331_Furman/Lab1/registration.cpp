#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>

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
    QMessageBox::about(this,"Регистрация завершена","Вы успешно зарегистрировались!");
    hide();
}
