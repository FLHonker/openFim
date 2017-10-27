/********************************************************************************
** Form generated from reading UI file 'mainwin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIN_H
#define UI_MAINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWin
{
public:
    QAction *actionNew_N;
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_As_M;
    QAction *actionExit_Q;
    QAction *actionClose_L;
    QAction *actionHelp_P;
    QAction *actionAbout_B;
    QAction *actionRevoke_Z;
    QAction *actionCut_X;
    QAction *actionCopy_C;
    QAction *actionPaste_V;
    QAction *actionSearch;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_txtedit;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile_F;
    QMenu *menuEdit_E;
    QMenu *menuHelp_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWin)
    {
        if (MainWin->objectName().isEmpty())
            MainWin->setObjectName(QStringLiteral("MainWin"));
        MainWin->setWindowModality(Qt::ApplicationModal);
        MainWin->resize(548, 441);
        MainWin->setMaximumSize(QSize(1366, 768));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icon/hello_txt_64px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWin->setWindowIcon(icon);
        actionNew_N = new QAction(MainWin);
        actionNew_N->setObjectName(QStringLiteral("actionNew_N"));
        actionNew_N->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_N->setIcon(icon1);
        actionNew_N->setVisible(true);
        actionOpen_O = new QAction(MainWin);
        actionOpen_O->setObjectName(QStringLiteral("actionOpen_O"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_O->setIcon(icon2);
        actionSave_S = new QAction(MainWin);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon3);
        actionSave_As_M = new QAction(MainWin);
        actionSave_As_M->setObjectName(QStringLiteral("actionSave_As_M"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/icon/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As_M->setIcon(icon4);
        actionExit_Q = new QAction(MainWin);
        actionExit_Q->setObjectName(QStringLiteral("actionExit_Q"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit_Q->setIcon(icon5);
        actionClose_L = new QAction(MainWin);
        actionClose_L->setObjectName(QStringLiteral("actionClose_L"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/icon/close2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_L->setIcon(icon6);
        actionHelp_P = new QAction(MainWin);
        actionHelp_P->setObjectName(QStringLiteral("actionHelp_P"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/icon/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp_P->setIcon(icon7);
        actionAbout_B = new QAction(MainWin);
        actionAbout_B->setObjectName(QStringLiteral("actionAbout_B"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/icon/version.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_B->setIcon(icon8);
        actionRevoke_Z = new QAction(MainWin);
        actionRevoke_Z->setObjectName(QStringLiteral("actionRevoke_Z"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/icon/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRevoke_Z->setIcon(icon9);
        actionCut_X = new QAction(MainWin);
        actionCut_X->setObjectName(QStringLiteral("actionCut_X"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/icon/shear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut_X->setIcon(icon10);
        actionCopy_C = new QAction(MainWin);
        actionCopy_C->setObjectName(QStringLiteral("actionCopy_C"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icon/icon/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy_C->setIcon(icon11);
        actionPaste_V = new QAction(MainWin);
        actionPaste_V->setObjectName(QStringLiteral("actionPaste_V"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icon/icon/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste_V->setIcon(icon12);
        actionSearch = new QAction(MainWin);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icon/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon13);
        centralWidget = new QWidget(MainWin);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, -1, 531, 351));
        gridLayout_txtedit = new QGridLayout(gridLayoutWidget);
        gridLayout_txtedit->setSpacing(6);
        gridLayout_txtedit->setContentsMargins(11, 11, 11, 11);
        gridLayout_txtedit->setObjectName(QStringLiteral("gridLayout_txtedit"));
        gridLayout_txtedit->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(gridLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_txtedit->addWidget(textEdit, 0, 0, 1, 1);

        MainWin->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWin);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 548, 31));
        menuFile_F = new QMenu(menuBar);
        menuFile_F->setObjectName(QStringLiteral("menuFile_F"));
        menuEdit_E = new QMenu(menuBar);
        menuEdit_E->setObjectName(QStringLiteral("menuEdit_E"));
        menuHelp_H = new QMenu(menuBar);
        menuHelp_H->setObjectName(QStringLiteral("menuHelp_H"));
        MainWin->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWin);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWin->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWin);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWin->setStatusBar(statusBar);

        menuBar->addAction(menuFile_F->menuAction());
        menuBar->addAction(menuEdit_E->menuAction());
        menuBar->addAction(menuHelp_H->menuAction());
        menuFile_F->addAction(actionNew_N);
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionClose_L);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_As_M);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionExit_Q);
        menuEdit_E->addAction(actionRevoke_Z);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionCut_X);
        menuEdit_E->addAction(actionCopy_C);
        menuEdit_E->addAction(actionPaste_V);
        menuEdit_E->addSeparator();
        menuEdit_E->addAction(actionSearch);
        menuHelp_H->addAction(actionHelp_P);
        menuHelp_H->addAction(actionAbout_B);
        mainToolBar->addAction(actionNew_N);
        mainToolBar->addAction(actionOpen_O);
        mainToolBar->addAction(actionSave_S);
        mainToolBar->addAction(actionSave_As_M);
        mainToolBar->addAction(actionCut_X);
        mainToolBar->addAction(actionCopy_C);
        mainToolBar->addAction(actionPaste_V);
        mainToolBar->addAction(actionRevoke_Z);
        mainToolBar->addAction(actionSearch);
        mainToolBar->addAction(actionHelp_P);
        mainToolBar->addAction(actionAbout_B);
        mainToolBar->addAction(actionClose_L);
        mainToolBar->addAction(actionExit_Q);

        retranslateUi(MainWin);

        QMetaObject::connectSlotsByName(MainWin);
    } // setupUi

    void retranslateUi(QMainWindow *MainWin)
    {
        MainWin->setWindowTitle(QApplication::translate("MainWin", "opFim  V1.0", 0));
        actionNew_N->setText(QApplication::translate("MainWin", "New(&N)", 0));
        actionOpen_O->setText(QApplication::translate("MainWin", "Open(&O)", 0));
        actionSave_S->setText(QApplication::translate("MainWin", "Save(&S)", 0));
        actionSave_As_M->setText(QApplication::translate("MainWin", "Save As...(&M)", 0));
        actionExit_Q->setText(QApplication::translate("MainWin", "Exit(&Q)", 0));
        actionClose_L->setText(QApplication::translate("MainWin", "Close(&L)", 0));
        actionHelp_P->setText(QApplication::translate("MainWin", "Help(&P)", 0));
        actionAbout_B->setText(QApplication::translate("MainWin", "About(&B)", 0));
        actionRevoke_Z->setText(QApplication::translate("MainWin", "Revoke(&Z)", 0));
        actionCut_X->setText(QApplication::translate("MainWin", "Cut(&X)", 0));
        actionCopy_C->setText(QApplication::translate("MainWin", "Copy(&C)", 0));
        actionPaste_V->setText(QApplication::translate("MainWin", "Paste(&V)", 0));
        actionSearch->setText(QApplication::translate("MainWin", "Search(&F)", 0));
        menuFile_F->setTitle(QApplication::translate("MainWin", "File(&F)", 0));
        menuEdit_E->setTitle(QApplication::translate("MainWin", "Edit(&E)", 0));
        menuHelp_H->setTitle(QApplication::translate("MainWin", "Help(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWin: public Ui_MainWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIN_H
