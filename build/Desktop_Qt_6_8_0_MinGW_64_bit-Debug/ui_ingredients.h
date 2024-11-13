/********************************************************************************
** Form generated from reading UI file 'ingredients.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGREDIENTS_H
#define UI_INGREDIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ingredients
{
public:
    QGridLayout *gridLayout;
    QPushButton *cancelButton;
    QLabel *notificationLabel;
    QPushButton *okButton;
    QLineEdit *ingrNameLineEdit;
    QLabel *ingrNameLabel;

    void setupUi(QDialog *Ingredients)
    {
        if (Ingredients->objectName().isEmpty())
            Ingredients->setObjectName("Ingredients");
        Ingredients->resize(400, 124);
        Ingredients->setMaximumSize(QSize(400, 124));
        gridLayout = new QGridLayout(Ingredients);
        gridLayout->setObjectName("gridLayout");
        cancelButton = new QPushButton(Ingredients);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 5, 0, 1, 2);

        notificationLabel = new QLabel(Ingredients);
        notificationLabel->setObjectName("notificationLabel");
        notificationLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(notificationLabel, 3, 0, 1, 2);

        okButton = new QPushButton(Ingredients);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 4, 0, 1, 2);

        ingrNameLineEdit = new QLineEdit(Ingredients);
        ingrNameLineEdit->setObjectName("ingrNameLineEdit");

        gridLayout->addWidget(ingrNameLineEdit, 0, 1, 1, 1);

        ingrNameLabel = new QLabel(Ingredients);
        ingrNameLabel->setObjectName("ingrNameLabel");

        gridLayout->addWidget(ingrNameLabel, 0, 0, 1, 1);


        retranslateUi(Ingredients);
        QObject::connect(cancelButton, &QPushButton::clicked, Ingredients, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Ingredients);
    } // setupUi

    void retranslateUi(QDialog *Ingredients)
    {
        Ingredients->setWindowTitle(QCoreApplication::translate("Ingredients", "Dialog", nullptr));
        cancelButton->setText(QCoreApplication::translate("Ingredients", "Cancel", nullptr));
        notificationLabel->setText(QString());
        okButton->setText(QCoreApplication::translate("Ingredients", "Ok", nullptr));
        ingrNameLabel->setText(QCoreApplication::translate("Ingredients", "Nazwa sk\305\202adnika", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ingredients: public Ui_Ingredients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGREDIENTS_H
