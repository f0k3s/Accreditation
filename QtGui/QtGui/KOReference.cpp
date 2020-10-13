#include "KOReference.h"
#include "QtGui.h"

KOReference::KOReference(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Справочник КО формул"));
	connect(ui.pb_ExitKO, SIGNAL(clicked()), this, SLOT(exitKOReference()));
}

KOReference::~KOReference()
{
}

void KOReference::exitKOReference()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}
