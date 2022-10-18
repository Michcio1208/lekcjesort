#1
v=int(input("podaj v m/s: "))
v2=v/3.6
print(v," km/h to ",v2," m/s")

#2
x=int(input("podaj x: "))
y=int(input("podaj y: "))
z=int(input("podaj z: "))
if x >= y and x >= z :
    print(x)
    if y >= z:
        print(y)
        print(z)
    else:
        print(z)
        print(y)
elif y >= x and y >= z :
    print(y)
    if x >= z:
        print(x)
        print(z)
    else:
        print(z)
        print(x)
elif z >= y and z >= x :
    print(z)
    if y >= x:
        print(y)
        print(x)
    else:
        print(x)
        print(y)

#3
a=int(input("podaj liczbe osob 1: "))
b=int(input("podaj liczbe osob 2: "))
c=int(input("podaj ilosc salatki: "))
d=(c/b)*a
print("Potrzeba ",d,"salatki")

#4
s=int(input("podaj srednia klasy : "))
f=int(input("podaj frekwencje klasy w procentach: "))
pkt=0
if s >= 4.0 and f >= 94:
    pkt= pkt+20
else:
    pkt = pkt +0
print("Klasa ma ",pkt," punktow")

#5
m=int(input("podaj pierwsza liczbe : "))
n=int(input("podaj druga liczbe: "))
l=int(input("podaj trzecia liczbe: "))
if n > m and l > m:
    print(m," jest najmniejsza")
elif n > l and m > l:
    print(l," jest najmniejsza")
elif m > n and l > n:
    print(n," jest najmniejsza")
else:
    print("nie ma jednej najmniejszej liczby")

#6
h=int(input("podaj wysokosc: "))
r=int(input("podaj promien: "))
if h < 0 or r < 0:
    print("blad")
else:
    obj=((r*r)*3.14)*h
print("Objetosc wynosi: ",obj)