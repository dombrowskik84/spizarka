/********************************************************************************
** Form generated from reading UI file 'resources.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCES_H
#define UI_RESOURCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Resources
{
public:
    QGridLayout *gridLayout;
    QLabel *resourcesNameLabel;
    QLineEdit *resourcesNameLineEdit;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Resources)
    {
        if (Resources->objectName().isEmpty())
            Resources->setObjectName("Resources");
        Resources->resize(429, 155);
        gridLayout = new QGridLayout(Resources);
        gridLayout->setObjectName("gridLayout");
        resourcesNameLabel = new QLabel(Resources);
        resourcesNameLabel->setObjectName("resourcesNameLabel");

        gridLayout->addWidget(resourcesNameLabel, 0, 0, 1, 1);

        resourcesNameLineEdit = new QLineEdit(Resources);
        resourcesNameLineEdit->setObjectName("resourcesNameLineEdit");

        gridLayout->addWidget(resourcesNameLineEdit, 0, 1, 1, 1);

        label = new QLabel(Resources);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBox = new QSpinBox(Resources);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);
        spinBox->setMaximum(9999);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        okButton = new QPushButton(Resources);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 2, 0, 1, 2);

        cancelButton = new QPushButton(Resources);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 3, 0, 1, 2);


        retranslateUi(Resources);

        QMetaObject::connectSlotsByName(Resources);
    } // setupUi

    void retranslateUi(QDialog *Resources)
    {
        Resources->setWindowTitle(QCoreApplication::translate("Resources", "Dialog", nullptr));
        resourcesNameLabel->setText(QCoreApplication::translate("Resources", "Nazwa zasobu", nullptr));
        label->setText(QCoreApplication::translate("Resources", "Ilo\305\233\304\207 do dodania", nullptr));
        okButton->setText(QCoreApplication::translate("Resources", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("Resources", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Resources: public Ui_Resources {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCES_H
