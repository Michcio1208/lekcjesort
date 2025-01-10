#include <iostream>
#include <stack>
#include <string>
using namespace std;

string ONP(string w) {
    stack<char> stos;
    stos.push('#'); // Dodanie strażnika stosu
    string onp = "";

    for (int i = 0; i < w.size(); i++) {
        if (w[i] == '(') {
            stos.push('(');
        } else if (w[i] == ')') {
            while (stos.top() != '(') {
                onp += stos.top();
                stos.pop();
            }
            stos.pop(); // Usuń '(' z wierzchu stosu
        } else if (w[i] == '+' || w[i] == '-') {
            while (stos.top() != '#' && stos.top() != '(') {
                onp += stos.top();
                stos.pop();
            }
            stos.push(w[i]);
        } else if (w[i] == '*' || w[i] == '/') {
            while (stos.top() == '*' || stos.top() == '/') {
                onp += stos.top();
                stos.pop();
            }
            stos.push(w[i]);
        } else {
            // Dodaj operand (liczby, zmienne) do wyniku
            onp += w[i];
        }
    }

    // Opróżnij stos na końcu
    while (stos.top() != '#') {
        onp += stos.top();
        stos.pop();
    }

    return onp;
}

int main() {
    string w;
    cout << "Podaj wyrazenie algebraiczne: " << endl;
    cin >> w;
    cout << "Odwrotna notacja polska: " << ONP(w) << endl;
    return 0;
}
