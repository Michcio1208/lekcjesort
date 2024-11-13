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

int losuj(int A[])
{
for(int i=0;i<N;i++)
{

    A[i]=rand()%100;
}
}





int wypisz(int A[])
{
for(int i=0;i<N;i++)
{
   cout<<A[i]<<" ";
}
}



int main()
{
    int A[N];
srand(time(NULL));
losuj(A);
wypisz(A);
szukajlidera(A);

}