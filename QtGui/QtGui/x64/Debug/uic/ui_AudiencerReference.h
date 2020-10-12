/********************************************************************************
** Form generated from reading UI file 'AudiencerReference.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIENCERREFERENCE_H
#define UI_AUDIENCERREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AudiencerReference
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *AudiencerReference)
    {
        if (AudiencerReference->objectName().isEmpty())
            AudiencerReference->setObjectName(QString::fromUtf8("AudiencerReference"));
        AudiencerReference->resize(503, 418);
        gridLayout_2 = new QGridLayout(AudiencerReference);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_2 = new QPushButton(AudiencerReference);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font;
        font.setPointSize(9);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(AudiencerReference);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(411, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pushButton = new QPushButton(AudiencerReference);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        tableWidget = new QTableWidget(AudiencerReference);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 2);


        retranslateUi(AudiencerReference);

        QMetaObject::connectSlotsByName(AudiencerReference);
    } // setupUi

    void retranslateUi(QDialog *AudiencerReference)
    {
        AudiencerReference->setWindowTitle(QCoreApplication::translate("AudiencerReference", "AudiencerReference", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AudiencerReference", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AudiencerReference", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("AudiencerReference", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudiencerReference: public Ui_AudiencerReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIENCERREFERENCE_H
