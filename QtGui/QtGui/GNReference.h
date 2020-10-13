#pragma once

#include <QDialog>
#include "ui_GNReference.h"

class GNReference : public QDialog
{
	Q_OBJECT

public:
	GNReference(QWidget *parent = Q_NULLPTR);
	~GNReference();

private:
	Ui::GNReference ui;

private slots:
	void exitGNReference();
};
