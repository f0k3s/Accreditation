# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\f0kes\Desktop\ACCR\QtGui\QtGui\AudiencerReference.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_AudiencerReference(object):
    def setupUi(self, AudiencerReference):
        AudiencerReference.setObjectName("AudiencerReference")
        AudiencerReference.resize(503, 418)
        self.gridLayout_2 = QtWidgets.QGridLayout(AudiencerReference)
        self.gridLayout_2.setContentsMargins(11, 11, 11, 11)
        self.gridLayout_2.setSpacing(6)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setSpacing(6)
        self.gridLayout.setObjectName("gridLayout")
        self.pb_SaveAudience = QtWidgets.QPushButton(AudiencerReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_SaveAudience.setFont(font)
        self.pb_SaveAudience.setObjectName("pb_SaveAudience")
        self.gridLayout.addWidget(self.pb_SaveAudience, 0, 0, 1, 1)
        spacerItem = QtWidgets.QSpacerItem(208, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout.addItem(spacerItem, 0, 1, 1, 1)
        self.pb_ExitAudience = QtWidgets.QPushButton(AudiencerReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_ExitAudience.setFont(font)
        self.pb_ExitAudience.setObjectName("pb_ExitAudience")
        self.gridLayout.addWidget(self.pb_ExitAudience, 0, 2, 1, 1)
        self.gridLayout_2.addLayout(self.gridLayout, 2, 0, 1, 2)
        spacerItem1 = QtWidgets.QSpacerItem(411, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_2.addItem(spacerItem1, 1, 1, 1, 1)
        self.pb_EditAudience = QtWidgets.QPushButton(AudiencerReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_EditAudience.setFont(font)
        self.pb_EditAudience.setObjectName("pb_EditAudience")
        self.gridLayout_2.addWidget(self.pb_EditAudience, 1, 0, 1, 1)
        self.tb_AudienceTable = QtWidgets.QTableWidget(AudiencerReference)
        self.tb_AudienceTable.setObjectName("tb_AudienceTable")
        self.tb_AudienceTable.setColumnCount(0)
        self.tb_AudienceTable.setRowCount(0)
        self.gridLayout_2.addWidget(self.tb_AudienceTable, 0, 0, 1, 2)

        self.retranslateUi(AudiencerReference)
        QtCore.QMetaObject.connectSlotsByName(AudiencerReference)
        AudiencerReference.setTabOrder(self.tb_AudienceTable, self.pb_EditAudience)
        AudiencerReference.setTabOrder(self.pb_EditAudience, self.pb_SaveAudience)
        AudiencerReference.setTabOrder(self.pb_SaveAudience, self.pb_ExitAudience)

    def retranslateUi(self, AudiencerReference):
        _translate = QtCore.QCoreApplication.translate
        AudiencerReference.setWindowTitle(_translate("AudiencerReference", "AudiencerReference"))
        self.pb_SaveAudience.setText(_translate("AudiencerReference", "Сохранить"))
        self.pb_ExitAudience.setText(_translate("AudiencerReference", "Закрыть"))
        self.pb_EditAudience.setText(_translate("AudiencerReference", "Редактировать"))
