#include <iostream>
#include <string>
using namespace std;

bool palindrom(string wyraz){
string a;
    int i,j;
    j=a.size() -1;
    i=0;
    bool p= true;
    while (p && i<j)
    {
        if (a[i]==a[j])
        {
           i++;
           j--;
        }
        else{
            p=false;
        }
    }
    if (p)
    {
        cout<<a<<endl;
    }
    
}
/*
int main (){
    
    //sprawdzamy czy slowo jest palindormem
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
        cout<<"TAK"<<endl;
    }
    else{
        cout<<"NIe"<<endl;
    }
    
*/

   //wypisywanie palindormow








}