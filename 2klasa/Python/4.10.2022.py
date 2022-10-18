#l=[[0,0,0,0], [0,0,0,0],[0,0,0,0],[0,0,0,0]]   # tablica z 1- kami po przekatnej

#for i in range(4):
#    for j in range(4):
#        if i==j:
#            l[i][j]=1

#for i in l:
#    for j in i:
#        print(j,end=' ')
#    print()

#t=[]        #tablica n elementowa
#n=int(input("podaj liczbe elementow: "))
#for i in range(n+1):
#    t.append(input("podaj element: "))

#for i in range(n+1):
#    print(t[i],end=' ')
#t.sort()# sortwanie tablicy

t=[[]]
m=int(input("podaj m: "))
n=int(input("podaj n: "))

for i in range(m):
    t.append([])
    for j in range(n):
        t[i].append(int(input("podaj liczbe: ")))

for i in t:
    for j in i:
        print(j, end= '')
    print()

sum=0
for i in range(m):
    for j in range:
        if(i%2!=0):
            sum+=t[i][j]
print(sum)

for i in range(m):
    for j in range(n):
        if t[i][j]<0;
            t[i][j]-=2

flag = True
for i in range(m):
    for j in range(n):
        if t [i][j]>=10 and flag==True:
            print("liczba wieksza od 10")
            flag=False
if flag==True:
    print("nie ma liczby wiekszej od  10")


