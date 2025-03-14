#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

int main (){
int x,n;
long long y,tmp;
cout<<"podaj podstawe: potegi: ";
cin>>x;
cout<<"podaj wykladnik: ";
cin>>n;
tmp=x;
y=1;
while(n>0){
    if(n%2==1){
        y*=tmp;
    }
    tmp*=tmp;
    n/=2;}
if(y>0){
    cout<<"wynik: "<<y<<endl;
}
}