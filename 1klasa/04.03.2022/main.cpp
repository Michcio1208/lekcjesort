#include <iostream>

using namespace std;

/*int NWD(int m, int n){  //zad. 4.3/92(P)
while(m>0 && n>0)       //inny zapis algorytmu Euklidesa
{
    if(m>n)
    {
        m=m%n;
    }
else
    {
    n=n%m;

}

}
return n+m;



}*/


int NWD(int m, int n){    //NWW i NWD
while(m>0 && n>0)
{
    if(m>n)
    {
        m=m%n;
    }
else
    {
    n=n%m;

}

}
return n+m;



}
int NWW(int m, int n){

return (n*m)/NWD(n,m);





}








int main()
{
 /*   int m; //zad. 4.3/92(P)
    int n;
cin>>n>>m;
    cout<<NWD(n,m)<<endl;
*/


/*int m,n;   //NWW i NWD
cin>>n>>m;
cout<<NWD(n,m)<<endl;
cout<<NWW(n,m)<<endl;*/
int a,b,c,d;    //nwd czterech liczb
cin>>a>>b>>c>>d;
cout<<NWD(NWD(NWD(a,b),c),d)<<endl;;

}
