#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <QFile>
#include <QByteArray>
#include "spec_check.h"

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
    spec_check *sp_check;
};

#endif // REGISTRATION_H
