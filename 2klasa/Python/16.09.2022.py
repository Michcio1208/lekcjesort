#a=int(input("podaj liczbe1: "))
#b=int(input("podaj liczbe2: "))
#if a==5  and b==10:
#    print("a=5 i b=10 essa")
#else:
#    print("blad")

#a=int(input("podaj liczbe1: "))
#b=int(input("podaj liczbe2: "))
#if a==5  or b==10:
#    print("a=5 lub b=10 essa")
#else:
#    print("blad")

#a=int(input("podaj liczbe: "))
#s=0
#l=0
#for i in range (0,a):
#    print(l)
#    s=s+5
#    l=l+s

# Program to check if a number is prime or not

a=int(input("podaj liczbe1: "))
b=int(input("podaj liczbe2: "))
s=0
for num in range (a,b+1):

    if num > 1:

        for i in range(2, num):
            if (num % i) == 0:
                break

        else:
         s=s+1
print("Jest tyle liczb pierwszych: ",s)

