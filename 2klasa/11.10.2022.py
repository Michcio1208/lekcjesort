'''
n=int(input("podaj liczbe: "))   #tablica 123, 10 11 12 13
for i in range(0,n*10,10):
    for j in range(n):
        print(j+i,end=' ')
    print()


n=int(input("podaj liczbe: "))   #tablica 123, 10 11 12 13 wertykalnie
for i in range(n):
    for j in range(0,n*10,10):
        print(j+i,end=' ')
    print()


t=[                         #slad macierzy (dodawanie po przekatnej)
    [1,2,3,4],
    [5,6,7,8],
    [9,10,11,12],
    [13,14,15,16]
]
s=0
for i in range(4):
    s+=t[i][i]
print("slad macierzy to : ",s)

'''

t=[]    #2.17/70
#a
for i in range(5):
    t.append([])
    for j in range(6):
        t[i].append(i+j)
#b
for i in t:
    for j in i:
        print(j,end='')
    print()
  #c,d
for i in range(5):
    t[i][1], t[i][2] = t[i][2],t[i][1]
a= int(input( "podaj 1 wiersz 0-4: "))
b= int(input( "podaj 2 wiersz 0-4: "))

for i in range(6):
    t[a][i], t[b][i] = t[b][i], t[a][i]

for i in t:
    for j in i:
        print(j,end='')
    print()