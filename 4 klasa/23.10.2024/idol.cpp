#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=5;

void Losuj(bool A[][N])
{
    int i,j,idol;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++) A[i][j]=rand()%2;
    if(rand()%2==1)
    {
        idol=rand()%N;
        for(i=0;i<N;i++) A[i][idol]=true;
        for(j=0;j<N;j++) A[idol][j]=false;

    }
}


int wypisz(bool A[][N])
{
for(int i=0;i<N;i++)
    for(int j=0;j<N;j++)
        if(i!=j) cout<<A[i][j]<<" ";
        else cout<<" ";
    cout<<endl;
}

int szukajidola(bool A[][N])
{
int i, kandydat=0;
bool jest_kandydat=false;
while(kandydat<N && !jest_kandydat)
{
    i=0;
    A[kandydat][kandydat]=false; 
    while(i<N && !A[kandydat][i]) i++;
    if(i==N) jest_kandydat=true;
    else kandydat++;
}
if(!jest_kandydat) return -1;
i=0; A[kandydat][kandydat] = true;
while (i<N && A[i][kandydat])i++;
if(i==N) return kandydat;
else return -1;


}

int main()
{
//idol - wszyscy go znają, on nie zna nikogo
// wiersz z samymi falszami i kolumna z samymi prawdami

bool A[N][N];
srand(time(NULL));
Losuj(A);
wypisz(A);
szukajidola(A);
}