#include <iostream>

using namespace std;

int main()
{

 char b;
   string a;
   cin>>a;
   cin>>b;
   int l=0;
   int f=0;

  //1


   cout<<" ten tekst od tylu to:  ";
   for(int i= a.size()-1;i>=0;i--)
   {
       cout<<a[i];
   }
   cout<<endl;


//2



for(int i=0;i <a.size();i++)
{
    if(a[i]==b)l++;
}
cout<<" jest "<<l<<" liter "<<b<<" w tekscie "<<a<<endl;


//3

for(int i=0;i<a.size();i++)
{
    if(a[i]!=' ')f++;
}
cout<<" liter bez spacji jest "<<f<<endl;

//4


for(int i=0;i<a.size();i++)
{
    if( i%2 !=0 )
    {
        cout<<a[i];
    }
    else
            {
            cout<<a[i]<<" ";
        }
}cout<<endl;

//5

int g=0;
int h=0;

for(int i=0;i<a.size();i++)
{
    if(a[i]!='a'&& i%2!=0)g++;
    else if (a[i]=='z' && i%2==0)h++;
}
cout<<" nie a na nieparzystych pozycjach jest "<<g<<" , z na parzystych pozycjach jest "<<h<<endl;








}
