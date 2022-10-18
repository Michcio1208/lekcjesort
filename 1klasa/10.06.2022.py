#a="2"
#b="3"
#print(a+b)  #dodawanie "intow"
#print(int(a)+int(b))  #wartosci liczbowe intow

#a=int(input("podaj a: ")) #pole prostokata
#b=int(input("podaj b: "))
#print(a*b)

#a=int(input("podaj a: ")) #pole trapezu
#b=int(input("podaj b: "))
#h=int(input("podaj h: "))
#p = (a+b)*h/2
#print(p)

#if
#a=int(input("podaj a: "))
#if a>10:
#    print("a>10")
#else:
#    print("a<=10")


#a=int(input("podaj a: "))  #wyswietla wieksza liczbe
#b=int(input("podaj b: "))
#if a>b:
#    print("a>b")
#elif a<b:
#    print("a<b")
#else:
#    print("a=b")

#nierownosc trojkata
#a=int(input("podaj a: "))
#b=int(input("podaj b: "))
#c=int(input("podaj c: "))

#if a+b>c and b+c>a and c+a>b: # and == &&
#    print("mozna zbudwoac taki trojkat ")
#else:
#    print("nie mozna")

#delta, ile jest rozwiazan
import math

#a=int(input("podaj a: "))
#b=int(input("podaj b: "))
#c=int(input("podaj c: "))

#d=(b*b)-4*a*c
#if d>0:
#    print("sa 2 rozwiazania")
#elif d=0:
#    print("jest 1 rozwiazanie ")
#else:
#    print("nie ma rozw")

a=int(input("podaj a: "))
b=int(input("podaj b: "))
c=int(input("podaj c: "))
if a<=b and b<=c:
    print("tak")
else:
    print("nie")