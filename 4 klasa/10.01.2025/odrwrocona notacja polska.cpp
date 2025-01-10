#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;




/*

2+3=5  - notacja tradycyjna


+ab   - notacja polska

+32 = 5 

ab+   - odwrocona notacja polska 

42+ = 6


a*b+c -> abc+*  a*to cale w srodku czyli bc+(b+c)

a+b*c ->abc*+
a*b+c->ab*c+
(a-b)c->ab-c*
a/(b+c)->abc+/



komendy na stos:

push() dodaje do stosu, zawsze na gore
pop()  zdejmuje z gory
top() wyswietla ten na samej gorze
empty() sprawdza czy stos jest pusty


stos:
-   LFO- last in , first out
-
-
-
-
-
- 



zamieniamy z notacji tradycyjnej na notacje polską (za pomocą stosu):
pojebane gowno jakas tabelka wpisujesz na stos i potem spisujesz 


BIBLIOTEKA STACK

*/
string ONP(string w){
    stack<char> stos;
    stos.push('#');
    string onp="";
    for(int i=0;i<w.size();i++){
        if(w[i]=='('){
            stos.push('(');
            continue;}
        if(w[i]==')'){
            while(stos.top()!='('){
            onp=onp+stos.top();
            stos.pop();}

            stos.pop();
            continue;

        }
        if(w[i]=='+' || w[i]=='-'){
            while (stos.top()!='#' && stos.top()!='(')
            {
                onp=onp+stos.top();
                stos.pop();
            }
            
        }
       if(w[i]=='*' || w[i]=='/'){
            while (stos.top()!='*' && stos.top()!='/')
            {
                onp=onp+stos.top();
                stos.pop();
            }
            stos.push(w[i]);
        }
        else onp=onp+w[i];

    }
  while(stos.top()!='#'){
    onp=onp+stos.top();
    stos.pop();
  }
stos.pop();
return onp;

}




int main(){
string w;
cout<<"podaj wyrazenie algebraiczne: "<<endl;
cin>>w;
cout<<"Odwrotna notacja polska: "<<ONP(w)<<endl;




}