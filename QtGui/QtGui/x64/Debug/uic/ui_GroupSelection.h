/********************************************************************************
** Form generated from reading UI file 'GroupSelection.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPSELECTION_H
#define UI_GROUPSELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_GroupSelection
{
public:
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_SaveGroup;

    void setupUi(QDialog *GroupSelection)
    {
        if (GroupSelection->objectName().isEmpty())
            GroupSelection->setObjectName(QString::fromUtf8("GroupSelection"));
        GroupSelection->resize(537, 363);
        gridLayout_3 = new QGridLayout(GroupSelection);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(GroupSelection);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(GroupSelection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(GroupSelection);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 2, 1, 1);

        comboBox_5 = new QComboBox(GroupSelection);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout_3->addWidget(comboBox_5, 1, 0, 1, 1);

        comboBox_6 = new QComboBox(GroupSelection);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout_3->addWidget(comboBox_6, 1, 1, 1, 1);

        comboBox_7 = new QComboBox(GroupSelection);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_3->addWidget(comboBox_7, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 249, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 3, 0, 1, 2);

        pb_SaveGroup = new QPushButton(GroupSelection);
        pb_SaveGroup->setObjectName(QString::fromUtf8("pb_SaveGroup"));
        pb_SaveGroup->setFont(font);
        pb_SaveGroup->setAutoRepeatDelay(300);
        pb_SaveGroup->setAutoRepeatInterval(100);

        gridLayout_3->addWidget(pb_SaveGroup, 3, 2, 1, 1);

        QWidget::setTabOrder(comboBox_5, comboBox_6);
        QWidget::setTabOrder(comboBox_6, comboBox_7);
        QWidget::setTabOrder(comboBox_7, pb_SaveGroup);

        retranslateUi(GroupSelection);

        QMetaObject::connectSlotsByName(GroupSelection);
    } // setupUi

    void retranslateUi(QDialog *GroupSelection)
    {
        GroupSelection->setWindowTitle(QCoreApplication::translate("GroupSelection", "GroupSelection", nullptr));
        label->setText(QCoreApplication::translate("GroupSelection", "\320\223\320\276\320\264 \320\275\320\260\320\261\320\276\321\200\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("GroupSelection", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("GroupSelection", "\320\241\320\265\320\274\320\265\321\201\321\202\321\200", nullptr));
        pb_SaveGroup->setText(QCoreApplication::translate("GroupSelection", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupSelection: public Ui_GroupSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPSELECTION_H
