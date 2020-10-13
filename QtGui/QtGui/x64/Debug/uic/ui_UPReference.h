/********************************************************************************
** Form generated from reading UI file 'UPReference.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPREFERENCE_H
#define UI_UPREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_UPReference
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_ExitUP;

    void setupUi(QDialog *UPReference)
    {
        if (UPReference->objectName().isEmpty())
            UPReference->setObjectName(QString::fromUtf8("UPReference"));
        UPReference->resize(503, 418);
        gridLayout_2 = new QGridLayout(UPReference);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget = new QTableWidget(UPReference);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 2);

        pushButton = new QPushButton(UPReference);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(9);
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(359, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(UPReference);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(288, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pb_ExitUP = new QPushButton(UPReference);
        pb_ExitUP->setObjectName(QString::fromUtf8("pb_ExitUP"));
        pb_ExitUP->setFont(font);

        gridLayout->addWidget(pb_ExitUP, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);


        retranslateUi(UPReference);

        QMetaObject::connectSlotsByName(UPReference);
    } // setupUi

    void retranslateUi(QDialog *UPReference)
    {
        UPReference->setWindowTitle(QCoreApplication::translate("UPReference", "UPReference", nullptr));
        pushButton->setText(QCoreApplication::translate("UPReference", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UPReference", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pb_ExitUP->setText(QCoreApplication::translate("UPReference", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UPReference: public Ui_UPReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPREFERENCE_H
