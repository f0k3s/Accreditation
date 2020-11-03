# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\f0kes\Desktop\ACCR\QtGui\QtGui\UPReference.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_UPReference(object):
    def setupUi(self, UPReference):
        UPReference.setObjectName("UPReference")
        UPReference.resize(503, 418)
        self.gridLayout_2 = QtWidgets.QGridLayout(UPReference)
        self.gridLayout_2.setContentsMargins(11, 11, 11, 11)
        self.gridLayout_2.setSpacing(6)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.tb_UPtable = QtWidgets.QTableWidget(UPReference)
        self.tb_UPtable.setObjectName("tb_UPtable")
        self.tb_UPtable.setColumnCount(0)
        self.tb_UPtable.setRowCount(0)
        self.gridLayout_2.addWidget(self.tb_UPtable, 0, 0, 1, 2)
        self.pb_UPEdit = QtWidgets.QPushButton(UPReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_UPEdit.setFont(font)
        self.pb_UPEdit.setObjectName("pb_UPEdit")
        self.gridLayout_2.addWidget(self.pb_UPEdit, 1, 0, 1, 1)
        spacerItem = QtWidgets.QSpacerItem(359, 25, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_2.addItem(spacerItem, 1, 1, 1, 1)
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setSpacing(6)
        self.gridLayout.setObjectName("gridLayout")
        self.pb_saveUP = QtWidgets.QPushButton(UPReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_saveUP.setFont(font)
        self.pb_saveUP.setObjectName("pb_saveUP")
        self.gridLayout.addWidget(self.pb_saveUP, 0, 0, 1, 1)
        spacerItem1 = QtWidgets.QSpacerItem(288, 25, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout.addItem(spacerItem1, 0, 1, 1, 1)
        self.pb_ExitUP = QtWidgets.QPushButton(UPReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_ExitUP.setFont(font)
        self.pb_ExitUP.setObjectName("pb_ExitUP")
        self.gridLayout.addWidget(self.pb_ExitUP, 0, 2, 1, 1)
        self.gridLayout_2.addLayout(self.gridLayout, 2, 0, 1, 2)

        self.retranslateUi(UPReference)
        QtCore.QMetaObject.connectSlotsByName(UPReference)

    def retranslateUi(self, UPReference):
        _translate = QtCore.QCoreApplication.translate
        UPReference.setWindowTitle(_translate("UPReference", "UPReference"))
        self.pb_UPEdit.setText(_translate("UPReference", "Редактировать"))
        self.pb_saveUP.setText(_translate("UPReference", "Сохранить"))
        self.pb_ExitUP.setText(_translate("UPReference", "Закрыть"))
