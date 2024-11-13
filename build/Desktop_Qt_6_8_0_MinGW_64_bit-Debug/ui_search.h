/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QLineEdit *searchLineEdit;
    QLabel *label;
    QTableView *searchingTableView;
    QGroupBox *filtrGroupBox;
    QRadioButton *allRadioButton_3;
    QRadioButton *ingrRadioButton_4;
    QRadioButton *recRadioButton_5;
    QGroupBox *sortGroupBox_2;
    QRadioButton *alphRadioButton;
    QRadioButton *alphRevRadioButton_2;
    QRadioButton *defaultRadioButton;
    QPushButton *searchButton;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName("Search");
        Search->resize(576, 538);
        searchLineEdit = new QLineEdit(Search);
        searchLineEdit->setObjectName("searchLineEdit");
        searchLineEdit->setGeometry(QRect(130, 20, 431, 24));
        label = new QLabel(Search);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 111, 16));
        searchingTableView = new QTableView(Search);
        searchingTableView->setObjectName("searchingTableView");
        searchingTableView->setGeometry(QRect(10, 210, 551, 281));
        filtrGroupBox = new QGroupBox(Search);
        filtrGroupBox->setObjectName("filtrGroupBox");
        filtrGroupBox->setGeometry(QRect(10, 80, 551, 61));
        allRadioButton_3 = new QRadioButton(filtrGroupBox);
        allRadioButton_3->setObjectName("allRadioButton_3");
        allRadioButton_3->setGeometry(QRect(40, 30, 91, 22));
        ingrRadioButton_4 = new QRadioButton(filtrGroupBox);
        ingrRadioButton_4->setObjectName("ingrRadioButton_4");
        ingrRadioButton_4->setGeometry(QRect(210, 30, 91, 22));
        recRadioButton_5 = new QRadioButton(filtrGroupBox);
        recRadioButton_5->setObjectName("recRadioButton_5");
        recRadioButton_5->setGeometry(QRect(390, 30, 91, 22));
        sortGroupBox_2 = new QGroupBox(Search);
        sortGroupBox_2->setObjectName("sortGroupBox_2");
        sortGroupBox_2->setGeometry(QRect(10, 140, 551, 61));
        alphRadioButton = new QRadioButton(sortGroupBox_2);
        alphRadioButton->setObjectName("alphRadioButton");
        alphRadioButton->setGeometry(QRect(190, 30, 141, 22));
        alphRevRadioButton_2 = new QRadioButton(sortGroupBox_2);
        alphRevRadioButton_2->setObjectName("alphRevRadioButton_2");
        alphRevRadioButton_2->setGeometry(QRect(370, 30, 141, 22));
        defaultRadioButton = new QRadioButton(sortGroupBox_2);
        defaultRadioButton->setObjectName("defaultRadioButton");
        defaultRadioButton->setGeometry(QRect(40, 30, 91, 22));
        searchButton = new QPushButton(Search);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(470, 60, 91, 24));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Search", "Wyszukiwana Fraza:", nullptr));
        filtrGroupBox->setTitle(QCoreApplication::translate("Search", "Filtruj wg.:", nullptr));
        allRadioButton_3->setText(QCoreApplication::translate("Search", "Wszystkie", nullptr));
        ingrRadioButton_4->setText(QCoreApplication::translate("Search", "Sk\305\202adniki", nullptr));
        recRadioButton_5->setText(QCoreApplication::translate("Search", "Przepisy", nullptr));
        sortGroupBox_2->setTitle(QCoreApplication::translate("Search", "Sortuj wg.:", nullptr));
        alphRadioButton->setText(QCoreApplication::translate("Search", "Alfabetycznie rosn\304\205co", nullptr));
        alphRevRadioButton_2->setText(QCoreApplication::translate("Search", "Alfabetycznie malej\304\205co", nullptr));
        defaultRadioButton->setText(QCoreApplication::translate("Search", "Domy\305\233lne", nullptr));
        searchButton->setText(QCoreApplication::translate("Search", "Szukaj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
