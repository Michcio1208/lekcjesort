#1
n=int(input("podaj liczbe nat: "))
for i in range(0,n):
    print("kwadrat ",i," to ",i*i)


#2
a=int(input("podaj liczbe liczb  nat: "))
s=0
for i in range(n):
    b = int(input("podaj liczbe nat: "))
    s+=b
print("srednia arytmemtyczna to ",s/n)


#3
m=int(input("podaj liczbe nat: "))
p=1
print(p)
while(p<=m):
    p*=3
    print(p)


#4
x=int(input("podaj liczbe nat: "))
if x%3==0 and x%4==0:
    print("hurra")
elif x%3==0:
    print("podzielna przez 3")
elif x%4==0:
    print("podzielna przez 4")
else:
    print("*")

#5
y=int(input("podaj liczbe nat: "))

def pie(y):
    for i in range(1,y+1):
        print(i*'#')
for j in range(1,y+1):
    pie(j)

#6
n=int(input("podaj liczbe nat: "))
for i in range(1,(n*2)+1,2):
    print(((n*2)-i)//2*' ', end=' ')

    print((i//2)* '*', end='')
    if(i>1):
        print('|',end='')
    else:
        print('*',end='')
    print((i//2)* '*')
