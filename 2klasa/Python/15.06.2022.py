#for i in range(10):  #for
#    print(i)

#for i in range(2,10,2):  # od ile , do ile , co ile
 #   print(i)

 #while

 #a =1
 #while a<10:
 #    print(a)
 #    a=a+1


#s = 0
#n = int(input("podaj n "))
#for i in range(2, n + 1, 2):
#    s += i
#print(f'sum:{s}')


#n=int(input("podaj n: "))  #liczby z przedzialu n do m podzielne przez k
#m=int(input("podaj m: "))
#k=int(input("podaj k: "))

#for i in range(n,m+1):
#    if i % k == 0:
#        print(i)

#jezeli podzielna przez 4 i 3 to wyswietla hurra jak nie to *
n=int(input("podaj n: "))
m=int(input("podaj m: "))

for i in range(n,m+1):
    if i%12==0: print("hurra")
    else: print("*")