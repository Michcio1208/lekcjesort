#include <iostream>
#include <list>

using namespace std;

int flawiusz(int n, int k) {
    list<int> ludzie;
    for (int i = 1; i <= n; ++i) {
        ludzie.push_back(i);
    }

    auto it = ludzie.begin();
    while (ludzie.size() > 1) {
        for (int i = 0; i < k - 1; ++i) {
            ++it;
            if (it == ludzie.end()) {
                it = ludzie.begin();
            }
        }
        it = ludzie.erase(it);
        if (it == ludzie.end()) {
            it = ludzie.begin();
        }
    }

    return ludzie.front();
}

int main() {
    int n, k;
    cout << "Podaj liczbę osób (n): ";
    cin >> n;
    cout << "Podaj odstęp (k): ";
    cin >> k;
    
    int ostatni= flawiusz(n, k);
    cout << "Ostatnia ocalała osoba to: " << ostatni << endl;
    
    return 0;
}
