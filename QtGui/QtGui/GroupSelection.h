#pragma once

#include <QDialog>
#include "ui_GroupSelection.h"


class GroupSelection : public QDialog
{
	Q_OBJECT

public:
	GroupSelection(QWidget *parent = Q_NULLPTR);
	~GroupSelection();



private:
	Ui::GroupSelection ui;

private slots:
	void exitGroup();
};
