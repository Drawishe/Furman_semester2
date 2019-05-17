#include "spec_check.h"
#include "ui_spec_check.h"
#include <QMessageBox>
#include <fstream>
#include <QString>
#include <iostream>
#include <string>
#include <QFile>
using namespace std;


spec_check::spec_check(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::spec_check)
{
    ui->setupUi(this);
}

spec_check::~spec_check()
{
    delete ui;
}

void spec_check::on_doneButton_clicked()
{
     QString spCheck = ui->sCheck->text();
     string tsCheck = spCheck.toStdString ();

    if(spCheck == "1337boy")
    {
        reg_t = new reg_teacher(this);
        reg_t -> show();
        hide();
    }
    else
    {
         QMessageBox::warning(this,"Ошибка","Проверьте введённые данные!");
    }
}
