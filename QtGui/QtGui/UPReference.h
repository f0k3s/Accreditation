#pragma once

#include <QDialog>
#include "ui_UPReference.h"

class UPReference : public QDialog
{
	Q_OBJECT

public:
	UPReference(QWidget *parent = Q_NULLPTR);
	~UPReference();

private:
	Ui::UPReference ui;

private slots:
	void exitUPReference();
};
