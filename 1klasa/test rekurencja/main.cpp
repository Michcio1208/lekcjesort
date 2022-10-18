#include <iostream>

using namespace std;

//zad.1 hanoi

void hanoi(int n,char a, char b, char c){
if(n>0){
    hanoi(n-1,a,c,b);
    cout<<a<<" na "<<b<<endl;
    hanoi(n-1,c,b,a);

}
}

 //zad.2 fibonacci

 int fib(int n){
 if(n<3) return 1;
 return fib(n-2)+fibo(n-1);
  }
//zad.3

//odejmowanie-rek
int nwdor(int a, int b){
if(a!=b)
    return nwdor(a>b?a-b:a,b>a?b-a:b)
    return a;
}


 //odejmowanie-iteracja

int nwdoi(int a, int b){
while(a!=b)
    if(a>b)
    a=a-b;
else b=b-a;
     return a;
}
//dzielenie-rek

int nwddr(int a, int b){
if(b==0){
    return a;
}
return nwddr(b,a%b);
}
//dzielenie-iteracja
nwddi(int a, int b){
int c;
while(b!=0)
{
    c=a;
    a=b;
    b-c%b;
}
return a;
}

//zad.4
//rekurencja

int ar(int n){
if(n==1) return 1;
return 2*ar(n-1);
}

//iteracja

int ai(int n){
int w=1;
for(int i=2;i<=n;i++){
        w*=2;
}
return w;
}
 //zad 5
 //a
 int b(int n ){
 if(n==1) return 2;
 if(n==2) return 4;
 if((n%2)!=0) return 2*b(n-2)+b(n-1)+3;
 if((n%2)!=0) return 4*b(n-1)-b(n-2)+5;

 }

//b

int c(int n){
if(n==1) return 1;
if(n==2) return 2;
if(n==3) return 3;
if(n>3) return c(n-3)+c(n-2)-2*c(n-1);

}





int main()
{












}
