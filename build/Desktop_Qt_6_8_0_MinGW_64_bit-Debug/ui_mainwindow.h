/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOption_3;
    QAction *actionIngrAdd;
    QAction *actionRecipesAdd;
    QAction *actionResDodaj;
    QAction *actionResUsun;
    QAction *actionPrintResources;
    QAction *actionPrintRecipes;
    QAction *actionPrintIngr;
    QAction *actionPrintShoppingList;
    QAction *actionEraseShoppingList;
    QAction *actionPrintAddedRecipesToShoppingList;
    QAction *actionAddIngredient;
    QAction *actionSaveToFile;
    QAction *actionReadFromFile;
    QAction *actionChangeDailyMaxKcal;
    QAction *actionIngrUsun;
    QAction *actionRecUsun;
    QAction *actionSzukaj;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *deleteIngrButton;
    QPushButton *suggetButton;
    QPushButton *logOutButton;
    QTableView *tableView;
    QLabel *welcomeLabel;
    QPushButton *addIngrToShoppingListButton;
    QMenuBar *menubar;
    QMenu *menuSk_adniki;
    QMenu *menuPrzepisy;
    QMenu *menuZasoby;
    QMenu *menuLista_zakupow;
    QMenu *menuKcal;
    QMenu *menuWyszukiwanie;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(750, 434);
        MainWindow->setMinimumSize(QSize(400, 200));
        MainWindow->setMaximumSize(QSize(750, 500));
        actionOption_3 = new QAction(MainWindow);
        actionOption_3->setObjectName("actionOption_3");
        actionIngrAdd = new QAction(MainWindow);
        actionIngrAdd->setObjectName("actionIngrAdd");
        actionRecipesAdd = new QAction(MainWindow);
        actionRecipesAdd->setObjectName("actionRecipesAdd");
        actionResDodaj = new QAction(MainWindow);
        actionResDodaj->setObjectName("actionResDodaj");
        actionResUsun = new QAction(MainWindow);
        actionResUsun->setObjectName("actionResUsun");
        actionPrintResources = new QAction(MainWindow);
        actionPrintResources->setObjectName("actionPrintResources");
        actionPrintRecipes = new QAction(MainWindow);
        actionPrintRecipes->setObjectName("actionPrintRecipes");
        actionPrintIngr = new QAction(MainWindow);
        actionPrintIngr->setObjectName("actionPrintIngr");
        actionPrintShoppingList = new QAction(MainWindow);
        actionPrintShoppingList->setObjectName("actionPrintShoppingList");
        actionEraseShoppingList = new QAction(MainWindow);
        actionEraseShoppingList->setObjectName("actionEraseShoppingList");
        actionPrintAddedRecipesToShoppingList = new QAction(MainWindow);
        actionPrintAddedRecipesToShoppingList->setObjectName("actionPrintAddedRecipesToShoppingList");
        actionAddIngredient = new QAction(MainWindow);
        actionAddIngredient->setObjectName("actionAddIngredient");
        actionSaveToFile = new QAction(MainWindow);
        actionSaveToFile->setObjectName("actionSaveToFile");
        actionReadFromFile = new QAction(MainWindow);
        actionReadFromFile->setObjectName("actionReadFromFile");
        actionChangeDailyMaxKcal = new QAction(MainWindow);
        actionChangeDailyMaxKcal->setObjectName("actionChangeDailyMaxKcal");
        actionIngrUsun = new QAction(MainWindow);
        actionIngrUsun->setObjectName("actionIngrUsun");
        actionRecUsun = new QAction(MainWindow);
        actionRecUsun->setObjectName("actionRecUsun");
        actionSzukaj = new QAction(MainWindow);
        actionSzukaj->setObjectName("actionSzukaj");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        deleteIngrButton = new QPushButton(centralwidget);
        deleteIngrButton->setObjectName("deleteIngrButton");
        deleteIngrButton->setEnabled(true);

        gridLayout->addWidget(deleteIngrButton, 4, 1, 1, 1);

        suggetButton = new QPushButton(centralwidget);
        suggetButton->setObjectName("suggetButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(suggetButton->sizePolicy().hasHeightForWidth());
        suggetButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(suggetButton, 8, 1, 1, 1);

        logOutButton = new QPushButton(centralwidget);
        logOutButton->setObjectName("logOutButton");
        sizePolicy.setHeightForWidth(logOutButton->sizePolicy().hasHeightForWidth());
        logOutButton->setSizePolicy(sizePolicy);
        logOutButton->setSizeIncrement(QSize(0, 0));
        logOutButton->setBaseSize(QSize(0, 0));
        logOutButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(logOutButton, 9, 1, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setEnabled(true);

        gridLayout->addWidget(tableView, 2, 1, 1, 1);

        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(welcomeLabel->sizePolicy().hasHeightForWidth());
        welcomeLabel->setSizePolicy(sizePolicy1);
        welcomeLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(welcomeLabel, 1, 1, 1, 1);

        addIngrToShoppingListButton = new QPushButton(centralwidget);
        addIngrToShoppingListButton->setObjectName("addIngrToShoppingListButton");

        gridLayout->addWidget(addIngrToShoppingListButton, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 750, 21));
        menuSk_adniki = new QMenu(menubar);
        menuSk_adniki->setObjectName("menuSk_adniki");
        menuPrzepisy = new QMenu(menubar);
        menuPrzepisy->setObjectName("menuPrzepisy");
        menuZasoby = new QMenu(menubar);
        menuZasoby->setObjectName("menuZasoby");
        menuLista_zakupow = new QMenu(menubar);
        menuLista_zakupow->setObjectName("menuLista_zakupow");
        menuKcal = new QMenu(menubar);
        menuKcal->setObjectName("menuKcal");
        menuWyszukiwanie = new QMenu(menubar);
        menuWyszukiwanie->setObjectName("menuWyszukiwanie");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuSk_adniki->menuAction());
        menubar->addAction(menuPrzepisy->menuAction());
        menubar->addAction(menuZasoby->menuAction());
        menubar->addAction(menuLista_zakupow->menuAction());
        menubar->addAction(menuKcal->menuAction());
        menubar->addAction(menuWyszukiwanie->menuAction());
        menuSk_adniki->addAction(actionIngrAdd);
        menuSk_adniki->addAction(actionPrintIngr);
        menuSk_adniki->addAction(actionIngrUsun);
        menuPrzepisy->addAction(actionRecipesAdd);
        menuPrzepisy->addAction(actionPrintRecipes);
        menuPrzepisy->addAction(actionRecUsun);
        menuZasoby->addAction(actionResDodaj);
        menuZasoby->addAction(actionResUsun);
        menuZasoby->addAction(actionPrintResources);
        menuLista_zakupow->addAction(actionEraseShoppingList);
        menuLista_zakupow->addAction(actionPrintShoppingList);
        menuLista_zakupow->addAction(actionPrintAddedRecipesToShoppingList);
        menuLista_zakupow->addAction(actionAddIngredient);
        menuLista_zakupow->addAction(actionSaveToFile);
        menuLista_zakupow->addAction(actionReadFromFile);
        menuKcal->addAction(actionChangeDailyMaxKcal);
        menuWyszukiwanie->addAction(actionSzukaj);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOption_3->setText(QCoreApplication::translate("MainWindow", "Opcja 3", nullptr));
        actionIngrAdd->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        actionRecipesAdd->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        actionResDodaj->setText(QCoreApplication::translate("MainWindow", "Dodaj", nullptr));
        actionResUsun->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        actionPrintResources->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl", nullptr));
        actionPrintRecipes->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl", nullptr));
        actionPrintIngr->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl", nullptr));
        actionPrintShoppingList->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl sk\305\202adniki do kupienia", nullptr));
        actionEraseShoppingList->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        actionPrintAddedRecipesToShoppingList->setText(QCoreApplication::translate("MainWindow", "Wy\305\233wietl dodane przepisy", nullptr));
        actionAddIngredient->setText(QCoreApplication::translate("MainWindow", "Dodaj sk\305\202adnik", nullptr));
        actionSaveToFile->setText(QCoreApplication::translate("MainWindow", "Zapisz do pliku", nullptr));
        actionReadFromFile->setText(QCoreApplication::translate("MainWindow", "Wczytaj z pliku", nullptr));
        actionChangeDailyMaxKcal->setText(QCoreApplication::translate("MainWindow", "Zmie\305\204 dzienn\304\205 kaloryczno\305\233\304\207", nullptr));
        actionIngrUsun->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        actionRecUsun->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
        actionSzukaj->setText(QCoreApplication::translate("MainWindow", "Szukaj...", nullptr));
        deleteIngrButton->setText(QCoreApplication::translate("MainWindow", "Usu\305\204 sk\305\202adniki sk\305\202adaj\304\205ce si\304\231 z tego przepisu", nullptr));
        suggetButton->setText(QCoreApplication::translate("MainWindow", "Sugeruj przepis", nullptr));
        logOutButton->setText(QCoreApplication::translate("MainWindow", "Wyloguj", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Witaj:", nullptr));
        addIngrToShoppingListButton->setText(QCoreApplication::translate("MainWindow", "Dodaj skladniki do listy zakupow", nullptr));
        menuSk_adniki->setTitle(QCoreApplication::translate("MainWindow", "Sk\305\202adniki", nullptr));
        menuPrzepisy->setTitle(QCoreApplication::translate("MainWindow", "Przepisy", nullptr));
        menuZasoby->setTitle(QCoreApplication::translate("MainWindow", "Zasoby", nullptr));
        menuLista_zakupow->setTitle(QCoreApplication::translate("MainWindow", "Lista zakupow", nullptr));
        menuKcal->setTitle(QCoreApplication::translate("MainWindow", "Kaloryczno\305\233\304\207", nullptr));
        menuWyszukiwanie->setTitle(QCoreApplication::translate("MainWindow", "Wyszukiwanie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
