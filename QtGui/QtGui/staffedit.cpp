#include "staffedit.h"
#include "QtGui.h"

StaffEdit::StaffEdit(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Кадры"));
	connect(ui.pb_SaveStaff, SIGNAL(clicked()), this, SLOT(exitStaff()));
}

StaffEdit::~StaffEdit()
{
}

void StaffEdit::exitStaff()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}


