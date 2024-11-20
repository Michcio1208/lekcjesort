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


int resztadynamicznie2tablice(int Reszta[]){
int i,j,k;
int IleM[kwota+1];
int ResztaM[kwota+1][N];
IleM[0]=0;
for(int i=1;i<=kwota;i++) IleM[i]=kwota+1;
for(int i=0;i<N;i++) 
for(int i=1;i<=kwota;i++)  
    for(int j=0;j<N;j++)
        if(nominaly[j]<=i)
            if(IleM[i-nominaly[j]]+1<IleM[i])
            {
                IleM[i]=IleM[i-nominaly[j]]+1;
                for(int k=0;k<N;k++)
                    ResztaM[i][k]=ResztaM[i-nominaly[j]][k];
                        ResztaM[i][j]++;
            }
for(i=0;i<N;i++) Reszta[i]=ResztaM[kwota][i];
return IleM[kwota];

}



int main (){
int Reszta[N];
cout<<"minimlna liczba monet to dla kwoty "<<kwota<<": "<<resztadynamicznie2tablice(Reszta)<<endl;



}