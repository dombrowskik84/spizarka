/********************************************************************************
** Form generated from reading UI file 'removeresources.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVERESOURCES_H
#define UI_REMOVERESOURCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RemoveResources
{
public:
    QGridLayout *gridLayout;
    QLabel *resourcesNameLabel;
    QLineEdit *resourcesNameLineEdit;
    QLabel *resourcesQuantityLabel;
    QSpinBox *spinBox;
    QPushButton *removeAllButton;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RemoveResources)
    {
        if (RemoveResources->objectName().isEmpty())
            RemoveResources->setObjectName("RemoveResources");
        RemoveResources->resize(400, 195);
        gridLayout = new QGridLayout(RemoveResources);
        gridLayout->setObjectName("gridLayout");
        resourcesNameLabel = new QLabel(RemoveResources);
        resourcesNameLabel->setObjectName("resourcesNameLabel");

        gridLayout->addWidget(resourcesNameLabel, 0, 0, 1, 1);

        resourcesNameLineEdit = new QLineEdit(RemoveResources);
        resourcesNameLineEdit->setObjectName("resourcesNameLineEdit");

        gridLayout->addWidget(resourcesNameLineEdit, 0, 1, 1, 1);

        resourcesQuantityLabel = new QLabel(RemoveResources);
        resourcesQuantityLabel->setObjectName("resourcesQuantityLabel");

        gridLayout->addWidget(resourcesQuantityLabel, 1, 0, 1, 1);

        spinBox = new QSpinBox(RemoveResources);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(1);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        removeAllButton = new QPushButton(RemoveResources);
        removeAllButton->setObjectName("removeAllButton");

        gridLayout->addWidget(removeAllButton, 2, 0, 1, 2);

        okButton = new QPushButton(RemoveResources);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 3, 0, 1, 2);

        cancelButton = new QPushButton(RemoveResources);
        cancelButton->setObjectName("cancelButton");

        gridLayout->addWidget(cancelButton, 4, 0, 1, 2);


        retranslateUi(RemoveResources);

        QMetaObject::connectSlotsByName(RemoveResources);
    } // setupUi

    void retranslateUi(QDialog *RemoveResources)
    {
        RemoveResources->setWindowTitle(QCoreApplication::translate("RemoveResources", "Dialog", nullptr));
        resourcesNameLabel->setText(QCoreApplication::translate("RemoveResources", "Nazwa zasobu", nullptr));
        resourcesQuantityLabel->setText(QCoreApplication::translate("RemoveResources", "Ilo\305\233\304\207 do usuni\304\231cia", nullptr));
        removeAllButton->setText(QCoreApplication::translate("RemoveResources", "Usu\305\204 wszystkie", nullptr));
        okButton->setText(QCoreApplication::translate("RemoveResources", "Ok", nullptr));
        cancelButton->setText(QCoreApplication::translate("RemoveResources", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveResources: public Ui_RemoveResources {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVERESOURCES_H
