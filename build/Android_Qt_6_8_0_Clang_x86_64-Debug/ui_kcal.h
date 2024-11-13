/********************************************************************************
** Form generated from reading UI file 'kcal.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCAL_H
#define UI_KCAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Kcal
{
public:
    QGridLayout *gridLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QLabel *DailyKcal;
    QSpinBox *spinBox;

    void setupUi(QDialog *Kcal)
    {
        if (Kcal->objectName().isEmpty())
            Kcal->setObjectName("Kcal");
        Kcal->resize(400, 120);
        Kcal->setMinimumSize(QSize(400, 120));
        Kcal->setMaximumSize(QSize(400, 120));
        gridLayout = new QGridLayout(Kcal);
        gridLayout->setObjectName("gridLayout");
        okButton = new QPushButton(Kcal);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 3, 0, 1, 2);

        cancelButton = new QPushButton(Kcal);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 4, 0, 1, 2);

        DailyKcal = new QLabel(Kcal);
        DailyKcal->setObjectName("DailyKcal");

        gridLayout->addWidget(DailyKcal, 1, 0, 1, 1);

        spinBox = new QSpinBox(Kcal);
        spinBox->setObjectName("spinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMinimum(0);
        spinBox->setMaximum(99999);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);


        retranslateUi(Kcal);
        QObject::connect(cancelButton, &QPushButton::clicked, Kcal, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(Kcal);
    } // setupUi

    void retranslateUi(QDialog *Kcal)
    {
        Kcal->setWindowTitle(QCoreApplication::translate("Kcal", "Dialog", nullptr));
        okButton->setText(QCoreApplication::translate("Kcal", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("Kcal", "Cancel", nullptr));
        DailyKcal->setText(QCoreApplication::translate("Kcal", "Dzienne kalorie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kcal: public Ui_Kcal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCAL_H
