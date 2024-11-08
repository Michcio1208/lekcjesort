#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=1;

 struct proba{
    int pocz;
    int czas;
 };

bool Porownaj(proba a, proba b){
    return a.pocz*60+a.czas<b.pocz*60+b.czas;
}

int MLP(proba P[]){
int lp=1;
int ost=0;

for(int i=1;i<N;i++){
    if(P[i].pocz*60>P[ost].pocz*60+P[ost].czas)
        {
            lp++;
            ost=i;
        }


}
return lp;



}






int main(){
proba P[N];











}