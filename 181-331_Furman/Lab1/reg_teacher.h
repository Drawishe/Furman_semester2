#ifndef REG_TEACHER_H
#define REG_TEACHER_H

#include <QDialog>



namespace Ui {
class reg_teacher;
}

class reg_teacher : public QDialog
{
    Q_OBJECT

public:
    explicit reg_teacher(QWidget *parent = nullptr);
    ~reg_teacher();

private slots:

    void on_accept_button_clicked();

private:
    Ui::reg_teacher *ui;


};

#endif // REG_TEACHER_H
