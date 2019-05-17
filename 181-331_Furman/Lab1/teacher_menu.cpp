#include "teacher_menu.h"
#include "ui_teacher_menu.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <regex>
#include <vector>
#include <string>
#include <fstream>
#include <QtDebug>
#include <QString>

using namespace std;


using namespace std;

teacher_menu::teacher_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teacher_menu)
{
    ui->setupUi(this);
}

teacher_menu::~teacher_menu()
{
    delete ui;
}
void teacher_menu::on_next_clicked()
{
    ofstream file("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/teacher_base.txt");
    string line;
}

void teacher_menu::on_previous_clicked()
{
    ifstream file("D:/YandexDisk/Study/Qt/Furman_semester2/181-331_Furman/Lab1/stud_base.txt");
    char line;
    ofstream QTextEdit;
    qDebug() << line << endl;
}


void teacher_menu::on_change_pass_clicked()
{
    chngp = new change_pass(this);
    chngp -> show();
    hide();
}
