#include <iostream>
#include <math.h>
using namespace std;

int lustro(int n){ //czy sa pierwsze i lustrzane 6.5
int l=0;
while(n!=0){
    l=l*10+n*10;
    n/=10;

}
return 1;

}

bool pierwsza(int n){
if(n<2) return false;

for(int i =2;i*i<=n;i++)
{
   if(n%i==0)return false;
}
 return true;

}

bool mirror(int x, int y)
{
    return pierwsza(x) && pierwsza(y) && lustro(x)==y;
}














int main()
{
  /*  int x,y;
cin>>x>>y;
mirror(x,y)? cout<<"tak": cout<<"nie";


int a,b; //czy liczba jest kawdratem l.pierwszej
cin>>a;
b=sqrt(a);
pierwsza(b) ? cout<<"Tak" : cout<<"Nie";

  int n;
  cin>>n;
  for(int i=0;i*i<=n;i++)
  {
      int droga=n/i;
      if( pierwsza(i) && pierwsza(droga)){

        cout<<i<<" i "<<droga;
        break;
      }
  }
*/
int a,b,c,d,e,f;
cout<<"Podaj licznik i mianownik pierszwego ulamka: "<<endl;
cin>>a>>b;
cout<<"Podaj licznik i mianownik drugiego ulamka: "<<endl;
cin>>c>>d;
cout<<a*d+b*c<<"/"b*d<<endl;

}
