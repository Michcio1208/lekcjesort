#include <iostream>

using namespace std;
/*int NWD(int a,int b){
while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        }
return a;*/





int euklides(int a, int b){

if(a!=b)
    return euklides (a>b ? a-b: a, b>a ? b-a: b);//inny zapis if'a


return a;
}








int main()
{
  /*  int a,b;
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        }
cout<<"nwd to: "<<a<<endl;*/
 /*int a,b;
 cout<<"Podaj liczby "<<endl;
 cin>>a>>b;
 cout<<"NWD "<<a<<" i "<<b<<" wynosi: "<<NWD(a,b)<<endl;

int i=10;
(i<10)?cout<<"a"<<endl:cout<<"b"<<endl;// inny zapis if'a*/


int x;
cin>>x;
(x>=18)?cout<<"pelnoletni"<<endl:cout<<"niepelnoletni"<<endl;
int a,b;
cin>>a>>b;
cout<<euklides(a,b)<<endl;





}


