#include "PPSReference.h"
#include "QtGui.h"

PPSReference::PPSReference(QWidget *parent)
	: QDialog(parent)
{

	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Справочник ППС"));
	connect(ui.pb_ExitPPS, SIGNAL(clicked()), this, SLOT(exitPPSReference()));
}

PPSReference::~PPSReference()
{
}

void PPSReference::exitPPSReference()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}
