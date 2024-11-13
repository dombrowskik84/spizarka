/********************************************************************************
** Form generated from reading UI file 'removeingredients.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEINGREDIENTS_H
#define UI_REMOVEINGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RemoveIngredients
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *ingrNameLineEdit;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RemoveIngredients)
    {
        if (RemoveIngredients->objectName().isEmpty())
            RemoveIngredients->setObjectName("RemoveIngredients");
        RemoveIngredients->resize(400, 150);
        gridLayout = new QGridLayout(RemoveIngredients);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(RemoveIngredients);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        ingrNameLineEdit = new QLineEdit(RemoveIngredients);
        ingrNameLineEdit->setObjectName("ingrNameLineEdit");

        gridLayout->addWidget(ingrNameLineEdit, 0, 1, 1, 1);

        okButton = new QPushButton(RemoveIngredients);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 1, 0, 1, 2);

        cancelButton = new QPushButton(RemoveIngredients);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 2, 0, 1, 2);


        retranslateUi(RemoveIngredients);

        QMetaObject::connectSlotsByName(RemoveIngredients);
    } // setupUi

    void retranslateUi(QDialog *RemoveIngredients)
    {
        RemoveIngredients->setWindowTitle(QCoreApplication::translate("RemoveIngredients", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemoveIngredients", "Nazwa Sk\305\202adnika:", nullptr));
        okButton->setText(QCoreApplication::translate("RemoveIngredients", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("RemoveIngredients", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveIngredients: public Ui_RemoveIngredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEINGREDIENTS_H
