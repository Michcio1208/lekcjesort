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

int makssuma(int A[][N])
{
int suma=A[0][0];
int w=0;
int k=0;
for(int i=1;i<2*N-1;i++){
    if(A[w+1][k]>A[w][k+1]){
        suma=suma+A[w+1][k];
        w=w+1;}
    else{
        suma=suma+A[w][k+1];
        k=k+1;
    }

}
return suma;
}

int main(){

int A[N][N];
srand(time(NULL));
Losuj(A);
Wypisz(A);














}