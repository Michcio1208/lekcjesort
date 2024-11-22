#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int makswaga = 17; // Maksymalna waga plecaka
const int N = 5;         // Liczba przedmiotów

struct Przedmiot {
    int wart, waga;
};

int plecakdynamicznie(Przedmiot P[]) {
    int W[makswaga + 1] = {0}; // Tablica wartości dynamicznych, inicjalizowana zerami

    for (int i = 1; i <= makswaga; i++) {
        for (int j = 0; j < N; j++) {
            if (P[j].waga <= i) { // Jeśli waga przedmiotu mieści się w bieżącej wadze
                W[i] = max(W[i], W[i - P[j].waga] + P[j].wart);
            }
        }
    }
    return W[makswaga];
}

int main(){
    Przedmiot P[N];
    ifstream wej("do-plecaka.txt");
    if (!wej) { // Sprawdź, czy plik został poprawnie otwarty
        cerr << "Blad: nie mozna otworzyc pliku 'do-plecaka.txt'." << endl;
        return 1;
    }

    for (int i = 0; i < N; i++) {
        wej >> P[i].wart >> P[i].waga;
        if (wej.fail()) { // Sprawdź, czy wczytywanie zakończyło się sukcesem
            cerr << "Blad: niepoprawne dane w pliku." << endl;
            return 1;
        }
    }
    wej.close();

    cout << "Maksymalna wartosc plecaka to: " << plecakdynamicznie(P) << endl;

}