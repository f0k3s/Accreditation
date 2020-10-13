#pragma once

#include <QDialog>
#include "ui_AudiencerReference.h"

class AudiencerReference : public QDialog
{
	Q_OBJECT

public:
	AudiencerReference(QWidget *parent = Q_NULLPTR);
	~AudiencerReference();

private:
	Ui::AudiencerReference ui;

private slots:
	void exitAudienceReference();
};
