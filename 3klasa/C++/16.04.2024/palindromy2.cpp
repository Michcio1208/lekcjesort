#include <iostream>
#include <string>
#include <cctype>
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


}