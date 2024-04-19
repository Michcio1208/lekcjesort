#include <iostream>
#include <string>
using namespace std;

bool palindrom(string wyraz){
 bool p=true;
    int i=0, j=wyraz.size() -1;
    while (palindrom && i<j)
    {
       if(tolower(wyraz[i])==tolower(wyraz[j])){
        i++;
        j--;
       }
       else{
        p=false;
       }
    }
    return p;
    
}

string tylkolitery(string s){
    int i=0;
    while (i<s.size())
    {
      if(toupper(s[i])>='A' && toupper(s[i]<='Z')) i++;
      else s.erase(i,1);
      return s;
    }
    
}

int main (){
    /*
    //sprawdzamy czy slowo jest palindormem
    string a;
    cout<<"podaj wyraz"<<endl;
    cin>>a;
    int i,j;
    j=a.size() -1;
    i=0;
    bool palindrom= true;
    while (palindrom && i<j)
    {
        if (a[i]==a[j])
        {
           i++;
           j--;
        }
        else{
            palindrom=false;
        }
    }
    if (palindrom)
    {
        cout<<"TAK"<<endl;
    }
    else{
        cout<<"NIe"<<endl;
    }
    


   //wypisywanie palindormow
  *//*
string zdanie , wyraz ;
int i;
cout<<"podaj zdanie"<<endl;
getline(cin,zdanie);
zdanie=zdanie+' ';

while (zdanie.size()>0)
{
  i=zdanie.find(' ');
  if(i>0)
  {
    wyraz=zdanie.substr(0,i);
    if(palindrom(wyraz)) {
    cout<<wyraz<<endl;
    }
  }
  zdanie.erase(0,i+1);
}
*/
string zdanie , wyraz ;
int i;
cout<<"podaj zdanie";
getline(cin,zdanie);
wyraz=tylkolitery(zdanie);
if(palindrom(wyraz)) cout<<"zdanie to palindorm";
else cout<<"zdanie nie jest palindromem";





}