#include <iostream>

using namespace std;

long long szybkiePotegowanie(long long podstawa, long long wykladnik, long long modulo) {
    long long wynik = 1;
    while (wykladnik > 0) {
        if (wykladnik % 2 == 1) {
            wynik = (wynik * podstawa) % modulo;
        }
        podstawa = (podstawa * podstawa) % modulo;
        wykladnik /= 2;
    }
    return wynik;
}

int main() {
    long long podstawa, wykladnik, modulo;
    cout << "Podaj podstawę, wykładnik i modulo: ";
    cin >> podstawa >> wykladnik >> modulo;
    cout << "Wynik: " << szybkiePotegowanie(podstawa, wykladnik, modulo) << endl;
    return 0;
}