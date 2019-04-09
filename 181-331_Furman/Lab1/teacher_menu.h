#ifndef TEACHER_MENU_H
#define TEACHER_MENU_H

#include <QDialog>

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



private:
    Ui::teacher_menu *ui;
};

#endif // TEACHER_MENU_H
