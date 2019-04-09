#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include "reg_teacher.h"

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:

    void on_newRegButton_clicked();


private:
    Ui::Registration *ui;
    reg_teacher *reg_t;
};

#endif // REGISTRATION_H
