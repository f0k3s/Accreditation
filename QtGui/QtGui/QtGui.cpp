#include <QtWidgets/QApplication>
#include "QtGui.h"
#include "ui_QtGui.h"
#include "GroupSelection.h"
#include "staffedit.h"
#include "AudiencerReference.h"
#include "GNReference.h"
#include "KOReference.h"
#include "PPSReference.h"
#include "UPReference.h"



QtGui::QtGui(QWidget* parent)
	: QMainWindow(parent)

{
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Формирование справок для аккредитации"));
	connect(ui.pb_Group, SIGNAL(clicked()), this, SLOT(openGroup()));
	connect(ui.pb_StaffChange, SIGNAL(clicked()), this, SLOT(openStaff()));
	connect(ui.action_Audience, SIGNAL(triggered()), this, SLOT(openAudienceReference()));
	connect(ui.action_PPS, SIGNAL(triggered()), this, SLOT(openPPSReference()));
	connect(ui.action_KOFormul, SIGNAL(triggered()), this, SLOT(openKOReference()));
	connect(ui.action_GN, SIGNAL(triggered()), this, SLOT(openGNReference()));
	connect(ui.action_UP, SIGNAL(triggered()), this, SLOT(openUPReference()));
}

void QtGui::openGroup()
{
	GroupSelection* w = new GroupSelection;
	w->show();
	this->hide();
}
void QtGui::openStaff()
{
	StaffEdit* w = new StaffEdit;
	w->show();
	this->hide();
}
void QtGui::openAudienceReference()
{
	AudiencerReference* w = new AudiencerReference;
	w->show();
	this->hide();
}
void QtGui::openGNReference()
{
	GNReference* w = new GNReference;
	w->show();
	this->hide();
}
void QtGui::openKOReference()
{
	KOReference* w = new KOReference;
	w->show();
	this->hide();
}
void QtGui::openPPSReference()
{
	PPSReference* w = new PPSReference;
	w->show();
	this->hide();
}
void QtGui::openUPReference()
{
	UPReference* w = new UPReference;
	w->show();
	this->hide();
}
