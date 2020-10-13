#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGui.h"
#include "GroupSelection.h"

class QtGui : public QMainWindow
{
	Q_OBJECT

public:
	 QtGui(QWidget *parent = Q_NULLPTR);


private:
	Ui::QtGuiClass ui;


private slots:
	void openGroup();
	void openStaff();
	void openAudienceReference();
	void openGNReference();
	void openKOReference();
	void openPPSReference();
	void openUPReference();
};
