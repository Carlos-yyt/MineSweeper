/********************************************************************************
** Form generated from reading UI file 'Game.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameClass
{
public:
    QAction *actionNew_Game;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GameClass)
    {
        if (GameClass->objectName().isEmpty())
            GameClass->setObjectName(QStringLiteral("GameClass"));
        GameClass->resize(466, 432);
        actionNew_Game = new QAction(GameClass);
        actionNew_Game->setObjectName(QStringLiteral("actionNew_Game"));
        centralWidget = new QWidget(GameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GameClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        GameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GameClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GameClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionNew_Game);

        retranslateUi(GameClass);

        QMetaObject::connectSlotsByName(GameClass);
    } // setupUi

    void retranslateUi(QMainWindow *GameClass)
    {
        GameClass->setWindowTitle(QApplication::translate("GameClass", "Game", Q_NULLPTR));
        actionNew_Game->setText(QApplication::translate("GameClass", "New Game", Q_NULLPTR));
        menu->setTitle(QApplication::translate("GameClass", "\346\270\270\346\210\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameClass: public Ui_GameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
