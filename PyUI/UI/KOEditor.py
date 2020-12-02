# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\f0kes\Desktop\ACCR\QtGui\QtGui\KOReference.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_KOReference(object):
    def setupUi(self, KOReference):
        KOReference.setObjectName("KOReference")
        KOReference.resize(503, 418)
        self.gridLayout_2 = QtWidgets.QGridLayout(KOReference)
        self.gridLayout_2.setContentsMargins(11, 11, 11, 11)
        self.gridLayout_2.setSpacing(6)
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.tableWidget = QtWidgets.QTableWidget(KOReference)
        self.tableWidget.setObjectName("tableWidget")
        self.tableWidget.setColumnCount(0)
        self.tableWidget.setRowCount(0)
        self.gridLayout_2.addWidget(self.tableWidget, 0, 0, 1, 2)
        self.pb_editKO = QtWidgets.QPushButton(KOReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_editKO.setFont(font)
        self.pb_editKO.setObjectName("pb_editKO")
        self.gridLayout_2.addWidget(self.pb_editKO, 1, 0, 1, 1)
        spacerItem = QtWidgets.QSpacerItem(359, 25, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_2.addItem(spacerItem, 1, 1, 1, 1)
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setSpacing(6)
        self.gridLayout.setObjectName("gridLayout")
        self.pb_saveKO = QtWidgets.QPushButton(KOReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_saveKO.setFont(font)
        self.pb_saveKO.setObjectName("pb_saveKO")
        self.gridLayout.addWidget(self.pb_saveKO, 0, 0, 1, 1)
        spacerItem1 = QtWidgets.QSpacerItem(288, 25, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout.addItem(spacerItem1, 0, 1, 1, 1)
        self.pb_ExitKO = QtWidgets.QPushButton(KOReference)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_ExitKO.setFont(font)
        self.pb_ExitKO.setObjectName("pb_ExitKO")
        self.gridLayout.addWidget(self.pb_ExitKO, 0, 2, 1, 1)
        self.gridLayout_2.addLayout(self.gridLayout, 2, 0, 1, 2)

        self.retranslateUi(KOReference)
        QtCore.QMetaObject.connectSlotsByName(KOReference)

    def retranslateUi(self, KOReference):
        _translate = QtCore.QCoreApplication.translate
        KOReference.setWindowTitle(_translate("KOReference", "KOReference"))
        self.pb_editKO.setText(_translate("KOReference", "Редактировать"))
        self.pb_saveKO.setText(_translate("KOReference", "Сохранить"))
        self.pb_ExitKO.setText(_translate("KOReference", "Закрыть"))
