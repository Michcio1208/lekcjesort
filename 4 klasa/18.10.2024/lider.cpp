#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=10;
int szukajlidera(int A[])
{
for(int i=0;i<N;i++)
{
    int ile=0;
    for(int j=0;j<N;j++ )
    {
        if(A[j]==A[i]) ile+=1;
    }
    if(ile>N/2) return A[i];
}
return -1; 

}

int szukaj2(int A[])
{ 
int i,kandydat,ile =0;
sort(A,A+N);
kandydat=A[N/2];
for(i=0;i<N;i++)
    if(A[i]==kandydat) ile++;
if(ile>N/2) return kandydat;
else return -1; 



}

int losuj(int A[])
{
for(int i=0;i<N;i++)
{

    A[i]=rand()%100;
}
}

int losuj2(int A[])
{
for(int i=0;i<N;i++)
{
int x=rand()%100;

}

}

int wypisz(int A[])
{
for(int i=0;i<N;i++)
{
   cout<<A[i]<<" ";
}
}

// liderem nazywamy taki element n-elementowego zbioru, ktory wystepuje wiecej niz n/2 razy

int main()
{
    int A[N];
srand(time(NULL));
losuj(A);
wypisz(A);


// [a;b]
// rand()%(b-a+1)+a
}