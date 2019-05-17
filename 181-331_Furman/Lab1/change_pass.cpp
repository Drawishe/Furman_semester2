#include "change_pass.h"
#include "ui_change_pass.h"
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "mainwindow.h"
#include "mainwindow.cpp"

change_pass::change_pass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change_pass)
{
    ui->setupUi(this);
}

change_pass::~change_pass()
{
    delete ui;
}

void change_pass::on_chngpb_clicked()
{
    ifstream file("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt");
    string line;
    //ofstream file_e("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt");

    // QString newtPass = ui->newtPass->text();
     //string ntp = newtPass.toStdString ();

    while(getline(file, line))
    {
        if (line == teacher + ":" + "1337boy" + ":prep;")
        {
            // file_e << teacher << ":"<<  ntp << ":prep";
            QMessageBox::information(this, "Информация", "Пароль успешно сменён!", "Хорошо" );
            hide();

        }
    }
}
