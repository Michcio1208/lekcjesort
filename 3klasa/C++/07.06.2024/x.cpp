#include <iostream>
#include <string>
#include <cctype>
#include<cmath>
using namespace std;


const int N=10;
int main(){
    int A[N]={0,1,2,3,4,5,6,7,8,9};
int max=1;
int a=1;
for(int i=1;i<N;i++)
{
    if(A[i]>=A[i+1])
    {
     a=a+1;
     if(a>max)
     {
       max=a;
     }
    }
    else 
    {
        a=1;
    }

}

cout << max;









    
}