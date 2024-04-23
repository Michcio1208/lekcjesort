#include <iostream>
#include <string>
#include <sstream>

using namespace std;
/*
void dp()
{
for(int i=1;i<=9;i++)
{
    for(int j=0;j<=9;j++)
    {
        cout<<i<<j<<i<<endl;
}
}
}

void other(){
    for(int i=99;i<100;i++)
    {
        if(i%99-i%100==i%10)
        {
            cout<<i<<endl;
        }
    }
}
*/

void Upstring(string s){

    int j=s.size()-1;
    int i=0;
    while(i<=j)
    {
        s[i]=toupper(s[i]);
        i++;
    }
    cout<<s;
}
bool czyliczbapalindrom(int liczba)
{
int stara=liczba;
int odwrocona=0;
while(liczba>0)
{
    odwrocona=odwrocona*10=liczba%10;
    liczba=liczba/10;
}


}

int main(){
    string s;
   cout<<"podaj";
   cin>>s;
   cout<<endl;
  Upstring(s);
}
