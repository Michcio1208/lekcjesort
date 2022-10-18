#include <iostream>

using namespace std;

/*int silnia(int n)  //4.9/98(P)
{
    if(n==1) return n;
    return n*silnia(n-1);
}

int Newton(  int n,  int k)
{
 return silnia(n) / (silnia(k) * silnia(n-k));
}

int Newton1( int n, int k )
{
    if(k<0 || n<k) return -1;
    int silnia_n =1;
    int silnia_k =1;
    int silnia_nk =1;
    for(int i=1;i<=n;silnia_n*=i,i++);
     for(int i=1;i<=k;silnia_k*=i,i++);
     for(int i=1;i<=(n-k);silnia_nk*=i,i++);
   return silnia_n / (silnia_k*silnia_nk);
}
*/


int kr(int m) //4.11/99(P)
{
    if(m==0) return 1;
    if (m==1) return 1;
    return kr(m-1)+kr(m-2);

}




int main()
{
/*int n,k;
cin>>n>>k;
cout<<Newton(n,k)<<endl;
cout<<Newton1(n,k)<<endl;
*/

int m;
cin>>m;
cout<<"Jest "<<kr(m)<<" par krolikow"<<endl;





















}
