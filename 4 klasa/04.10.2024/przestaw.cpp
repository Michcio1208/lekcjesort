#include <iostream>
#include <string>
#include <cctype>
using namespace std;


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

int main(){

string klucz, tekst;
cin>>tekst;
cin>>klucz;
przestaw2(tekst,klucz);






















}