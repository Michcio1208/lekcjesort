#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=15;
const int nominaly[]={50000,20000,10000,5000,2000,1000,5000,200,100,50,20,10,5,2,1};

void wydajreszte(int kwota, int Reszta[])
{
    for(int i=0; i<N;i++)
    {
        Reszta[i]=kwota/nominaly[i];
        kwota=kwota%nominaly[i];
    }




}

int main(){


int kwota,Reszta[N];
cout<<"Podaj kwote w groszach"<<endl;
cin>>kwota;
wydajreszte(kwota,Reszta);
for(int i=0;i<N;i++)
    if(Reszta[i]>0)
    cout<<nominaly[i]<<": "<<Reszta[i]<<endl;










}