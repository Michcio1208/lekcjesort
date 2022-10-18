#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"podaj wykladnik :"<<endl;
    cin>>a;
     b=1;
   for(int i =0;i<a;)
        b*=3,i++;
        cout<<"3 do potegi "<<a<<" rowna sie "<<b<<endl;
}
