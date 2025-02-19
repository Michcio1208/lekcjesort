#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include <queue>

using namespace std;

const string alfabet = "aąbcćdeęfghijklłmnńoóprsśtuwyzźż";
const int N = 35;

void Budujliste(list<string> &lista, int &mdl) {
    ifstream we("slowa.txt");
    string s;
    while (we >> s) {
        lista.push_back(s);
        if (s.size() > mdl) {
            mdl = s.size();
        }
    }
    we.close();
}

void Zapiszliste(const list<string> &lista) {
    ofstream wy("slowa.txt");
    for (const auto &s : lista) {
        wy << s << endl;
    }
    wy.close();
}

void Sortujslowa(list<string> &lista, int mdl) {
    queue<string> kubelki[N];
    list<string> kubelek[N];
    list<string>::iterator it;
    int i, j;
    string s;
    
    for (i = mdl - 1; i >= 0; i--) {
        it = lista.begin();
        while (it != lista.end()) {
            s = *it;
            if (s.size() > i) {
                it = lista.erase(it);
                j = alfabet.find(s[i]);
                if (j != string::npos) {
                    kubelek[j].push_back(s);
                }
            } else {
                ++it;
            }
        }
        
        for (j = 0; j < N; j++) {
            for (it = kubelek[j].begin(); it != kubelek[j].end(); it++) {
                lista.push_back(*it);
            }
            kubelek[j].clear();
        }
    }
}

int main() {
    int n, k, mdl = 0;
    list<string> lista;
    
    cout << "n= "; cin >> n;
    cout << "k= "; cin >> k;
    
    Budujliste(lista, mdl);
    Sortujslowa(lista, mdl);
    Zapiszliste(lista);
    
    return 0;
}
