#include <iostream>
#include <string>
using namespace std;

int main (){
    string a;
    cout<<"podaj wyraz"<<endl;
    cin>>a;
    int i,j;
    j=a.size() -1;
    i=0;
    bool palindrom= true;
    while (palindrom && i<j)
    {
        if (a[i]==a[j])
        {
           i++;
           j--;
        }
        else{
            palindrom=false;
        }
    }
    if (palindrom)
    {
        cout<<"TAK";
    }
    else{
        cout<<"NIe";
    }
    







}