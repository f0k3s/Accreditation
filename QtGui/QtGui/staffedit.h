#pragma once

#include <QDialog>
#include "ui_staffedit.h"

class StaffEdit : public QDialog
{
	Q_OBJECT

public:
	StaffEdit(QWidget *parent = Q_NULLPTR);
	~StaffEdit();

private:
	Ui::StaffEdit ui;
};
