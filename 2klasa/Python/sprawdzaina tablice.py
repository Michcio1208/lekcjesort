#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      krysteckimic
#
# Created:     21.10.2022
# Copyright:   (c) krysteckimic 2022
# Licence:     <your licence>
#-------------------------------------------------------------------------------

#1
t=[1,2,3,4,5,6,7,8,9,10]
for i in range(10):
    t[i]=t[i]*t[i]*t[i]
for i in t:
    print(i,end=' ')

#2
a=[-5,-4,-3,-2,1,2]
for i in range (6):
    if a[i] < 0:
        a[i]=0
for i in a:
    print(i,end=' ')

#3
b=[1,2,3,4,5,6,7,8,9,10]
for i in range (10):
    if(i % 2 !=0):
        print(i, end=' ')

#4
c=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
d=int(input("podaj 1 wiersz do zamiany: "))
e=int(input("podaj 2 wiersz do zamiany: "))
for j in range(4):
    c[d][j],c[e][j] = c[e][j],c[d][j]
f=int(input("podaj 1 kolumne do zamiany: "))
g=int(input("podaj 2 kolumne do zamiany: "))

for i in range(4):
    c[i][f],c[i][g] = c[i][g],c[i][f]

#5
T1=[5,6,2,2,3]
T2=[0,1,2,3,4]
T3=[]

for i in range(5):
    T3.append(T1[i]+T2[i])


#6
T=[]
for i in range(4):
    T.append([])
    for j in range(3):
        T[i].append(int(input("podaj liczbe: ")))

for i in T:
    for j in i:
        print(j,end=' ')
    print()

i=1
for i in T:
    for j in i:
      if(j % 5 == 0):
        i=i*j
print("iloczyn liczb podzielnych przez 5 to : ",i)

x=0
for i in range(4):
    for j in range(3):
        if(T[i][j]<7):
            T[i][j]+= 3

for i in T:
    m=i[0]
    n=0

for j in i:
    if(j<m):
        m=j
for j in i:
    if(m==j):
        n+=1






