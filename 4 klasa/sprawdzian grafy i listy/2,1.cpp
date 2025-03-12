#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortowanieKubełkowe(vector<string>& slowa) {
    const int liczbaKubełków = 26;
    vector<vector<string>> kubełki(liczbaKubełków);
    
    for (const string& slowo : slowa) {
        if (!slowo.empty()) {
            char pierwszaLitera = tolower(slowo[0]);
            int indeks = pierwszaLitera - 'a';
            if (indeks >= 0 && indeks < liczbaKubełków) {
                kubełki[indeks].push_back(slowo);
            }
        }
    }
    
    slowa.clear();
    for (vector<string>& kubełek : kubełki) {
        sort(kubełek.begin(), kubełek.end());
        slowa.insert(slowa.end(), kubełek.begin(), kubełek.end());
    }
}

int main() {
    int liczbaSlow;
    cout << "Podaj liczbę słów: ";
    cin >> liczbaSlow;
    
    vector<string> slowa(liczbaSlow);
    cout << "Podaj słowa do posortowania:\n";
    for (int i = 0; i < liczbaSlow; ++i) {
        cin >> slowa[i];
    }
    
    sortowanieKubełkowe(slowa);
    
    cout << "Po sortowaniu:\n";
    for (const string& slowo : slowa) {
        cout << slowo << " ";
    }
    cout << "\n";
    
    return 0;
}
