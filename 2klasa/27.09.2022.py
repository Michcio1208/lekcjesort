#lista=[10,12,11]              #tablice
#print(lista[0])

#x=[0,0,0,0,0,]             #wpisaywanie elementow do tablicy + wyswietalnie jej
#for i in range(0,5):
#    x[i]=int(input("podaje element: "))
#for i in range(0,5):
#    print(x[i])

#s=0         #suma elem tablicy
#x=[1,4,6,623,5]
#for i in range(0,5):
#    s+=x[i]
#print(s)

#p=1
#x=[2,2,4,6,4,3,2,3,7,8]
#for i in range(0,10):
#    if x[i]<6:
#        p*=x[i]
#print(p)

x=(int(input("podaj liczbe: ")))  #zapis dziesietny na binarny
b=[]
while(x>=1):
    b.append(x%2)
    x//=2
b.reverse()
print("liczba binarna ",end='')

for i in b:
    print(i,end='')
