#include <iostream>

using namespace std;

int main()
{
   /*string s1, s2("Ala"),s3="Ola";
   s1="Ala";
   if(s1==s2) //kolejnosc w slwniku
   {
       cout<<" teksty "<<s1<<" i "<<s2<<" sa takie samy"<<endl;

   }
   else if(s1<s2)
   {
       cout<<"tekst"<<s1<<" jest wczesniej w slowniku niz tekst "<<s2<<endl;

   }
   else
   {
       cout<<"tekst "<<s1<<" jest pozniej w slowniku niz tekst "<<s2<<endl;


   }
    s2+='n';  //dodawanie znakow


   if(s1==s2)
   {
       cout<<" teksty "<<s1<<" i "<<s2<<" sa takie same "<<endl;

   }
   else if(s1<s2)
   {
       cout<<"tekst "<<s1<<" jest wczesniej w slowniku niz tekst "<<s2<<endl;

   }
   else
   {
       cout<<"tekst "<<s1<<" jest pozniej w slowniku niz tekst "<<s2<<endl;


   }

   s3+="!!!";
   cout<<s3<<endl;
   s3[1]='*';
    cout<<s3<<endl;*/


string s="abcdef";   //funkcje
bool a=s.empty();
cout<<a<<endl;

int b=s.size();
cout<<b<<endl;

char c=s.at(3);
cout<<c<<endl;

//s.clear();
//cout<<s<<endl;



string e=s.substr(2,3);
cout<<e<<endl;

































}
