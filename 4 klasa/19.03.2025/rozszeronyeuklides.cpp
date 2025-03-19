#include<iostream>
#include<fstream>
using namespace std;


int RSA(int podst, int wykl, int n){
 int w=1;
 while(wykl>0){
     if(wykl%2==1){
         w=(w*podst)%n;
     }
     podst=(podst*podst)%n;
     wykl/=2;
     if(wykl>0){
         podst=(podst*podst)%n;
     }
 }
 return w;

}


int main(){
ifstream we("liczby.txt");
ofstream wy("wynik4.txt");
unsigned char ch;
int e, n;
cout<<"podaj klucz publiczny: "<<endl;
cout<<"e= "; cin>>e;
cout<<"n= "; cin>>n;

we>>noskipws;
while(we>>ch) wy<<RSA(ch, e, n);<<" ";
we.close();
wy.close();
cout<<"zakonczono szyfrowanie"<<endl;


}