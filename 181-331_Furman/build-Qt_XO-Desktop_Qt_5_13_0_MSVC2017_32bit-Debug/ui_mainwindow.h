/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exitAction;
    QAction *newGameAction;
    QAction *saveGameAction;
    QAction *loadGameAction;
    QAction *action;
    QAction *setFieldSize;
    QWidget *centralWidget;
    QLabel *moveLabel;
    QPushButton *exitButton;
    QPushButton *fontPrototypeButton;
    QMenuBar *menuBar;
    QMenu *exitMenu;
    QMenu *gameMenu;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(536, 405);
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        newGameAction = new QAction(MainWindow);
        newGameAction->setObjectName(QString::fromUtf8("newGameAction"));
        saveGameAction = new QAction(MainWindow);
        saveGameAction->setObjectName(QString::fromUtf8("saveGameAction"));
        loadGameAction = new QAction(MainWindow);
        loadGameAction->setObjectName(QString::fromUtf8("loadGameAction"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        setFieldSize = new QAction(MainWindow);
        setFieldSize->setObjectName(QString::fromUtf8("setFieldSize"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        moveLabel = new QLabel(centralWidget);
        moveLabel->setObjectName(QString::fromUtf8("moveLabel"));
        moveLabel->setGeometry(QRect(330, 50, 161, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(moveLabel->sizePolicy().hasHeightForWidth());
        moveLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(15);
        moveLabel->setFont(font);
        moveLabel->setLayoutDirection(Qt::LeftToRight);
        moveLabel->setFrameShape(QFrame::NoFrame);
        moveLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(440, 290, 75, 31));
        QFont font1;
        font1.setPointSize(11);
        exitButton->setFont(font1);
        fontPrototypeButton = new QPushButton(centralWidget);
        fontPrototypeButton->setObjectName(QString::fromUtf8("fontPrototypeButton"));
        fontPrototypeButton->setEnabled(true);
        fontPrototypeButton->setGeometry(QRect(440, 230, 71, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(26);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(50);
        fontPrototypeButton->setFont(font2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 536, 20));
        exitMenu = new QMenu(menuBar);
        exitMenu->setObjectName(QString::fromUtf8("exitMenu"));
        exitMenu->setFocusPolicy(Qt::ClickFocus);
        gameMenu = new QMenu(menuBar);
        gameMenu->setObjectName(QString::fromUtf8("gameMenu"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(gameMenu->menuAction());
        menuBar->addAction(exitMenu->menuAction());
        menuBar->addAction(menu->menuAction());
        exitMenu->addAction(exitAction);
        gameMenu->addAction(newGameAction);
        gameMenu->addAction(saveGameAction);
        gameMenu->addAction(loadGameAction);
        menu->addAction(action);
        menu->addAction(setFieldSize);

        retranslateUi(MainWindow);
        QObject::connect(exitAction, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(exitButton, SIGNAL(clicked()), MainWindow, SLOT(slot2()));
        QObject::connect(exitButton, SIGNAL(clicked()), MainWindow, SLOT(slot1()));
        QObject::connect(saveGameAction, SIGNAL(triggered()), MainWindow, SLOT(saveGame()));
        QObject::connect(newGameAction, SIGNAL(triggered()), MainWindow, SLOT(newGame()));
        QObject::connect(loadGameAction, SIGNAL(triggered()), MainWindow, SLOT(loadGame()));
        QObject::connect(exitButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260 \320\232\321\200\320\265\321\201\321\202\320\270\320\272\320\270-\320\235\320\276\320\273\320\270\320\272\320\270", nullptr));
        exitAction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        newGameAction->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\260\321\217 \320\270\320\263\321\200\320\260", nullptr));
        saveGameAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        loadGameAction->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        setFieldSize->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\200\320\260\320\267\320\274\320\265\321\200\320\260 \320\277\320\276\320\273\321\217", nullptr));
        moveLabel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\270\320\263\321\200\321\213", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        fontPrototypeButton->setText(QCoreApplication::translate("MainWindow", "XO", nullptr));
        exitMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        gameMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\262\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
