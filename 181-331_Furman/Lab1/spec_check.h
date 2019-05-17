#ifndef SPEC_CHECK_H
#define SPEC_CHECK_H

#include <QDialog>
#include <reg_teacher.h>

namespace Ui {
class spec_check;
}

class spec_check : public QDialog
{
    Q_OBJECT

public:
    explicit spec_check(QWidget *parent = nullptr);
    ~spec_check();

private slots:
    void on_doneButton_clicked();


private:
    Ui::spec_check *ui;
    reg_teacher *reg_t;
};

#endif // SPEC_CHECK_H
