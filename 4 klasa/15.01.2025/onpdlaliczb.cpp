#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

int Oblicz(string onp){
    char znak=onp[onp.size()-1];
    onp.erase(onp.size()-1,1);
    if(znak>='0' && znak<='9') return znak-48;
    else{
    int arg2=Oblicz(onp);
    int arg1=Oblicz(onp);
    switch (znak)
    {
    case '+': return arg1+arg2;
    case '-': return arg1-arg2;
    case '*': return arg1*arg2;
    case '/': return arg1/arg2;

      
    }

    }




}

string ONP(string w) {
    stack<char> stos;
    stos.push('#');
    string onp = "";

    for (int i = 0; i < w.size(); i++) {
        switch (w[i]) {
            case '(':
                stos.push('(');
                break;

            case ')':
                while (stos.top() != '(') {
                    onp += stos.top();
                    stos.pop();
                }
                stos.pop(); // Remove '('
                break;

            case '+':
            case '-':
                while (stos.top() != '#' && stos.top() != '(') {
                    onp += stos.top();
                    stos.pop();
                }
                stos.push(w[i]);
                break;

            case '*':
            case '/':
                while (stos.top() == '*' || stos.top() == '/') {
                    onp += stos.top();
                    stos.pop();
                }
                stos.push(w[i]);
                break;

            default:
                onp += w[i];
                break;
        }
    }

    while (stos.top() != '#') {
        onp += stos.top();
        stos.pop();
    }
    stos.pop(); // Remove '#'
    return onp;
}

int main() {
    string w;
    cout << "Podaj wyrazenie algebraiczne: " << endl;
    cin >> w;
    cout << "Odwrotna notacja polska: " << ONP(w) << endl;
    return 0;
}