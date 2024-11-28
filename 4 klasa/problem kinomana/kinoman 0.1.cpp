#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

const int N = 10; // liczba filmów

struct Film {
    int start; // czas rozpoczęcia w minutach od północy
    int duration; // czas trwania w minutach
};

// Funkcja do porównywania filmów po ich zakończeniu
bool Porownaj(Film a, Film b) {
    return a.start + a.duration < b.start + b.duration;
}

// Funkcja obliczająca maksymalną liczbę filmów, które można obejrzeć
int MaksymalnaLiczbaFilmow(Film filmy[]) {
    int liczbaFilmow = 1; // zawsze można obejrzeć przynajmniej jeden film
    int ostatniFilm = 0; // indeks ostatniego obejrzanego filmu

    for (int i = 1; i < N; i++) {
        // Sprawdź, czy obecny film zaczyna się po zakończeniu poprzedniego
        if (filmy[i].start >= filmy[ostatniFilm].start + filmy[ostatniFilm].duration) {
            liczbaFilmow++;
            ostatniFilm = i; // aktualizuj ostatni obejrzany film
        }
    }
    return liczbaFilmow;
}

int main() {
    Film filmy[N];
    ifstream wejscie("filmy.txt"); // otwórz plik z danymi o filmach

    // Wczytaj dane z pliku
    for (int i = 0; i < N; i++) {
        wejscie >> filmy[i].start >> filmy[i].duration;
    }
    wejscie.close();

    // Posortuj filmy według czasu zakończenia
    sort(filmy, filmy + N, Porownaj);

    // Wyświetl maksymalną liczbę filmów, które można obejrzeć
    cout << "Maksymalna liczba filmów: " << MaksymalnaLiczbaFilmow(filmy) << endl;

    return 0;
}
