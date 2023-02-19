#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
int a;
cout<<"podaj a: ";
cin>>a;
cout<<"a jest rowne "<<a<<endl;
int table[4][5];
for(int i=0;i<=5;i++)
{
    for( int j=0;j<=4;j++)
    {
        cin>>table[i][j];
    }
}

for(int i=0;i<=5;i++)
{
    for( int j=0;j<=4;j++)
    {
        cout>>table[i][j];
    }
}

}