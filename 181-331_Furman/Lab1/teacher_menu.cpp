#include "teacher_menu.h"
#include "ui_teacher_menu.h"
#include <fstream>

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
