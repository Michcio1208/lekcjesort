#include <iostream>
#include <cstring> //biblioteka do string'a
using namespace std;

int main()
{
   /* string a,b,s;
    cin>>a;
    cin>>b;
    s= a+ b;
    int dlugosc;
    dlugosc=s.size();
    cout<<"Imie ma " << a.size() << " liter, a nazwisko ma " << b.size()<<" liter, razem "<<dlugosc<<endl;




    string tekst="asdfghjkl";
    int licznik;
    for(int i=0;i<tekst.size();i++)
    {
        if(tekst[i]=='a')
        {
            licznik++;
        }
    }
cout<<licznik<<endl;
int licz=0;
for(int i=0;i<tekst.size();i++)
    {
        if(tekst[i]!='B'&& i%2==0)
        {
            licz++;
        }


    }
cout<<licz<<endl;

string s;  //getline
getline(cin,s);
cout<<s<<endl;



string a;
getline(cin,a);
for(int i=0;i<a.size();i++)
{
    if(a[i]!='h')
    {
        cout<<a[i];
    }
}
*/


string d;
getline(cin,d);
for(int i=0;i<d.size();i++)
{
    if(d[i]=='a' || d[i]=='A'|| d[i]=='o' || d[i]=='O')
    {
        cout<<d[i];
    }
}














}
