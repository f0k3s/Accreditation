import re

class AudienceValidator:

    def __init__(self):
        pass

    def AudNameValid(self,AudName):
        Truth=False
        RegExp= r"^[А-я]{1}\-[\d]{3}$"
        if re.fullmatch(RegExp,AudName)!=None:
            Truth=True
        return Truth
    
    def AudNaimenValid(self,NaimenString):
        Truth=False
        RegExp= r"^([\ ]?[(\)?)А-я(\)?)]+[\ :,.]?([\d]+(([\-\.])?([\d]+)?)([\-\.])?)?)+"
        if re.fullmatch(RegExp,NaimenString)!=None:
            Truth=True
        return Truth

    def AudTOValid(self, TOString):
        Truth=False
        RegExp= r"^(([\ ]?[(\)?)А-я(\)?)]+([\ :,.;\-]+)?([\d]+(([\-\.])?([\d]+)?)([\-\.])?)?)+)"
        if re.fullmatch(RegExp,TOString)!=None:
            Truth=True
        return Truth

    def AudPOValid(self, POString):
        Truth=False
        RegExp= r"^(([\ ]?[(\)?)\w(\)?)]+([\№\ :,.;\-]+)?([\d]+(([\-\.])?([\d]+)?)([\-\.])?)?)+)"
        if re.fullmatch(RegExp,POString)!=None:
            Truth=True
        return Truth



class PPSValidator:

    def __init__(self):
        pass

    def FIOValid(self,FIO):
        Truth=False
        RegExp= r"^([\w]+(\ )?){3}$"
        if re.fullmatch(RegExp,FIO)!=None:
            Truth=True
        return Truth

    def NaprPodgotov(self, NaprPodgotov):
        Truth=False
        RegExp= r"^(([\ ]?[(\)?)\w(\)?)]+([\«\»\№\ :,.;\-]+)?([\d]+(([\-\.])?([\d]+)?)([\-\.])?)?)+)"
        if re.fullmatch(RegExp,NaprPodgotov)!=None:
            Truth=True
        return Truth

    def EducationValid(self, Education):
        Truth=False
        RegExp= r"^(([\ ]?[(\)?)\w(\)?)]+([\«\»\№\ :,.;\-]+)?([\d]+(([\-\.])?([\d]+)?)([\-\.])?)?)+)"
        if re.fullmatch(RegExp,Education)!=None:
            Truth=True
        return Truth
