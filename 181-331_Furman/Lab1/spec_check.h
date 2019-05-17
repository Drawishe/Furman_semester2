#ifndef SPEC_CHECK_H
#define SPEC_CHECK_H

#include <QDialog>

namespace Ui {
class spec_check;
}

class spec_check : public QDialog
{
    Q_OBJECT

public:
    explicit spec_check(QWidget *parent = nullptr);
    ~spec_check();

private:
    Ui::spec_check *ui;
};

#endif // SPEC_CHECK_H
