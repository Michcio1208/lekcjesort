#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

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
