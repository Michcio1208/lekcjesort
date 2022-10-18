#include <iostream>
#include <cmath>    //wazne lub math.h
using namespace std;

int main()
{
    /*int a;   //pierwiastek z a
    cout<<"Podaj liczbe: "<<endl;
    cin>>a;
    cout<<"Pierwiastek z "<<a<<" wynosi: "<<sqrt(a)<<endl;


int a,b,c; //tw. pitagorasa
   cout<<"Podaj a: "<<endl;
   cin>>a;
 cout<<"Podaj b: "<<endl;
   cin>>b;
  c=sqrt(pow(a,2)+pow(b,2));
  cout<<"C wynosi: "<<c<<endl;


int r,p; //pole kola
cout<<"Podaj promien: "<<endl;
cin>>r;
p=M_PI*pow(r,2);
cout<<"Pole wynosi: "<<p<<endl;

*/
int w,a,b; //2.2 a
cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;
w=pow(a,3)+cos(b)*sqrt(a+b);
cout<<"w= "<<w<<endl;


int w,a,b; //2.2 d
cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;
w=sin((pow((a+b),4)/(sqrt(11)+sin(b))))
cout<<"w= "<<w<<endl;



int w,a,b; //2.2 c
cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;
w=sqrt((3+sqrt(a*b)/(abs(pow(b,2)-20))));
cout<<"w= "<<w<<endl;


int w,a,b; //2.2 b
cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;
w=abs(a-b)+sin(a)*sqrt(b);
cout<<"w= "<<w<<endl;


int w,a,b; //2.2 e
cout<<"podaj a: "<<endl;
cin>>a;
cout<<"podaj b: "<<endl;
cin>>b;
w=pow(((cos(a+1))/(abs(sqrt(5)-b))),3);
cout<<"w= "<<w<<endl;








}
