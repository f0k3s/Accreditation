/********************************************************************************
** Form generated from reading UI file 'QtGui.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUI_H
#define UI_QTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:
    QAction *action_Open;
    QAction *action_Save;
    QAction *action_SaveAs;
    QAction *action_MTOPDF;
    QAction *action_MTODOCX;
    QAction *action_KOPDF;
    QAction *action_KODOCX;
    QAction *action_PPS;
    QAction *action_UP;
    QAction *action_GN;
    QAction *action_KOFormul;
    QAction *action_TemplateMTO;
    QAction *action_TemplateKO;
    QAction *action_FulledAudience;
    QAction *action_FulledStaff;
    QAction *action_CheckPercent;
    QAction *action_Audience;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pb_UPChange;
    QLabel *label;
    QListWidget *listWidget;
    QGridLayout *gridLayout_5;
    QLabel *label_3;
    QPushButton *pb_MTOChange;
    QListWidget *listWidget_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pb_Group;
    QGridLayout *gridLayout_4;
    QLabel *label_2;
    QPushButton *pb_StaffChange;
    QListWidget *listWidget_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QString::fromUtf8("QtGuiClass"));
        QtGuiClass->resize(573, 482);
        QtGuiClass->setIconSize(QSize(48, 48));
        action_Open = new QAction(QtGuiClass);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(QtGuiClass);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_SaveAs = new QAction(QtGuiClass);
        action_SaveAs->setObjectName(QString::fromUtf8("action_SaveAs"));
        action_MTOPDF = new QAction(QtGuiClass);
        action_MTOPDF->setObjectName(QString::fromUtf8("action_MTOPDF"));
        action_MTODOCX = new QAction(QtGuiClass);
        action_MTODOCX->setObjectName(QString::fromUtf8("action_MTODOCX"));
        action_KOPDF = new QAction(QtGuiClass);
        action_KOPDF->setObjectName(QString::fromUtf8("action_KOPDF"));
        action_KODOCX = new QAction(QtGuiClass);
        action_KODOCX->setObjectName(QString::fromUtf8("action_KODOCX"));
        action_PPS = new QAction(QtGuiClass);
        action_PPS->setObjectName(QString::fromUtf8("action_PPS"));
        action_UP = new QAction(QtGuiClass);
        action_UP->setObjectName(QString::fromUtf8("action_UP"));
        action_GN = new QAction(QtGuiClass);
        action_GN->setObjectName(QString::fromUtf8("action_GN"));
        action_KOFormul = new QAction(QtGuiClass);
        action_KOFormul->setObjectName(QString::fromUtf8("action_KOFormul"));
        action_TemplateMTO = new QAction(QtGuiClass);
        action_TemplateMTO->setObjectName(QString::fromUtf8("action_TemplateMTO"));
        action_TemplateKO = new QAction(QtGuiClass);
        action_TemplateKO->setObjectName(QString::fromUtf8("action_TemplateKO"));
        action_FulledAudience = new QAction(QtGuiClass);
        action_FulledAudience->setObjectName(QString::fromUtf8("action_FulledAudience"));
        action_FulledStaff = new QAction(QtGuiClass);
        action_FulledStaff->setObjectName(QString::fromUtf8("action_FulledStaff"));
        action_CheckPercent = new QAction(QtGuiClass);
        action_CheckPercent->setObjectName(QString::fromUtf8("action_CheckPercent"));
        action_Audience = new QAction(QtGuiClass);
        action_Audience->setObjectName(QString::fromUtf8("action_Audience"));
        centralWidget = new QWidget(QtGuiClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pb_UPChange = new QPushButton(centralWidget);
        pb_UPChange->setObjectName(QString::fromUtf8("pb_UPChange"));
        QFont font;
        font.setPointSize(9);
        pb_UPChange->setFont(font);

        gridLayout_3->addWidget(pb_UPChange, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_3->addWidget(listWidget, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_3, 1, 0, 2, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        pb_MTOChange = new QPushButton(centralWidget);
        pb_MTOChange->setObjectName(QString::fromUtf8("pb_MTOChange"));
        pb_MTOChange->setFont(font);

        gridLayout_5->addWidget(pb_MTOChange, 0, 1, 1, 1);

        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QString::fromUtf8("listWidget_3"));

        gridLayout_5->addWidget(listWidget_3, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_5, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(389, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 2);

        pb_Group = new QPushButton(centralWidget);
        pb_Group->setObjectName(QString::fromUtf8("pb_Group"));
        pb_Group->setFont(font);

        gridLayout->addWidget(pb_Group, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 1);

        pb_StaffChange = new QPushButton(centralWidget);
        pb_StaffChange->setObjectName(QString::fromUtf8("pb_StaffChange"));
        pb_StaffChange->setFont(font);

        gridLayout_4->addWidget(pb_StaffChange, 0, 1, 1, 1);

        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));

        gridLayout_4->addWidget(listWidget_2, 1, 0, 1, 2);


        gridLayout->addLayout(gridLayout_4, 1, 2, 1, 1);

        QtGuiClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 573, 26));
        menuBar->setDefaultUp(false);
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QString::fromUtf8("menu_5"));
        QtGuiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setLayoutDirection(Qt::RightToLeft);
        QtGuiClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        QWidget::setTabOrder(pb_Group, listWidget);
        QWidget::setTabOrder(listWidget, pb_UPChange);
        QWidget::setTabOrder(pb_UPChange, listWidget_2);
        QWidget::setTabOrder(listWidget_2, pb_StaffChange);
        QWidget::setTabOrder(pb_StaffChange, listWidget_3);
        QWidget::setTabOrder(listWidget_3, pb_MTOChange);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action_Open);
        menu->addAction(action_Save);
        menu->addAction(action_SaveAs);
        menu_2->addAction(action_MTOPDF);
        menu_2->addAction(action_MTODOCX);
        menu_2->addAction(action_KOPDF);
        menu_2->addAction(action_KODOCX);
        menu_3->addAction(action_Audience);
        menu_3->addAction(action_PPS);
        menu_3->addAction(action_UP);
        menu_3->addAction(action_GN);
        menu_3->addAction(action_KOFormul);
        menu_4->addAction(action_TemplateMTO);
        menu_4->addAction(action_TemplateKO);
        menu_5->addAction(action_FulledAudience);
        menu_5->addAction(action_FulledStaff);
        menu_5->addAction(action_CheckPercent);

        retranslateUi(QtGuiClass);

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QCoreApplication::translate("QtGuiClass", "QtGui", nullptr));
        action_Open->setText(QCoreApplication::translate("QtGuiClass", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        action_Save->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_SaveAs->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        action_MTOPDF->setText(QCoreApplication::translate("QtGuiClass", "\320\234\320\242\320\236 PDF", nullptr));
        action_MTODOCX->setText(QCoreApplication::translate("QtGuiClass", "\320\234\320\242\320\236 DOCX", nullptr));
        action_KOPDF->setText(QCoreApplication::translate("QtGuiClass", "\320\232\320\236 PDF", nullptr));
        action_KODOCX->setText(QCoreApplication::translate("QtGuiClass", "\320\232\320\236 DOCX", nullptr));
        action_PPS->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\237\320\237\320\241", nullptr));
        action_UP->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\243\320\237", nullptr));
        action_GN->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\223.\320\235.", nullptr));
        action_KOFormul->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\232\320\236 \321\204\320\276\321\200\320\274\321\203\320\273", nullptr));
        action_TemplateMTO->setText(QCoreApplication::translate("QtGuiClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275 \320\234\320\242\320\236", nullptr));
        action_TemplateKO->setText(QCoreApplication::translate("QtGuiClass", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\210\320\260\320\261\320\273\320\276\320\275 \320\232\320\236", nullptr));
        action_FulledAudience->setText(QCoreApplication::translate("QtGuiClass", "\320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\321\213 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270", nullptr));
        action_FulledStaff->setText(QCoreApplication::translate("QtGuiClass", "\320\227\320\260\320\277\320\276\320\273\320\275\320\265\320\275\321\213 \320\272\320\260\320\264\321\200\321\213", nullptr));
        action_CheckPercent->setText(QCoreApplication::translate("QtGuiClass", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260 %", nullptr));
        action_Audience->setText(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\271", nullptr));
        pb_UPChange->setText(QCoreApplication::translate("QtGuiClass", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("QtGuiClass", "\320\243\320\237", nullptr));
        label_3->setText(QCoreApplication::translate("QtGuiClass", "\320\234\320\242\320\236", nullptr));
        pb_MTOChange->setText(QCoreApplication::translate("QtGuiClass", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pb_Group->setText(QCoreApplication::translate("QtGuiClass", "\320\222\321\213\320\261\320\276\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("QtGuiClass", "\320\232\320\260\320\264\321\200\321\213", nullptr));
        pb_StaffChange->setText(QCoreApplication::translate("QtGuiClass", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("QtGuiClass", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QtGuiClass", "\320\241\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\277\321\200\320\260\320\262\320\272\321\203", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QtGuiClass", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\270\320\272\320\270", nullptr));
        menu_4->setTitle(QCoreApplication::translate("QtGuiClass", "\320\250\320\260\320\261\320\273\320\276\320\275", nullptr));
        menu_5->setTitle(QCoreApplication::translate("QtGuiClass", "\320\237\321\200\320\276\320\262\320\265\321\200\320\272\320\260", nullptr));
        mainToolBar->setWindowTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUI_H
