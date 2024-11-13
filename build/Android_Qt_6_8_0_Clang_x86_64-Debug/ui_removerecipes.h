/********************************************************************************
** Form generated from reading UI file 'removerecipes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVERECIPES_H
#define UI_REMOVERECIPES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveRecipes
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *recipeNamelineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RemoveRecipes)
    {
        if (RemoveRecipes->objectName().isEmpty())
            RemoveRecipes->setObjectName("RemoveRecipes");
        RemoveRecipes->resize(400, 142);
        gridLayout = new QGridLayout(RemoveRecipes);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RemoveRecipes);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        recipeNamelineEdit = new QLineEdit(RemoveRecipes);
        recipeNamelineEdit->setObjectName("recipeNamelineEdit");

        gridLayout->addWidget(recipeNamelineEdit, 0, 1, 1, 1);

        okButton = new QPushButton(RemoveRecipes);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 1, 0, 1, 2);

        cancelButton = new QPushButton(RemoveRecipes);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 2, 0, 1, 2);


        retranslateUi(RemoveRecipes);

        QMetaObject::connectSlotsByName(RemoveRecipes);
    } // setupUi

    void retranslateUi(QDialog *RemoveRecipes)
    {
        RemoveRecipes->setWindowTitle(QCoreApplication::translate("RemoveRecipes", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemoveRecipes", "Nazwa Przepisu:", nullptr));
        okButton->setText(QCoreApplication::translate("RemoveRecipes", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("RemoveRecipes", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveRecipes: public Ui_RemoveRecipes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVERECIPES_H
