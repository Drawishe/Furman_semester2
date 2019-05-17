#ifndef TEACHER_MENU_H
#define TEACHER_MENU_H

#include <QDialog>
#include "change_pass.h"

namespace Ui {
class teacher_menu;
}

class teacher_menu : public QDialog
{
    Q_OBJECT

public:
    explicit teacher_menu(QWidget *parent = nullptr);
    ~teacher_menu();

private slots:



    void on_next_clicked();

    void on_previous_clicked();

    void on_change_pass_clicked();

private:
    Ui::teacher_menu *ui;
    change_pass *chngp;
};

#endif // TEACHER_MENU_H
