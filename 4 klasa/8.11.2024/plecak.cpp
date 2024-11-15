#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N=5;

 struct przedmiot{
    int wart,waga;
 };

bool Porownaj(przedmiot a, przedmiot b){
    return (float(a.wart)/a.waga>float(b.wart)/b.waga);
}

int plecak(przedmiot P[], int makswaga, int K[]){
int makswart=0;
for(int i=1;i<N;i++){
   K[i]= makswaga / P[i].waga;
   makswaga=makswaga % P[i].waga;
   makswart+=K[i]*P[i].wart;


}
return makswart;



}






int main(){
przedmiot P[N];
int K[N];
ifstream wej("do-plecaka.txt");
for(int i=0;i<N;i++)
    wej>>P[i].wart>>P[i].waga;
wej.close();

sort(P,P+N,Porownaj);
cout<<"maksymalna wartość: "<<plecak(P,17,K);









}