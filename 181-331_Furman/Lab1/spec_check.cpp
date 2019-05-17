#include "spec_check.h"
#include "ui_spec_check.h"

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
