#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int makswaga=17;
const int N=5;

struct Przedmiot{
    int wart, waga; 
};

int plecakdynamicznie(Przedmiot P[]){
    int W[makswaga+1];
    for(int i=0;i<makswaga;i++) W[i]=0;
    for(int i=0;i<makswaga;i++)
        for(int j=0;j<N;j++)
            if(P[j].waga<=i)
                if(W[i-P[j].waga]+P[j].wart>W[i])
                    W[i]=W[i-P[j].waga]+P[j].wart;
    return W[makswaga];


}



int main(){
Przedmiot P[N];
ifstream wej("do-plecaka.txt");
for(int i=0;i<N;i++)
    wej>>P[i].wart>>P[i].waga;
wej.close();
cout<<"Maksymalna wartosc plecaka to: "<<plecakdynamicznie(P);


    
}