#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
typedef vector<vector<int>> tgraf;

void wczytaj(tgraf &graf) {
    int n, m, w1, w2;
    ifstream we("graf-2-txt.txt");
    we >> n >> m;
    graf.resize(n);
    for (int i = 0; i < m; i++) {
        we >> w1 >> w2;
        graf[w1].push_back(w2);
        graf[w2].push_back(w1);
    }
    we.close();
}

void DFS(int w1, tgraf &graf, vector<bool> &odwiedzone) {
    cout << "Odwiedzony wierzchołek " << w1 << endl;
    odwiedzone[w1] = true;
    for (int w2 : graf[w1]) {
        if (!odwiedzone[w2]) {
            DFS(w2, graf, odwiedzone);
        }
    }
}

int main() {
    tgraf graf;
    wczytaj(graf);
    vector<bool> odwiedzone(graf.size(), false);

    int w1;
    cout << "Podaj wierzchołek startowy: ";
    cin >> w1;

    DFS(w1, graf, odwiedzone);

    cout << "Nieosiągalne wierzchołki: ";
    bool znaleziono = false;
    for (int i = 0; i < odwiedzone.size(); i++) {
        if (!odwiedzone[i]) {
            cout << i << " ";
            znaleziono = true;
        }
    }

    if (!znaleziono) {
        cout << "Brak";
    }
    cout << endl;

    return 0;
}
