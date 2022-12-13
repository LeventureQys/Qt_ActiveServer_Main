/********************************************************************************
** Form generated from reading UI file 'Main_Activerserver_Demo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_ACTIVERSERVER_DEMO_H
#define UI_MAIN_ACTIVERSERVER_DEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Activerserver_DemoClass
{
public:
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *Main_Activerserver_DemoClass)
    {
        if (Main_Activerserver_DemoClass->objectName().isEmpty())
            Main_Activerserver_DemoClass->setObjectName(QStringLiteral("Main_Activerserver_DemoClass"));
        Main_Activerserver_DemoClass->resize(600, 482);
        pushButton = new QPushButton(Main_Activerserver_DemoClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 190, 151, 23));
        plainTextEdit = new QPlainTextEdit(Main_Activerserver_DemoClass);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(230, 120, 261, 291));
        label = new QLabel(Main_Activerserver_DemoClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 151, 16));
        label_2 = new QLabel(Main_Activerserver_DemoClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 121, 16));
        label_3 = new QLabel(Main_Activerserver_DemoClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 100, 121, 16));

        retranslateUi(Main_Activerserver_DemoClass);

        QMetaObject::connectSlotsByName(Main_Activerserver_DemoClass);
    } // setupUi

    void retranslateUi(QWidget *Main_Activerserver_DemoClass)
    {
        Main_Activerserver_DemoClass->setWindowTitle(QApplication::translate("Main_Activerserver_DemoClass", "Main_Activerserver_Demo", nullptr));
        pushButton->setText(QApplication::translate("Main_Activerserver_DemoClass", "\345\220\221\345\244\226\351\203\250\350\277\233\347\250\213\345\217\221\351\200\201\344\277\241\345\217\267", nullptr));
        label->setText(QApplication::translate("Main_Activerserver_DemoClass", "Designed by Leventure", nullptr));
        label_2->setText(QApplication::translate("Main_Activerserver_DemoClass", "ActiveQt Server", nullptr));
        label_3->setText(QApplication::translate("Main_Activerserver_DemoClass", "\346\216\245\346\224\266\345\244\226\351\203\250\350\277\233\347\250\213\344\277\241\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Main_Activerserver_DemoClass: public Ui_Main_Activerserver_DemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_ACTIVERSERVER_DEMO_H
