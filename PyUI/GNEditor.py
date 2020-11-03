# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\f0kes\Desktop\ACCR\QtGui\QtGui\GNReference.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_GNReference(object):
    def setupUi(self, GNReference):
        GNReference.setObjectName("GNReference")
        GNReference.resize(503, 418)
        self.gridLayout_4 = QtWidgets.QGridLayout(GNReference)
        self.gridLayout_4.setContentsMargins(11, 11, 11, 11)
        self.gridLayout_4.setSpacing(6)
        self.gridLayout_4.setObjectName("gridLayout_4")
        self.tb_GNTable = QtWidgets.QTableWidget(GNReference)
        self.tb_GNTable.setObjectName("tb_GNTable")
        self.tb_GNTable.setColumnCount(0)
        self.tb_GNTable.setRowCount(0)
        self.gridLayout_4.addWidget(self.tb_GNTable, 0, 0, 1, 2)
        self.pb_EditGN = QtWidgets.QPushButton(GNReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_EditGN.setFont(font)
        self.pb_EditGN.setObjectName("pb_EditGN")
        self.gridLayout_4.addWidget(self.pb_EditGN, 1, 0, 1, 1)
        spacerItem = QtWidgets.QSpacerItem(359, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_4.addItem(spacerItem, 1, 1, 1, 1)
        self.gridLayout_3 = QtWidgets.QGridLayout()
        self.gridLayout_3.setSpacing(6)
        self.gridLayout_3.setObjectName("gridLayout_3")
        self.pb_SaveGN = QtWidgets.QPushButton(GNReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_SaveGN.setFont(font)
        self.pb_SaveGN.setObjectName("pb_SaveGN")
        self.gridLayout_3.addWidget(self.pb_SaveGN, 0, 0, 1, 1)
        spacerItem1 = QtWidgets.QSpacerItem(278, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_3.addItem(spacerItem1, 0, 1, 1, 1)
        self.pb_ExitGN = QtWidgets.QPushButton(GNReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_ExitGN.setFont(font)
        self.pb_ExitGN.setObjectName("pb_ExitGN")
        self.gridLayout_3.addWidget(self.pb_ExitGN, 0, 2, 1, 1)
        self.gridLayout_4.addLayout(self.gridLayout_3, 2, 0, 1, 2)

        self.retranslateUi(GNReference)
        QtCore.QMetaObject.connectSlotsByName(GNReference)

    def retranslateUi(self, GNReference):
        _translate = QtCore.QCoreApplication.translate
        GNReference.setWindowTitle(_translate("GNReference", "GNReference"))
        self.pb_EditGN.setText(_translate("GNReference", "Редактировать"))
        self.pb_SaveGN.setText(_translate("GNReference", "Сохранить"))
        self.pb_ExitGN.setText(_translate("GNReference", "Закрыть"))
