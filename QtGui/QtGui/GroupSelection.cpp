#include "GroupSelection.h"
#include "ui_GroupSelection.h"
#include "QtGui.h"

GroupSelection::GroupSelection(QWidget *parent)
	: QDialog(parent)

{
	
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Ãğóïïà"));
	connect(ui.pb_SaveGroup, SIGNAL(clicked()), this, SLOT(exitGroup()));
}

GroupSelection::~GroupSelection()
{
}

void GroupSelection::exitGroup()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}
