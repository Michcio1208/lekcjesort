#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortowanieKubełkowe(vector<string>& slowa) {
    const int liczbaKubełków = 26;
    vector<vector<string> > kubełki(liczbaKubełków);
    
    int i = 0;
    while (i < slowa.size()) {
        const string& slowo = slowa[i];
        if (!slowo.empty()) {
            char pierwszaLitera = tolower(slowo[0]);
            int indeks = pierwszaLitera - 'a';
            if (indeks >= 0 && indeks < liczbaKubełków) {
                kubełki[indeks].push_back(slowo);
            }
        }
        ++i;
    }
    
    slowa.clear();
    
    i = 0;
    while (i < liczbaKubełków) {
        vector<string>& kubełek = kubełki[i];
        sort(kubełek.begin(), kubełek.end());
        
        int j = 0;
        while (j < kubełek.size()) {
            slowa.push_back(kubełek[j]);
            ++j;
        }
        ++i;
    }
}

int main() {
    int liczbaSlow;
    cout << "Podaj liczbę słów: ";
    cin >> liczbaSlow;
    
    vector<string> slowa(liczbaSlow);
    int i = 0;
    cout << "Podaj słowa do posortowania:\n";
    while (i < liczbaSlow) {
        cin >> slowa[i];
        ++i;
    }
    
    sortowanieKubełkowe(slowa);
    
    cout << "Po sortowaniu:\n";
    i = 0;
    while (i < slowa.size()) {
        cout << slowa[i] << " ";
        ++i;
    }
    cout << "\n";
    
    return 0;
}
