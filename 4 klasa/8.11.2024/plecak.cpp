#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N=10;

 struct przedmiot{
    int wart,waga;
 };

bool Porownaj(przedmiot a, przedmiot b){
    return (float(a.wart)/+a.waga>float(b.wart)/b.waga);
}

int plecak(przedmiot P[], int makswaga, int K[]){
int makswart=0;

for(int i=1;i<N;i++){
   K[i]= makswaga / P[i].waga;
   makswaga=makswaga % P[i].waga;
   makswart=makswart+K[i]*P[i].wart;


}
return ;



}






int main(){
przedmiot P[N];
ifstream wej("proby.txt");
for(int i=0;i<N;i++)
    wej>>P[i].pocz>>P[i].czas;
wej.close();

sort(P,P+N,Porownaj);
cout<<"maksymalna liczba prob: "<<MLP(P);









}