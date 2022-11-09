/********************************************************************************
** Form generated from reading UI file 'clavier.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLAVIER_H
#define UI_CLAVIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clavier
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxLedVerte;
    QCheckBox *checkBoxLedRouge;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton_Marche;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_0;
    QPushButton *pushButton_1;
    QPushButton *pushButton_Arret;
    QPushButton *pushButton_6;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;

    void setupUi(QWidget *clavier)
    {
        if (clavier->objectName().isEmpty())
            clavier->setObjectName(QString::fromUtf8("clavier"));
        clavier->resize(301, 240);
        widget = new QWidget(clavier);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 184, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBoxLedVerte = new QCheckBox(widget);
        checkBoxLedVerte->setObjectName(QString::fromUtf8("checkBoxLedVerte"));

        horizontalLayout->addWidget(checkBoxLedVerte);

        checkBoxLedRouge = new QCheckBox(widget);
        checkBoxLedRouge->setObjectName(QString::fromUtf8("checkBoxLedRouge"));

        horizontalLayout->addWidget(checkBoxLedRouge);

        widget1 = new QWidget(clavier);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 70, 254, 146));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_Marche = new QPushButton(widget1);
        pushButton_Marche->setObjectName(QString::fromUtf8("pushButton_Marche"));

        gridLayout->addWidget(pushButton_Marche, 3, 0, 1, 1);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_0 = new QPushButton(widget1);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(widget1);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_Arret = new QPushButton(widget1);
        pushButton_Arret->setObjectName(QString::fromUtf8("pushButton_Arret"));

        gridLayout->addWidget(pushButton_Arret, 3, 2, 1, 1);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(widget1);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);


        retranslateUi(clavier);

        QMetaObject::connectSlotsByName(clavier);
    } // setupUi

    void retranslateUi(QWidget *clavier)
    {
        clavier->setWindowTitle(QCoreApplication::translate("clavier", "clavier", nullptr));
        checkBoxLedVerte->setText(QCoreApplication::translate("clavier", "Led Verte", nullptr));
        checkBoxLedRouge->setText(QCoreApplication::translate("clavier", "Led Rouge", nullptr));
        pushButton_7->setText(QCoreApplication::translate("clavier", "7", nullptr));
        pushButton_Marche->setText(QCoreApplication::translate("clavier", "Marche", nullptr));
        pushButton_4->setText(QCoreApplication::translate("clavier", "4", nullptr));
        pushButton_3->setText(QCoreApplication::translate("clavier", "3", nullptr));
        pushButton_5->setText(QCoreApplication::translate("clavier", "5", nullptr));
        pushButton_0->setText(QCoreApplication::translate("clavier", "0", nullptr));
        pushButton_1->setText(QCoreApplication::translate("clavier", "1", nullptr));
        pushButton_Arret->setText(QCoreApplication::translate("clavier", "Arret", nullptr));
        pushButton_6->setText(QCoreApplication::translate("clavier", "6", nullptr));
        pushButton_8->setText(QCoreApplication::translate("clavier", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("clavier", "9", nullptr));
        pushButton_2->setText(QCoreApplication::translate("clavier", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clavier: public Ui_clavier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLAVIER_H
