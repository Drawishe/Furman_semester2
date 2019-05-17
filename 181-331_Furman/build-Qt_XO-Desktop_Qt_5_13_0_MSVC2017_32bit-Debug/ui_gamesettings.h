/********************************************************************************
** Form generated from reading UI file 'gamesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESETTINGS_H
#define UI_GAMESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_GameSettings
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *GameSettings)
    {
        if (GameSettings->objectName().isEmpty())
            GameSettings->setObjectName(QString::fromUtf8("GameSettings"));
        GameSettings->resize(415, 155);
        buttonBox = new QDialogButtonBox(GameSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(40, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(GameSettings);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(280, 30, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(16);
        spinBox->setFont(font);
        spinBox->setValue(3);
        label = new QLabel(GameSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 301, 41));

        retranslateUi(GameSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), GameSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GameSettings, SLOT(reject()));

        QMetaObject::connectSlotsByName(GameSettings);
    } // setupUi

    void retranslateUi(QDialog *GameSettings)
    {
        GameSettings->setWindowTitle(QCoreApplication::translate("GameSettings", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \320\277\320\276\320\273\321\217", nullptr));
        label->setText(QCoreApplication::translate("GameSettings", "<html><head/><body><p><span style=\" font-size:20pt;\">\320\240\320\260\320\267\320\274\320\265\321\200 \320\270\320\263\321\200\320\276\320\262\320\276\320\263\320\276 </span><span style=\" font-size:14pt; font-weight:600; text-decoration: underline;\">\320\277\320\276\320\273\321\217</span><span style=\" font-size:14pt;\">: </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameSettings: public Ui_GameSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESETTINGS_H
