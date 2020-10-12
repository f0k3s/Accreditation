#pragma once

#include <QDialog>
#include "ui_KOReference.h"

class KOReference : public QDialog
{
	Q_OBJECT

public:
	KOReference(QWidget *parent = Q_NULLPTR);
	~KOReference();

private:
	Ui::KOReference ui;
};
