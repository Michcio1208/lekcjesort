#include <iostream>
#include <string>

using namespace std;

string przestaw(string tj, string kl)
{
    string szyfrogram = "";
    int i, j;
    int kolumny = kl.size();


    while (tj.size() % kolumny != 0) 
        tj += 'X';


    int indeksy[10];  
    for (i = 0; i < kolumny; i++) {
        indeksy[i] = kl[i] - '0' - 1;  
    }

    for (i = 0; i < tj.size() / kolumny; i++) {
        for (j = 0; j < kolumny; j++) {
            szyfrogram += tj[i * kolumny + indeksy[j]];
        }
    }

    return szyfrogram;
}

int main() 
{
    string klucz, tekst;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, tekst);
    cout << "Podaj klucz : ";
    cin >> klucz;

    string zaszyfrowany = przestaw(tekst, klucz);
    cout << "Zaszyfrowany tekst: " << zaszyfrowany << endl;

    return 0;
}
