/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leEmail;
    QLabel *label_2;
    QLineEdit *lePassword;
    QPushButton *loginBtn;
    QPushButton *registerBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(251, 128);
        gridLayout_3 = new QGridLayout(Dialog);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Dialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leEmail = new QLineEdit(Dialog);
        leEmail->setObjectName("leEmail");

        gridLayout->addWidget(leEmail, 0, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lePassword = new QLineEdit(Dialog);
        lePassword->setObjectName("lePassword");

        gridLayout->addWidget(lePassword, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 2);

        loginBtn = new QPushButton(Dialog);
        loginBtn->setObjectName("loginBtn");

        gridLayout_2->addWidget(loginBtn, 1, 0, 1, 1);

        registerBtn = new QPushButton(Dialog);
        registerBtn->setObjectName("registerBtn");

        gridLayout_2->addWidget(registerBtn, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Login Form", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Password must be at least 8 digits long.", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Password", nullptr));
        loginBtn->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        registerBtn->setText(QCoreApplication::translate("Dialog", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
