import csv
import re
import os

def writeCSV(Filename, data):
    with open(Filename, "w+",encoding='cp1251', newline="") as File:
        for i in data: 
            writer=csv.writer(File)
            writer.writerow(i.values())
    File.close()

def AUDreadCSV(Filename):
    with open(Filename, "r", newline="") as file:
        datas=[]
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'AudienceName': row[0], 'AudiencePO' :row[1] , 'AudienceTO':row[2], 'AudienceNaimenovanie' : row[3]}
                    datas.append(record)
    return datas



def PPSreadCSV(Filename):
    with open(Filename, "r", newline="") as file:
        datas=[]
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    temp = re.findall(r'\d+', row[1])
                    res = list(map(int, temp))
                    record={'FIO': row[0],'Uslovia': res, "Dolzhnost": int(row[2]), "Stepen": int(row[3]), "Zvanie": int(row[4]), 'Napravlenie': row[5], 'Education' : row[6] }
                    datas.append(record)
    return datas


def UPreadCSV(Filename):
    with open(Filename, "r", newline="") as file:
        datas=[]
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'NameUD': row[0], 'NumberUD' : row[1], 'FIO': row[2], "Audience":row[3], 'IntensityUD': int(row[4]), 'CreditUnit' : int(row[5]), 'TimeUD' : int(row[6]), 'LectionUD' : int(row[7]), 'PracticeUD' : int(row[8]), 'LabWorkUD' : int(row[9]) }
                    datas.append(record)
    return datas


def TeacherreadCSV(Filename):
    with open(Filename, "r", newline="") as file:
        datas=[]
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    datas.append(row[0])
    return datas


def readMTODisc(Filename1):
    datas=[]
    record={}
    with open(Filename1, "r", newline="") as file:
        csv_dict = [row for row in csv.reader(Filename1)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'Discipline':row[0], 'AudienceName':row[3]}
                    datas.append(record)
    return datas

def readMTOAUD(Filename):
    record={}        
    datas=[]
    with open(Filename, "r", newline="") as file:
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'AudienceName': row[0], 'AudiencePO' :row[1] , 'AudienceTO':row[2], 'AudienceNaimenovanie' : row[3]}
                    datas.append(record)
    return datas


def matchingMTO(data1,data2):
    result=[]
    for data in data1:
        for dat in data2:
            if data.get("AudienceName")==dat.get("AudienceName"):
                data.update(dat)
                del data["AudienceName"]
                result.append(data)
    return result


def readKODisc(Filename1):
    datas=[]
    record={}
    with open(Filename1, "r", newline="") as file:
        csv_dict = [row for row in csv.reader(Filename1)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'Discipline':row[0], 'FIO':row[2]}
                    datas.append(record)
    return datas

def readKOTeacher(Filename):
    record={}        
    datas=[]
    with open(Filename, "r", newline="") as file:
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    temp = re.findall(r'\d+', row[1])
                    res = list(map(int, temp))
                    record={'FIO': row[0],'Uslovia': res, "Dolzhnost": int(row[2]), "Stepen": int(row[3]), "Zvanie": int(row[4]), 'Napravlenie': row[5], 'Education' : row[6] }
                    datas.append(record)
    return datas


def matchingKO(data1,data2):
    result=[]
    for data in data1:
        for dat in data2:
            if data.get("FIO")==dat.get("FIO"):
                data.update(dat)
                result.append(data)
    return result
