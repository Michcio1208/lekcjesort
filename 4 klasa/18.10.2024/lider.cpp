#include <iostream>
#include <string>
#include <cctype>
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

// liderem nazywamy taki element n-elementowego zbioru, ktory wystepuje wiecej niz n/2 razy

int main()
{
    int A[N]={1,2,4,2,2,2,2,2};
    cout<<szukajlidera(A)<<endl;
}