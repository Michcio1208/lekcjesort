#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, k;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj k: ";
    cin >> k;

    if (n <= 0 || k <= 0) {
        cout << "n i k muszą być większe od zera!" << endl;
        return 1;
    }

    list<int> lista;
    for (int i = 1; i <= n; i++) {
        lista.push_back(i);
    }

    auto it = lista.begin();
    for (int i = 1; i < n; i++) {  // Usuwamy aż zostanie jeden element
        for (int j = 1; j < k; j++) {  
            ++it;
            if (it == lista.end()) it = lista.begin();
        }
        cout << "Krok " << i << " - usunięty element: " << *it << endl;
        it = lista.erase(it);
        if (it == lista.end()) it = lista.begin();
    }

    cout << "Ostatni pozostający element: " << *lista.begin() << endl;
    return 0;
}
