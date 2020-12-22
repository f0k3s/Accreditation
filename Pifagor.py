
def pifagor(a, b):
    if isinstance(a, str) or isinstance(b, str):
        return "Вы ввели строку."
    if (a<=0) or (b<=0):
        return "Некорректные данные."
    else:
        return round((a**2+b**2)**0.5, 3)

a = 3.5
b = 4

print(pifagor(a, b))