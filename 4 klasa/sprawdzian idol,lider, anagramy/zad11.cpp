#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void zlicz(string s, int ile[]) {
    for(int i = 0; i < 26; i++) ile[i] = 0;
    for(int i = 0; i < s.size(); i++) {
        ile[toupper(s[i]) - 'A']++;  // Używamy toupper, aby obsłużyć zarówno małe jak i duże litery
    }
}

bool anagram(string s1, string s2) {
    int ile1[26], ile2[26];
    if(s1.size() != s2.size()) return false;
    zlicz(s1, ile1);
    zlicz(s2, ile2);
    for(int i = 0; i < 26; i++) {
        if(ile1[i] != ile2[i]) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cout << "Podaj pierwsze slowo: ";
    cin >> s1;
    cout << "Podaj drugie slowo: ";
    cin >> s2;

    if(anagram(s1, s2)) {
        cout << "Tak, slowa sa anagramami." << endl;
    } else {
        cout << "Nie, slowa nie sa anagramami." << endl;
    }

    return 0;
}
