#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N=4;
const int nominaly[]={1,2,4,5};
const int kwota=8;

int ileMonet(){
int i,j;
int IleM[kwota+1];
IleM[0]=0;
for(int i=1;i<=kwota;i++) IleM[i]=kwota+1;
for(int i=1;i<=kwota;i++)  
    for(int j=0;j<N;j++)
        if(nominaly[j]<=i)
            if(IleM[i-nominaly[j]]+1<IleM[i])
                IleM[i]=IleM[i-nominaly[j]]+1;
return IleM[kwota];

}

int main(){
cout<<"minimlna liczba monet to "<<ileMonet()<<endl;;










}