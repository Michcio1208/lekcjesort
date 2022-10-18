#include <iostream>

using namespace std;

int main()
{
    /*int a, b;//zgadywanie liczb, petla niesk
    b=14;
    do{
        cout<<"podaj liczbe: "<<endl;
        cin>>a;
        if (a>b)
            {
            cout<<"za duza"<<endl;

        }
        else if (b>a){
           cout<<"za mala" <<endl;
        }

    }while(a!=b);

   if(a==b)
    cout<<"zgadles! b wynosi: "<<b<<endl;

*/
/*int a;
while(1)//zgadywanie liczb, petla niesk
{
    cout<<"podaj wartosc: ";
    cin>>a;
    if(a==89)
    {
            cout<<dobrze! "<<endl;break;
    }



}
*/
 /*int a;
 for(;;)//zgadywanie liczb, petla niesk
 {
     cout<<"podaj liczbe: "<<endl;
     cin>>a;
     if(a==734)
     {
       cout<<"dobrze! "<<endl;break;


     }

 }
*/
/*int i,j;
for(i=1;i<=5;i++)//choinka
{
     for(j=0;j<=i;j++)
{
    cout<<"*";
}
cout<<" "<<endl;




}
*/
 for(int i=1;i<=5;i++) //piramida 
    {
     for(int k=5-1;k>0;k--)
        {
            cout<<" ";
        }
for(int j=1;j<=i;j++)
{
    cout<<"*";
}
cout<<endl;

 }

    
    
int dzien; //switch
cin>>dzien;
switch( dzien )
    {
    case 1:cout<<"poniedzialek"<<endl;break;
    case 2:cout<<"wtorek"<<endl;break;
    case 3:cout<<"sroda"<<endl;break;
    case 4:cout<<"czw"<<endl;break;
    case 5:cout<<"pia"<<endl;break;
    case 6:cout<<"sob"<<endl;break;
    case 7:cout<<"niedz"<<endl;break;




    }







    return 0;
}
