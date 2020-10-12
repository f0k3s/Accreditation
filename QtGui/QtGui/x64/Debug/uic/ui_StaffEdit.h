/********************************************************************************
** Form generated from reading UI file 'StaffEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFEDIT_H
#define UI_STAFFEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StaffEdit
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *StaffEdit)
    {
        if (StaffEdit->objectName().isEmpty())
            StaffEdit->setObjectName(QString::fromUtf8("StaffEdit"));
        StaffEdit->resize(439, 399);
        gridLayout = new QGridLayout(StaffEdit);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(StaffEdit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font;
        font.setPointSize(9);
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(StaffEdit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        label_2 = new QLabel(StaffEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 2);

        comboBox_5 = new QComboBox(StaffEdit);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 2, 0, 1, 2);

        comboBox_6 = new QComboBox(StaffEdit);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 2, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 0, 1, 3);

        pushButton_3 = new QPushButton(StaffEdit);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setFont(font);
        pushButton_3->setAutoRepeatDelay(300);
        pushButton_3->setAutoRepeatInterval(100);

        gridLayout->addWidget(pushButton_3, 4, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 263, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 2);

        QWidget::setTabOrder(pushButton, comboBox_5);
        QWidget::setTabOrder(comboBox_5, comboBox_6);
        QWidget::setTabOrder(comboBox_6, pushButton_3);

        retranslateUi(StaffEdit);

        QMetaObject::connectSlotsByName(StaffEdit);
    } // setupUi

    void retranslateUi(QDialog *StaffEdit)
    {
        StaffEdit->setWindowTitle(QCoreApplication::translate("StaffEdit", "StaffEdit", nullptr));
        pushButton->setText(QCoreApplication::translate("StaffEdit", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("StaffEdit", "\320\242\320\270\320\277 \320\267\320\260\320\275\321\217\321\202\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("StaffEdit", "\320\237\321\200\320\265\320\277\320\276\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("StaffEdit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StaffEdit: public Ui_StaffEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFEDIT_H
