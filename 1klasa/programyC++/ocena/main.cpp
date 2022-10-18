#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"wprowadz liczbe punktow: "<<endl;
    cin>>a;
     if (a <= 50 )
        cout<<"twoja ocena to 1";
    else if(a >50 && a <= 60)
    cout<<"twoja ocena to 2";
    else if( a>60 && a <= 75)
    cout<<"twoja ocena to 3";
    else if( a>75 && a <= 90)
        cout<<"twoja ocena to 4";
    else if ( a>90 && a <= 99)
         cout<<"towja ocena to 5";
    else if ( a= 100)
         cout<<"twoja ocena to 6";



    return 0;
}
