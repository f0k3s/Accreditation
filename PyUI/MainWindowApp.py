
"""!!!Файл взаимодействия главного окна с дочерними окнами!!!"""


import sys
import re
import os
import comtypes.client
import time

from PyQt5 import QtCore, QtGui, QtWidgets

"""Импорт файлов интерфейса"""
from PPSEditor import Ui_PPSReference
from MainWindow import Ui_MainWindow
from UPSelector import Ui_UPSelection
from UPEditor import Ui_UPReference
from TeacherSelector import Ui_TeacherSelection
from GNEditor import Ui_GNReference
from AudienceDB_Edit import *
from KODB_Editor import *

#Импорт функций генерации документов
import DocxGeneratingDef
#Импорт функции для конвертации файла
import convertDocxToPDF
#Импорт валидатора
import Validator

"""Инициализация классов интерфейса для их вызова в приложении"""

#Класс выбора преподавателя и дисциплины
class TeacherSelectorWindow(QtWidgets.QWidget, Ui_TeacherSelection):
    def __init__(self,parent=None):
        super(TeacherSelectorWindow, self).__init__(parent)
        self.setupUi(self)
        self.parent=parent
        #Работа кнопок
        self.pb_SaveTeacher.clicked.connect(self.closeEvent)
        self.pb_editTeacher.clicked.connect(self.openPPSEditor)
    #Обаботка сигнала закрытия окна (закрывается дочернее окно, открывается родительское)
    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()
    
    def openPPSEditor(self):
        self.PPSEditingWindow=PPSEditorWindow()
        self.PPSEditingWindow.show()
        self.hide()


#Класс редактора аудиторий
class AudienceEditorWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super(AudienceEditorWindow, self).__init__()

        self.counter=0

        self.ui=Ui_Audience_Editor()

        self.ANDialogUi=AudNameDialog()
        self.ANDialogUi.setupUi(self)

        self.ANMDialogUi=AudNaimDialog()
        self.ANMDialogUi.setupUi(self)

        self.ATDialogUi=AudTODialog()
        self.ATDialogUi.setupUi(self)

        self.APDialogUi=AudPODialog()
        self.APDialogUi.setupUi(self)

        self.ui.setupUi(self)

        self.ui.pb_Add.clicked.connect(self.validation)

    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()

    #Валидатор полей справочника аудиторий
    def validation(self):
        self.AudValid=Validator.AudienceValidator()

        self.AudName=self.ui.le_AudienceName.text()

        self.AudNaim=self.ui.tE_Naimen.toPlainText()
        self.AudTO=self.ui.tE_AudienceTO.toPlainText()
        self.AudPO=self.ui.tE_PO.toPlainText()

        if (self.AudValid.AudNameValid(self.AudName))==True:
            print("True")
            self.counter+=1
        else:
            self.ANDialogUi.show()
        
        if (self.AudValid.AudNaimenValid(self.AudNaim))==True:
                print("True")
                self.counter+=1
        else:
            self.ANMDialogUi.show()

        if (self.AudValid.AudTOValid(self.AudTO))==True:
                print("True")
                self.counter+=1
        else:
            self.ATDialogUi.show()

        if (self.AudValid.AudPOValid(self.AudPO))==True:
                print("True")
                self.counter+=1
        else:
            self.APDialogUi.show()
            


#Класс выбора группы
class GNEditorWindow(QtWidgets.QWidget, Ui_GNReference):
    def __init__(self,parent=None):
        super(GNEditorWindow, self).__init__(parent)
        self.setupUi(self)
        self.parent=parent

        self.pb_ExitGN.clicked.connect(self.closeEvent)
        self.pb_SaveGN.clicked.connect(self.closeEvent)

    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()


#Класс редактирования ППС
class PPSEditorWindow(QtWidgets.QWidget):
    def __init__(self,parent=None):
        super(PPSEditorWindow, self).__init__(parent)
        self.parent=parent
        self.setupUi(self)

    def closeEvent(self,event):
        self.TeacherSelectionWindow=TeacherSelectorWindow()
        self.TeacherSelectionWindow.show()
        self.hide()


#Класс Редактирования КО
class KOEditorWindow(QtWidgets.QMainWindow):
    def __init__(self,):
        super(KOEditorWindow, self).__init__()
        self.ui=Ui_KO_Editor()
        self.ui.setupUi(self)
        self.counter=0

        self.FIODialogUi=FIODialog()
        self.FIODialogUi.setupUi(self)

        self.NaprPodgotovDialogUi=NaprPodgotovDialog()
        self.NaprPodgotovDialogUi.setupUi(self)

        self.EducationDialogUi=EducationDialog()
        self.EducationDialogUi.setupUi(self)

        self.ui.pb_Add.clicked.connect(self.validation)

    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()

    
    #Валидатор полей справочника аудиторий
    def validation(self):
        self.PPSValid=Validator.PPSValidator()

        self.FIO=self.ui.le_FIO.text()

        self.NaprPodgotov=self.ui.tE_NaprPodgotov.toPlainText()
        self.Education=self.ui.tE_NaprPodgotov.toPlainText()

        if (self.PPSValid.FIOValid(self.FIO))==True:
            print("True")
            self.counter+=1
        else:
            self.FIODialogUi.show()
        
        if (self.PPSValid.NaprPodgotov(self.NaprPodgotov))==True:
                print("True")
                self.counter+=1
        else:
            self.NaprPodgotovDialogUi.show()

        if (self.PPSValid.EducationValid(self.Education))==True:
                print("True")
                self.counter+=1
        else:
            self.EducationDialogUi.show()


#Класс выбора УП
class UPSelectorWindow(QtWidgets.QWidget, Ui_UPSelection):
    def __init__(self,parent=None):
        super(UPSelectorWindow, self).__init__(parent)
        self.setupUi(self)
        self.parent=parent

        self.pb_saveUP.clicked.connect(self.closeEvent)

    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()


#Класс редактирования УП
class UPEditorWindow(QtWidgets.QWidget, Ui_UPReference):
    def __init__(self,parent=None):
        super(UPEditorWindow, self).__init__(parent)
        self.setupUi(self)
        self.parent=parent

        self.pb_saveUP.clicked.connect(self.closeEvent)
        self.pb_ExitUP.clicked.connect(self.closeEvent)

    def closeEvent(self,event):
        self.MainAppWindowShow=MainAppWindow()
        self.MainAppWindowShow.show()
        self.close()
    

#Класс главного окна
class MainAppWindow(QtWidgets.QMainWindow, Ui_MainWindow):
    def __init__(self):
        super(MainAppWindow, self).__init__()
        self.setupUi(self)
        self.setWindowTitle("Приложение для генерации справок")

        #Вызов файлового менеджера
        self.action_Open.triggered.connect(self.openFile)
        #Создание файла
        self.action_Save.triggered.connect(self.saveFile)

        """Кнопки вызова дочерних окон"""
        self.pb_KOChange.clicked.connect(self.openTeacherSelector)
        self.action_PPS.triggered.connect(self.openKOEditor)
        self.pb_UPChange.clicked.connect(self.openUPSelector)
        self.action_UP.triggered.connect(self.openUPEditor)
        self.pb_Group.clicked.connect(self.openGNEditor)
        self.pb_MTOChange.clicked.connect(self.openAudienceEditor)
        self.action_Audience.triggered.connect(self.openAudienceEditor)

    #Функция вызова файлового менеджера
    def openFile(self):
        self.filenameDocx = QtWidgets.QFileDialog.getOpenFileName(self, "Выберите файл", os.getcwd(), ".DOCX Файлы (*.docx)")
        directory=str(self.filenameDocx)
        docxDirectory=""
        counter=0
        for i  in range(2,len(directory)):
            if directory[i]=="\'":
                counter+=1
            if counter<1:
                docxDirectory=docxDirectory+directory[i]

        self.filenamePDF = QtWidgets.QFileDialog.getSaveFileName(self, "Выберите файл", os.getcwd(), ".pdf Файлы (*.pdf)")
        directory=str(self.filenamePDF)
        PDFDirectory=""
        counter=0
        for i  in range(2,len(directory)):
            if directory[i]=="\'":
                counter+=1
            if counter<1:
                PDFDirectory=PDFDirectory+directory[i]

        convertDocxToPDF.convertDocxToPdf(docxDirectory,PDFDirectory)

    def saveFile(self):
        self.filename=QtWidgets.QFileDialog.getSaveFileName(self, "Выберите файл", os.getcwd(), ".DOCX Файлы (*.docx)")
        directory=str(self.filename)
        cleanDirectory=""
        counter=0
        for i  in range(2,len(directory)):
            if directory[i]=="\'":
                counter+=1
            if counter<1:
                cleanDirectory=cleanDirectory+directory[i]

        DocxGeneratingDef.allInOne(cleanDirectory)

    """Функции вызова дочерних окон"""
    def openTeacherSelector(self):
        self.TeacherSelectionWindow=TeacherSelectorWindow()
        self.TeacherSelectionWindow.show()
        self.hide()

    def openKOEditor(self):
        self.KOEditor=KOEditorWindow()
        self.KOEditor.show()
        self.hide()
  
    def openUPSelector(self):
        self.UPSelectWindow=UPSelectorWindow()
        self.UPSelectWindow.show()
        self.hide()

    def openUPEditor(self):
        self.UPEditingWindow=UPEditorWindow()
        self.UPEditingWindow.show()
        self.hide()

    def openGNEditor(self):
        self.GNEditingWindow=GNEditorWindow()
        self.GNEditingWindow.show()
        self.hide()

    def openAudienceEditor(self):
        self.AudienceEditingWindow=AudienceEditorWindow()
        self.AudienceEditingWindow.show()
        self.hide()
  
  
    



#Вызов программы
if __name__ == "__main__":
    app=QtWidgets.QApplication(sys.argv)
    MainWindow=MainAppWindow()
    MainWindow.show()
    sys.exit(app.exec_())


