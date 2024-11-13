/********************************************************************************
** Form generated from reading UI file 'shoppinglist.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGLIST_H
#define UI_SHOPPINGLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ShoppingList
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QLabel *quantityLabel;
    QPushButton *cancelButton;
    QLineEdit *ingredientLineEdit;
    QLabel *ingredientLabel;
    QSpinBox *spinBox;

    void setupUi(QDialog *ShoppingList)
    {
        if (ShoppingList->objectName().isEmpty())
            ShoppingList->setObjectName("ShoppingList");
        ShoppingList->resize(400, 132);
        ShoppingList->setMaximumSize(QSize(400, 132));
        gridLayout = new QGridLayout(ShoppingList);
        gridLayout->setObjectName("gridLayout");
        okButton = new QPushButton(ShoppingList);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 3, 0, 1, 2);

        quantityLabel = new QLabel(ShoppingList);
        quantityLabel->setObjectName("quantityLabel");
        quantityLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(quantityLabel, 2, 0, 1, 1);

        cancelButton = new QPushButton(ShoppingList);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 4, 0, 1, 2);

        ingredientLineEdit = new QLineEdit(ShoppingList);
        ingredientLineEdit->setObjectName("ingredientLineEdit");

        gridLayout->addWidget(ingredientLineEdit, 0, 1, 1, 1);

        ingredientLabel = new QLabel(ShoppingList);
        ingredientLabel->setObjectName("ingredientLabel");
        ingredientLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ingredientLabel, 0, 0, 1, 1);

        spinBox = new QSpinBox(ShoppingList);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximumSize(QSize(100, 16777215));
        spinBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        spinBox->setMinimum(1);
        spinBox->setMaximum(1000000);

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);


        retranslateUi(ShoppingList);
        QObject::connect(cancelButton, &QPushButton::clicked, ShoppingList, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(ShoppingList);
    } // setupUi

    void retranslateUi(QDialog *ShoppingList)
    {
        ShoppingList->setWindowTitle(QCoreApplication::translate("ShoppingList", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("ShoppingList", "Ok", nullptr));
        quantityLabel->setText(QCoreApplication::translate("ShoppingList", "Ilo\305\233\304\207", nullptr));
        cancelButton->setText(QCoreApplication::translate("ShoppingList", "Cancel", nullptr));
        ingredientLabel->setText(QCoreApplication::translate("ShoppingList", "Nazwa sk\305\202adnika", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShoppingList: public Ui_ShoppingList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGLIST_H
