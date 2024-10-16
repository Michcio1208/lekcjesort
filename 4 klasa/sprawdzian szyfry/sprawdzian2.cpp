#include <iostream>
#include <string>

using namespace std;

string przestaw(string tj, string kl)
{
    string szyfrogram = "";
    int i, j;

    while (tj.size() % kl.size() != 0) 
        tj += 'X';

    for (j = 0; j < kl.size(); j++)
        for (i = 0; i < tj.size() / kl.size(); i++)
            szyfrogram += tj[i * kl.size() + (kl[j] - '0') - 1];

    return szyfrogram;
}

int main() 
{
    string klucz, tekst;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, tekst);
    cout << "Podaj klucz: ";
    cin >> klucz;

    string zaszyfrowany = przestaw(tekst, klucz);
    cout << "Zaszyfrowany tekst: " << zaszyfrowany << endl;

    return 0;
}
