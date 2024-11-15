#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N=5;



//jakas suma w  kwadracie z podsumami zeby jak ma do wyboru dwie takie same to wybierze ta z lepsza podsuma

void Losuj(int A[][N]){
    for(int i=0; i<N;i++)
        for(int j=0;j<N;j++)
            A[i][j]=1+rand()%9;


}
void Wypisz(int A[][N]){
  for(int i=0; i<N;i++)
        for(int j=0;j<N;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;



}

int MaksSuma(int P[][N]){
for(int i=1;i<N;i++){
    P[0][i]+=P[0][i-1];
    P[i][0]+=P[i-1][0];
}
    for(int i=1;i<N;i++)
        for(int j=1;j<N;j++)
            P[i][j]+=max(P[i-1][j],P[i][i-1]);


return P[N-1][N-1];
}

int main(){








    ;
}