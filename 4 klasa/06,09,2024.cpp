#include <iostream
#include <cstring>
using namespace std;


int main()
{
    string jawny, szyfrogram;
    int klucz, dl;
    
    cout << "Podaj tekst jawny: ";
    cin >> jawny;
    cout << "Podaj klucz: ";
    cin >> klucz;
    
    dl = jawny.length();
    
    for (int i = 0; i < klucz; i++)
        for (int j = i; j < dl; j += klucz)
            szyfrogram += jawny[j];
    
    cout << szyfrogram << endl;
}
