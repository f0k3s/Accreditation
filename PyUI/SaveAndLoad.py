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


#data=[{'FIO': "self.fPPS",'Uslovia': [True,True,True], "Dolzhnost": "1", "Stepen": "1", "Zvanie": "1", 'Napravlenie': "self.nPPS", 'Education' : "self.ePPS" }]

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

#writeCSV("db.csv",data)
#print(PPSreadCSV('db.csv'))

def UPreadCSV(Filename):
    with open(Filename, "r", newline="") as file:
        datas=[]
        csv_dict = [row for row in csv.reader(Filename)]
        if len(csv_dict) != 0:
            reader = csv.reader(file)
            for row in reader:
                if row:
                    record={'NameUD': row[0], 'NumberUD' : row[1], 'IntensityUD': int(row[2]), 'CreditUnit' : int(row[3]), 'TimeUD' : int(row[4]), 'LectionUD' : int(row[5]), 'PracticeUD' : int(row[6]), 'LabWorkUD' : int(row[7]) }
                    datas.append(record)
    return datas
