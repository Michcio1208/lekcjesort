#include <iostream>
#include <string>
using namespace std;


bool tylkomale(string s){
int ilosc=0;
for(int i=0;i<s.size();i++)
{
if(s[i]>='a' && s[i]<='z'){
    ilosc ++;
}
}
if(ilosc==s.size()) return true;
else return false;

}

int main(){











}