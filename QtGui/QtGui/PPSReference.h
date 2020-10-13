#pragma once

#include <QDialog>
#include "ui_PPSReference.h"

class PPSReference : public QDialog
{
	Q_OBJECT

public:
	PPSReference(QWidget *parent = Q_NULLPTR);
	~PPSReference();

private:
	Ui::PPSReference ui;

private slots:
	void exitPPSReference();
};
