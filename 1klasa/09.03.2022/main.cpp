#include <iostream>

using namespace std;

double oblicz(int n)  //a
{
if(n==1)return 2;
return 3*oblicz(n-1)+0.5;
}                               //4.8/98(P)

double oblicz1(int n) //b
{
if(n==1)return 0.5;
if(n==2)return 1;
return 3*oblicz1(n-2)+oblicz1(n-1);

}
double a(int n) //c
{
if(n==1)return 2;
if(n==2) return -4;
return a(n-2)+2*a(n-1)+0.5;
}
double b(int n) //d
{
if(n==1)return -1.5;
if(n==2) return 0;
if(n==3) return 1.5;
return 2*b(n-3)+b(n-2)-b(n-1);
}
double c(int n) //e
{
if(n==1)return 1;
if(n==2) return 3;
if(n==3) return 3;
return c(n-3)+2*c(n-1);
}










 double d(int n) //4.10 a
 {
     if(n==1) return 2;
 if(n%2!=0) return 3*d(n-1);
    return d(n-1)+4;
 }

 double e(int n)  //b
 {
     if(n==1) return -2;
     if(n==2) return 3;
     if(n%2!=0) return 2*e(n-2);
     return 3*e(n-1)-e(n-2)+1;
 }



int main()
{
 double wynik,a;
 cin>>a;
 wynik=d(a);
cout<<wynik;


























}
