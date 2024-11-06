#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=5;

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


int main(){

int A[N][N];
srand(time(NULL));
Losuj(A);
Wypisz(A);














}