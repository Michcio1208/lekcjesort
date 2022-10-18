#include <iostream>

using namespace std;

int silnia(int n){                     //<------ poza mainem !!!
     if(n==0) return 1;
     return silnia(n-1)*n;
    }

 int fibonacci(int n ){      //ciag fibonacciego
 if(n==0) return 0;
 if(n==1) return 1;
 return fibonacci(n-2)+fibonacci(n-1);



 }









int main()  //rekurencja
{
int wynik; //silnia
int a;
cin>>a;
wynik=silnia(a);
cout<<wynik<<endl;


int wynik2;  //ciag fibonacciego
int b;
cin>>b;
wynik2=fibonacci(b);
cout<<wynik2;






/* int silnia=1;  //silnia
 int n;
 cout<<"podaj n: "<<endl;
 cin>>n;
 for(int i =1; i<=n;i++)
 {
     silnia=silnia*i;

 }
      cout<<silnia<<endl;

     */

































}
