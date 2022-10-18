#include <iostream>

using namespace std;

void generuj(int T[], int n){
int i,m;
for( i=2;i<=n;i++) T[i]=1;//wszystko na l.pierwsze
i=2;
while(i<=n){//wielokrotnosci l.pierwszych na 0, zaczynajac od i*2
    m=2*i;
    while(m<=n){
        T[m]=0;
        m+=i;
        }
        //szuka kolejnej l.pierwszej
    do i++; while(T[i]==0 && i<=n);


}
}














int main()
{
/*int T[9]={2,3,4,5,6,7,8,9,10};
for( int i=0;i<9;i++){
    cout<<T[i]<<" ";

}
cout<<endl;
generuj(T,10);
for(int i=2;i<9;i++)
{
    cout<<T[i]<<" ";



}
*/
string liczba;//odwracanie liczb
cin>>liczba;
int s=liczba.size();
for(int i=s-1;i>=0;i--){
    cout<<liczba[i];
}
cout<<endl;

//odwracanie liczb v.2
int n;
int l=0;
cin>>n;
while(n!=0){
    l=l*10+n%10;
    n/=10;
}
cout<<l<<endl;



}
