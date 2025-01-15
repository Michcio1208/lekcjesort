#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stack>
using namespace std;

// Funkcja oblicza wynik na podstawie odwrotnej notacji polskiej (ONP)
int Oblicz(string& onp) {
    char znak = onp[onp.size() - 1];
    onp.erase(onp.size() - 1, 1); // Usuwamy ostatni znak

    if (znak >= '0' && znak <= '9') {
        return znak - '0'; // Zwracamy wartość liczby
    } else {
        int arg2 = Oblicz(onp); // Obliczamy drugi argument
        int arg1 = Oblicz(onp); // Obliczamy pierwszy argument

        switch (znak) {
            case '+': return arg1 + arg2;
            case '-': return arg1 - arg2;
            case '*': return arg1 * arg2;
            case '/': return arg1 / arg2;
            default: throw invalid_argument("Nieprawidlowy operator w ONP");
        }
    }
}

// Funkcja konwertuje wyrażenie algebraiczne na odwrotną notację polską (ONP)
string ONP(string w) {
    stack<char> stos;
    stos.push('#'); // Strażnik stosu
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
                stos.pop(); // Usuwamy '('
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
                onp += w[i]; // Dodajemy liczbę lub zmienną
                break;
        }
    }

    while (stos.top() != '#') {
        onp += stos.top();
        stos.pop();
    }
    stos.pop(); // Usuwamy strażnika '#'
    return onp;
}

int main() {
    string w;
    cout << "Podaj wyrazenie algebraiczne: " << endl;
    cin >> w;

    string onp = ONP(w);
    cout << "Odwrotna notacja polska: " << onp << endl;

    cout << "Wynik: " << Oblicz(onp) << endl;
    return 0;
}
