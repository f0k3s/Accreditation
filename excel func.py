import xlwt 
from xlwt import Workbook 
  
# Workbook is created 
wb = Workbook() 
  
# add_sheet is used to create sheet. 
sheet1 = wb.add_sheet('Sheet 1') 
  
sheet1.write(1, 0, 'орТём лох') 
sheet1.write(2, 0, '123') 
sheet1.write(3, 0, 'Тест') 
sheet1.write(4, 0, 'ы') 
sheet1.write(5, 0, 'ыыыыы') 
sheet1.write(0, 1, 'ыыыыыыыы') 
sheet1.write(0, 2, 'ыы') 
sheet1.write(0, 3, 'ы') 
sheet1.write(0, 4, 'нет') 
sheet1.write(0, 5, 'ыыыы') 
  
wb.save('xlwt example.xls') 
