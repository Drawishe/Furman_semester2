#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include "reg_teacher.h"
#include <QFile>
#include <QByteArray>

namespace Ui {
class Registration;
}

class Registration : public QDialog
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();
    void readFile();

private slots:

    void on_newRegButton_clicked();


    void on_teacher_clicked();

private:
    Ui::Registration *ui;
    reg_teacher *reg_t;
};

#endif // REGISTRATION_H
