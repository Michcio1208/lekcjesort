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

int maks(int A[][N])
{
    int max=0;
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        if(A[i][j]>max) max=A[i][j];

return max;
}

int main(){

int A[N][N];
srand(time(NULL));
Losuj(A);
Wypisz(A);
cout<<endl;
cout<<"Maksymalna : "<<maks(A)<<endl;
}