#include "change_pass.h"
#include "ui_change_pass.h"

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
