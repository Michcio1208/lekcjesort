#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool SzukajBin(int A[], int x){
int lewy=0, prawy=N-1, srodek;
while (lewy<prawy)
{
    srodek=(lewy+prawy)/2;
    if(A[srodek]<x) lewy=srodek+1;
    else prawy=srodek;
}
return (A[lewy==x]);




}




const int N=10;
int main(){
    
int num;
//cout<<"podaj liczbe"<<endl;
cin>>num;
int A[N]={1,2,3,4,5,6,7,8,9,10};
/*for(int i=0; i<N;i++){
if(A[i]==num){
    cout<<"tak na pozycji"<<i<<endl;
}
}*/

if(SzukajBin(A,num)) cout<<"wystepuje w tablicy"<<endl;


















}