#include <iostream>

using namespace std;

bool pierw(int n)   //sprawdzamy czy n jest liczba pierwsza
{                    // ( definicja )fakttoryzacja to rozklad liczby wieksz. od 1 na czynniki pierwsze
if(n<2)
    return false;
for(int i=2;i*i<=n;i++)
{
  if(n%i==0) return false;
}
    return true;




}
int main()
{

 /*  int a;
   cout<<"Podaj a "<<endl;
   cin>>a;
   if( pierw(a))
   {
       cout<<"jest"<<endl;
   }
   else
    cout<<"nie jest"<<endl;


*/


int n,a,dzielnik;
a=0;                  //faktoryzacja + suma czynnikow
cout<<"podaj n "<<endl;
cin>>n;
dzielnik=2;
while(n%dzielnik<=n)
{
    while(n%dzielnik ==0)
    {
        cout<<dzielnik<<endl;
        n/=dzielnik;
    a=a+dzielnik;
    }

dzielnik+=1;

if( pierw(a))cout<<"tak"<<endl;

}













}
