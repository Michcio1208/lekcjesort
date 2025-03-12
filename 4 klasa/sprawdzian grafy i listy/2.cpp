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
    vector<string> slowa = {"kot", "pies", "jabłko", "banan", "ananas", "zebra", "słoń"};
    
    cout << "Przed sortowaniem:\n";
    for (const string& slowo : slowa) {
        cout << slowo << " ";
    }
    cout << "\n";
    
    sortowanieKubełkowe(slowa);
    
    cout << "Po sortowaniu:\n";
    for (const string& slowo : slowa) {
        cout << slowo << " ";
    }
    cout << "\n";
    
    return 0;
}
