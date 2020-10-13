/********************************************************************************
** Form generated from reading UI file 'GNReference.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GNREFERENCE_H
#define UI_GNREFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_GNReference
{
public:
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pb_ExitGN;

    void setupUi(QDialog *GNReference)
    {
        if (GNReference->objectName().isEmpty())
            GNReference->setObjectName(QString::fromUtf8("GNReference"));
        GNReference->resize(503, 418);
        gridLayout_4 = new QGridLayout(GNReference);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tableWidget = new QTableWidget(GNReference);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_4->addWidget(tableWidget, 0, 0, 1, 2);

        pushButton = new QPushButton(GNReference);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(9);
        pushButton->setFont(font);

        gridLayout_4->addWidget(pushButton, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(359, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_4 = new QPushButton(GNReference);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setFont(font);

        gridLayout_3->addWidget(pushButton_4, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        pb_ExitGN = new QPushButton(GNReference);
        pb_ExitGN->setObjectName(QString::fromUtf8("pb_ExitGN"));
        pb_ExitGN->setFont(font);

        gridLayout_3->addWidget(pb_ExitGN, 0, 2, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 2, 0, 1, 2);


        retranslateUi(GNReference);

        QMetaObject::connectSlotsByName(GNReference);
    } // setupUi

    void retranslateUi(QDialog *GNReference)
    {
        GNReference->setWindowTitle(QCoreApplication::translate("GNReference", "GNReference", nullptr));
        pushButton->setText(QCoreApplication::translate("GNReference", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_4->setText(QCoreApplication::translate("GNReference", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pb_ExitGN->setText(QCoreApplication::translate("GNReference", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GNReference: public Ui_GNReference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GNREFERENCE_H
