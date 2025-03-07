#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

int NWD(int a, int b){
    if(b==0) return a;{
    return(NWD(b,a%b));
    }
}

int main(){
int a,b;
cout<<"a: ";
cin>>a;
cout<<"b: ";
cin>>b;
cout<<"NWD("<<a<<","<<b<<") = "<<NWD(a,b)<<endl;


}