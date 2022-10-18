#lista=[[1,2,3],[1,2,3]]   #tablica dwuwymiarowa i jej wyswietlanies

#for i in range(2):
#    for j in range(3):
#        print(lista[i][j], end='')
#    print()

#lista=[[0,0,0,0],[0,0,0,0],[0,0,0,0]]   #tablica dwuwymiarowa i jej wyswietlanies
#iloczyn=1
#s=0

#for i in range(3):
#    for j in range(4):
#        lista[i][j]=int(input("podaj wartosc: "))

#for i in range(3):
#    for j in range(4):
#        print(lista[i][j]," ", end='')
#    print()

#end = False
#for i in range(3):
#    for j in range(4):
#        if lista[i][j] > 4:
#            print("isntieje liczba wieksza od 4")
#            end=True
#            break
#        if end==True:
#            break
#if end == False:
#   print("W tablicy nie istnieje liczba wieksza od 4")

#for i in range(3):
#    for j in range(4):
#        if lista[i][j]% 7 != 0:
#            iloczyn=iloczyn*lista[i][j]
#print("iloczyn liczb nie podzilenych przez 7  to ",iloczyn)

#for i in range(3):
#    for j in range(4):
#        if i*j>0:
#            s+=1
#print("jest ",s," liczb ktorych iloczyn indeksow jest dodatni")


#for i in lista: #wyswietlenie tablicy
#    print(i)



#for row in lista:  #wyswietlenie tablicy
#    for col in row:
#        print(col, end='')
#    print()

l=[[0,0,0],[0,0,0]]
s=0
for i in l:
    for j in i:
        int(input("podaj wartosc: "))
    print()

for i in l:
    for j in i:
        if i%2 == 0:
            s+=1
print("Suma liczb ktorych numer wiersza jest parzysty to ",s)

for i in l:
    for j in i:
        if l[i][j]<0;
            l[i][j]-=2

for row in lista:  #wyswietlenie tablicy
   for col in row:
    print(col, end='')
print()

tak=True
for i in l:
    for j in i:
        if j>=10;
        tak=False
        print("isntieje")
        break
    if tak == False:
        break
    if tak== True:
        print("wszystkei sa")





