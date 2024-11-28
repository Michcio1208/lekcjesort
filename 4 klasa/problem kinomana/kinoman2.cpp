#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

const int N = 10; // Liczba filmów

struct Film {
    int start;     // czas rozpoczęcia w minutach od północy
    int duration;  // czas trwania w minutach
};

// Funkcja porównująca filmy według czasu zakończenia
bool Porownaj(Film a, Film b) {
    return a.start + a.duration < b.start + b.duration;
}

// Funkcja obliczająca maksymalną liczbę filmów
int MaksymalnaLiczbaFilmow(Film filmy[]) {
    int liczbaFilmow = 0;
    int ostatniCzasZakonczenia = 0;

    for (int i = 0; i < N; i++) {
        // Jeśli film zaczyna się po zakończeniu ostatniego obejrzanego filmu
        if (filmy[i].start >= ostatniCzasZakonczenia) {
            liczbaFilmow++;
            ostatniCzasZakonczenia = filmy[i].start + filmy[i].duration;
        }
    }
    return liczbaFilmow;
}

int main() {
    Film filmy[N];

    // Wczytaj dane z pliku
    ifstream wejscie("filmy.txt");
    if (!wejscie) {
        cerr << "Nie można otworzyć pliku filmy.txt!" << endl;
        return 1;
    }
    for (int i = 0; i < N; i++) {
        wejscie >> filmy[i].start >> filmy[i].duration;
    }
    wejscie.close();

    // Posortuj filmy według czasu zakończenia
    sort(filmy, filmy + N, Porownaj);

    // Debugowanie: Wyświetl posortowaną listę filmów
    cout << "Posortowane filmy (czas zakończenia):" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Film " << i + 1 << ": start = " << filmy[i].start
             << ", koniec = " << filmy[i].start + filmy[i].duration << endl;
    }

    // Oblicz maksymalną liczbę filmów i wyświetl wynik
    cout << "Maksymalna liczba filmów: " << MaksymalnaLiczbaFilmow(filmy) << endl;

    return 0;
}
