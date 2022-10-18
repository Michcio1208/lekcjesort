#include <iostream>

using namespace std;

int main()
{
    int n,silnia;
    silnia=1;
cout<<"podaj n: "<<endl;
    cin>>n;
    for(int i=n;i>1;i--)
        silnia*=i;
        cout<<n<<"! = "<<silnia<<endl;
}
