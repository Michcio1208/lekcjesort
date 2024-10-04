#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
string przestaw2(string tj, string kl)
{
string szyfrogram="";
int i,j;
while(tj.size()%kl.size()!=0) tj=tj+'X';
for(j=0;j<kl.size();j++)
    for(i=0;i<tj.size()/kl.size();i++)
        szyfrogram+=tj[i*kl.size()+kl[j]-'O'];
        return szyfrogram;


}
*/



bool anagram(string s1,string s2)
{
if(s1.size()!=s2.size())
    return false;
else
    sortuj(s1);
    sortuj(s2);
    if(s1==s2)
        return true;
}




void sortuj(string s)
{
int i,j,m;
char ch;
for(i=0;i<s.size()-1;i++)
    m=i;
    for(j=i+1;j<s.size();j++)
        if(s[j]<s[m]) m=j;
    ch=s[i];s[i]=s[m];s[m]=ch;



}


int main(){

/*string klucz, tekst;
getline(cin,tekst);
cin>>klucz;
przestaw2(tekst,klucz);
*/





















}