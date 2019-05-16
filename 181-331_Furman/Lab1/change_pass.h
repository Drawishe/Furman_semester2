#ifndef CHANGE_PASS_H
#define CHANGE_PASS_H

#include <QDialog>

namespace Ui {
class change_pass;
}

class change_pass : public QDialog
{
    Q_OBJECT

public:
    explicit change_pass(QWidget *parent = nullptr);
    ~change_pass();

private:
    Ui::change_pass *ui;
};

#endif // CHANGE_PASS_H
