#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 5; // Liczba przedmiotów

struct Przedmiot {
    int wart, waga; // Wartość i waga przedmiotu
};

// Funkcja porównująca przedmioty według stosunku wartość/waga (malejąco)
bool Porownaj(Przedmiot a, Przedmiot b) {
    return (float(a.wart) / a.waga > float(b.wart) / b.waga);
}

// Funkcja obliczająca maksymalną wartość plecaka
int plecak(Przedmiot P[], int makswaga, int K[]) {
    int makswart = 0; // Maksymalna wartość plecaka

    // Algorytm zachłanny - wybieranie przedmiotów
    for (int i = 0; i < N; i++) {
        if (P[i].waga <= makswaga) {
            K[i] = makswaga / P[i].waga; // Ile sztuk przedmiotu można wziąć
            makswaga -= K[i] * P[i].waga; // Zmniejsz dostępną wagę
            makswart += K[i] * P[i].wart; // Zwiększ wartość plecaka
        } else {
            K[i] = 0; // Nie można wziąć żadnego przedmiotu
        }
    }

    return makswart;
}

int main() {
    Przedmiot P[N]; // Tablica przedmiotów
    int K[N] = {0}; // Tablica ilości przedmiotów wziętych
    int makswaga = 17; // Maksymalna waga plecaka

    // Wczytanie danych z pliku
    ifstream wej("do-plecaka.txt");
    if (!wej) {
        cerr << "Błąd otwarcia pliku!" << endl;
        return 1;
    }

    for (int i = 0; i < N; i++) {
        wej >> P[i].wart >> P[i].waga;
    }
    wej.close();

    // Sortowanie przedmiotów według stosunku wartość/waga
    sort(P, P + N, Porownaj);

    // Obliczenie maksymalnej wartości plecaka
    int makswart = plecak(P, makswaga, K);

    // Wyświetlenie wyniku
    cout << "Maksymalna wartość: " << makswart << endl;
    cout << "Przedmioty w plecaku:" << endl;

    for (int i = 0; i < N; i++) {
        if (K[i] > 0) {
            cout << "Przedmiot " << i + 1 << ": " << K[i] 
                 << " szt. (wartość: " << P[i].wart 
                 << ", waga: " << P[i].waga << ")" << endl;
        }
    }

    return 0;
}
