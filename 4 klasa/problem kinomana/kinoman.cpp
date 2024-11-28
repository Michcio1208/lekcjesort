#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

const int N = 10;

struct Film {
    int start;
    int duration;
};

bool Porownaj(Film a, Film b) {
    return a.start + a.duration < b.start + b.duration;
}

int MaksymalnaLiczbaFilmow(Film filmy[]) {
    int liczbaFilmow = 1;
    int ostatniFilm = 0;

    for (int i = 1; i < N; i++) {
        if (filmy[i].start >= filmy[ostatniFilm].start + filmy[ostatniFilm].duration) {
            liczbaFilmow++;
            ostatniFilm = i;
        }
    }
    return liczbaFilmow;
}

int main() {
    Film filmy[N];
    ifstream wejscie("filmy.txt");

    for (int i = 0; i < N; i++) {
        wejscie >> filmy[i].start >> filmy[i].duration;
    }
    wejscie.close();

    sort(filmy, filmy + N, Porownaj);

    cout << "Maksymalna liczba filmów: " << MaksymalnaLiczbaFilmow(filmy) << endl;

    return 0;
}
