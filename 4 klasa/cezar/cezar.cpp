#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;

string Cezar(string s, int klucz){
string szyfrogram="";
int kod;
for(int i=0;i<s.size();i++)
if(toupper(s[i])>='A' && toupper(s[i])<='Z')
{
kod=s[i]+klucz;
if( (s[i]<='Z' && kod>'Z') || (s[i]>='a' && kod>'z')) kod=kod-26;
szyfrogram=szyfrogram+char(kod);
}
else szyfrogram=szyfrogram+s[i];
return szyfrogram;
}

int main(){

ifstream wejscie("tekst-jawny-1.txt");
ofstream wyjscie("szyfrogram.txt");
string s;
int klucz;
cout<<"Klucz= "<<endl;
cin>>klucz;
while(!wejscie.eof())
{
    getline(wejscie,s);
    wyjscie<<Cezar(s,klucz)<<endl;
}
wejscie.close();
wyjscie.close();
cout<<"Plik szyfrogram.txt zostal utworzony";





}

