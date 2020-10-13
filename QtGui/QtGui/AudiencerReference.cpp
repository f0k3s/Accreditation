#include "AudiencerReference.h"
#include "QtGui.h"

AudiencerReference::AudiencerReference(QWidget *parent)
	: QDialog(parent)
{
	
	ui.setupUi(this);
	setWindowTitle(QString::fromLocal8Bit("Справочник аудиторий"));
	connect(ui.pb_ExitAudience, SIGNAL(clicked()), this, SLOT(exitAudienceReference()));
}

AudiencerReference::~AudiencerReference()
{
}

void AudiencerReference::exitAudienceReference()
{
	QtGui* w = new QtGui;
	w->show();
	this->hide();
}
