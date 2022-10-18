#include <iostream>

using namespace std;

int main()
{
    /*int t[6]={1,2,3,4,5,6};  //suma elem tablicy
    int suma=0;

    for(int i=0;i<6; i++)
       suma=suma+t[i];

       cout<<suma;


   int a[6]={1,2,3,4,5,6};
   int b[6]={6,5,4,3,2,1};
   int c[6];

   for( int i=0;i<=5;i++)
   {
     a[i]=b[i]+c[i];
     }

   cout<<c<<endl;



int a[10]={1,2,3,4,5,6,7,8,9,10};   // najmniejsza i najwieksza w tablicy
int c=0;
int d=0;
for(int i=0;i<=9;i++)
{
    if(a[i]>c)
    {
        c=a[i];
    }
    if(a[i]<d)
    {
        d=a[i];
    }
}

cout<<c<<" "<<d<<endl;


int suma=0;            //suma i iloczyn w tablicy ze wstawianiem elem
int iloczyn=1;
int a[10];
for(int i=0;i< 10;i++)
{
    cin>>a[i];
    suma+=a[i];
}
 for(int i=0;i<=10;i++)
 {
    if(a[i] < 6)
       iloczyn*=a[i];
 }
cout<<iloczyn<<" "<<suma;


int a[6], b[6];     //potega liczby z tablicy
for(int i=0;i<6;i++)
{
    cin>>a[i];
    b[i]=a[i]*a[i];
}
for(int j=0;j<6;j++)
cout<<b[j]<<" "<<endl;
*/
int a[6]={1,2,3,4,5,6};  //zaminianie ostatniego i pierw elem
int b[6];
for(int i=0;i<6;i++)
{
    b[i]=a[5-i];
    cout<<b[i]<<" ";
}











}
