# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'C:\Users\f0kes\Desktop\ACCR\QtGui\QtGui\UPSelection.ui'
#
# Created by: PyQt5 UI code generator 5.13.2
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets


class Ui_UPSelection(object):
    def setupUi(self, UPSelection):
        UPSelection.setObjectName("UPSelection")
        UPSelection.resize(537, 191)
        self.gridLayout_3 = QtWidgets.QGridLayout(UPSelection)
        self.gridLayout_3.setContentsMargins(11, 11, 11, 11)
        self.gridLayout_3.setSpacing(6)
        self.gridLayout_3.setObjectName("gridLayout_3")
        self.label = QtWidgets.QLabel(UPSelection)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.label.setFont(font)
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.gridLayout_3.addWidget(self.label, 0, 0, 1, 1)
        self.label_2 = QtWidgets.QLabel(UPSelection)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.label_2.setFont(font)
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.gridLayout_3.addWidget(self.label_2, 0, 1, 1, 1)
        self.label_3 = QtWidgets.QLabel(UPSelection)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.label_3.setFont(font)
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setObjectName("label_3")
        self.gridLayout_3.addWidget(self.label_3, 0, 2, 1, 1)
        self.cb_yearSelection = QtWidgets.QComboBox(UPSelection)
        self.cb_yearSelection.setObjectName("cb_yearSelection")
        self.gridLayout_3.addWidget(self.cb_yearSelection, 1, 0, 1, 1)
        self.cb_specSelection = QtWidgets.QComboBox(UPSelection)
        self.cb_specSelection.setObjectName("cb_specSelection")
        self.gridLayout_3.addWidget(self.cb_specSelection, 1, 1, 1, 1)
        self.cb_semestrSeleciton = QtWidgets.QComboBox(UPSelection)
        self.cb_semestrSeleciton.setObjectName("cb_semestrSeleciton")
        self.gridLayout_3.addWidget(self.cb_semestrSeleciton, 1, 2, 1, 1)
        spacerItem = QtWidgets.QSpacerItem(20, 249, QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Expanding)
        self.gridLayout_3.addItem(spacerItem, 2, 1, 1, 1)
        spacerItem1 = QtWidgets.QSpacerItem(338, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.gridLayout_3.addItem(spacerItem1, 3, 0, 1, 2)
        self.pb_saveUP = QtWidgets.QPushButton(UPSelection)
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pb_saveUP.setFont(font)
        self.pb_saveUP.setAutoRepeatDelay(300)
        self.pb_saveUP.setAutoRepeatInterval(100)
        self.pb_saveUP.setObjectName("pb_saveUP")
        self.gridLayout_3.addWidget(self.pb_saveUP, 3, 2, 1, 1)

        self.retranslateUi(UPSelection)
        QtCore.QMetaObject.connectSlotsByName(UPSelection)
        UPSelection.setTabOrder(self.cb_yearSelection, self.cb_specSelection)
        UPSelection.setTabOrder(self.cb_specSelection, self.cb_semestrSeleciton)
        UPSelection.setTabOrder(self.cb_semestrSeleciton, self.pb_saveUP)

    def retranslateUi(self, UPSelection):
        _translate = QtCore.QCoreApplication.translate
        UPSelection.setWindowTitle(_translate("UPSelection", "GroupSelection"))
        self.label.setText(_translate("UPSelection", "Год набора"))
        self.label_2.setText(_translate("UPSelection", "Выбор специальности"))
        self.label_3.setText(_translate("UPSelection", "Семестр"))
        self.pb_saveUP.setText(_translate("UPSelection", "Сохранить"))
