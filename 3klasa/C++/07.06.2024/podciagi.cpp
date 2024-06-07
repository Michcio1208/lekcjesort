#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;


const int N=10;


int DNSPNM(int A[])
{
int max=1; 
int a=1;
for(int i=1;i<N;i++)
{
    if(A[i]>=A[i-1])
    {
     a++;
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
return max;

}

int NSPNM(int A[])
{
int max1=1;
int b=1;
int max0=0;
int b0=0;
int i;
for (i=1;i<N;i++)
{
if(A[i]>=A[i-1])
{
    b++;
    }
if(b>max1)
{
max1=b;

max0=b0;
}

else{
    b=1;
    b0=1;
}

}

return max0;
}

int main(){
    int A[N]={0,1,2,3,4,5,6,7,8,9};
    cout<<DNSPNM(A)<<endl;
   cout<<NSPNM(A)<<endl;











    
}