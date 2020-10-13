#include "GNReference.h"
#include "QtGui.h"

GNReference::GNReference(QWidget *parent)
	: QDialog(parent)
{

	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Справочник Г.Н."));
	connect(ui.pb_ExitGN, SIGNAL(clicked()), this, SLOT(exitGNReference()));
}

GNReference::~GNReference()
{
}

void GNReference::exitGNReference()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}
