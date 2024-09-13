#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;

const string alfabet_m="aąbcćeędfghijklłmnoprstuvxyzź";
const string alfabet_w="AĄBCĆEĘDFGHIJKLŁMNOPRSTUVXYZŹ";

char Cezar_PL(char znak, int klucz)
{
int i=alfabet_m.find(znak);
if(i>=0 && i<35)
{
    i=(i+klucz)%35;
    return alfabet_m[i];
}
int i=alfabet_w.find(znak);
if(i>=0 && i<35)
{
    i=(i+klucz)%35;
    return alfabet_w[i];
}
return znak;
}

string Cezar(string s, int klucz){
string szyfrogram="";
int kod;
for(int i=0;i<s.size();i++)
szyfrogram=szyfrogram+Cezar_PL(s[i],klucz);
return szyfrogram;
}




int main()
{
ifstream wejscie("tekst-jawny-2.txt");
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