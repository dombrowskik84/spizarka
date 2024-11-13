/********************************************************************************
** Form generated from reading UI file 'recipes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPES_H
#define UI_RECIPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Recipes
{
public:
    QGridLayout *gridLayout;
    QLabel *numberOfIngredientsLabel;
    QPushButton *okButton;
    QGridLayout *gridLayout_2;
    QPushButton *cancelButton;
    QLabel *recipeNameLabel;
    QSpinBox *spinBox;
    QLineEdit *recipeNameLineEdit;
    QSpinBox *kcalSpinBox;
    QLabel *kcalLabel;

    void setupUi(QDialog *Recipes)
    {
        if (Recipes->objectName().isEmpty())
            Recipes->setObjectName("Recipes");
        Recipes->resize(451, 192);
        gridLayout = new QGridLayout(Recipes);
        gridLayout->setObjectName("gridLayout");
        numberOfIngredientsLabel = new QLabel(Recipes);
        numberOfIngredientsLabel->setObjectName("numberOfIngredientsLabel");

        gridLayout->addWidget(numberOfIngredientsLabel, 2, 0, 1, 1);

        okButton = new QPushButton(Recipes);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 6, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);

        gridLayout->addLayout(gridLayout_2, 5, 0, 1, 2);

        cancelButton = new QPushButton(Recipes);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 7, 0, 1, 2);

        recipeNameLabel = new QLabel(Recipes);
        recipeNameLabel->setObjectName("recipeNameLabel");
        recipeNameLabel->setEnabled(true);

        gridLayout->addWidget(recipeNameLabel, 0, 0, 1, 1);

        spinBox = new QSpinBox(Recipes);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(35);

        gridLayout->addWidget(spinBox, 2, 1, 1, 1);

        recipeNameLineEdit = new QLineEdit(Recipes);
        recipeNameLineEdit->setObjectName("recipeNameLineEdit");
        recipeNameLineEdit->setEnabled(true);

        gridLayout->addWidget(recipeNameLineEdit, 0, 1, 1, 1);

        kcalSpinBox = new QSpinBox(Recipes);
        kcalSpinBox->setObjectName("kcalSpinBox");
        kcalSpinBox->setMaximum(99999);

        gridLayout->addWidget(kcalSpinBox, 1, 1, 1, 1);

        kcalLabel = new QLabel(Recipes);
        kcalLabel->setObjectName("kcalLabel");

        gridLayout->addWidget(kcalLabel, 1, 0, 1, 1);


        retranslateUi(Recipes);
        QObject::connect(cancelButton, &QPushButton::clicked, Recipes, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Recipes);
    } // setupUi

    void retranslateUi(QDialog *Recipes)
    {
        Recipes->setWindowTitle(QCoreApplication::translate("Recipes", "Dialog", nullptr));
        numberOfIngredientsLabel->setText(QCoreApplication::translate("Recipes", "Ilo\305\233\304\207 sk\305\202adnik\303\263w", nullptr));
        okButton->setText(QCoreApplication::translate("Recipes", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("Recipes", "Cancel", nullptr));
        recipeNameLabel->setText(QCoreApplication::translate("Recipes", "Nazwa przepisu", nullptr));
        kcalLabel->setText(QCoreApplication::translate("Recipes", "Kaloryczno\305\233\304\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipes: public Ui_Recipes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPES_H
