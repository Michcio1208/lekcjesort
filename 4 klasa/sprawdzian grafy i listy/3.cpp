#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
typedef vector<vector<int>> tgraf;

void wczytaj(tgraf &graf) {
    int n, m, w1, w2;
    ifstream we("graf.txt");
    if (!we) {
        cerr << "Błąd otwarcia pliku!" << endl;
        exit(1);
    }
    we >> n >> m;
    graf.resize(n);
    for (int i = 0; i < m; i++) {
        we >> w1 >> w2;
        graf[w1].push_back(w2);
        graf[w2].push_back(w1);
    }
    we.close();
}

void DFS(int w, tgraf &graf, vector<bool> &odwiedzone) {
    odwiedzone[w] = true;
    for (int sasiad : graf[w]) {
        if (!odwiedzone[sasiad]) {
            DFS(sasiad, graf, odwiedzone);
        }
    }
}

bool czy_spojny(tgraf &graf, int start) {
    vector<bool> odwiedzone(graf.size(), false);
    DFS(start, graf, odwiedzone);

    // Sprawdzenie, czy wszystkie wierzchołki zostały odwiedzone
    for (bool v : odwiedzone) {
        if (!v) return false;
    }
    return true;
}

int main() {
    tgraf graf;
    wczytaj(graf);
    
    int w1;
    cout << "Podaj wierzchołek startowy: ";
    cin >> w1;

    if (w1 < 0 || w1 >= graf.size()) {
        cerr << "Nieprawidłowy wierzchołek!" << endl;
        return 1;
    }

    if (czy_spojny(graf, w1)) {
        cout << "Z wierzchołka " << w1 << " można dotrzeć do wszystkich pozostałych." << endl;
    } else {
        cout << "Nie można dotrzeć do wszystkich wierzchołków z " << w1 << "." << endl;
    }

    return 0;
}
