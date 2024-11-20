#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

const int N = 4;
const int nominaly[] = {1, 2, 4, 5};
const int kwota = 8;

int resztadynamicznie2tablice(int Reszta[]) {
    int IleM[kwota + 1];
    int ResztaM[kwota + 1][N] = {0}; // Poprawna deklaracja tablicy 2D
    IleM[0] = 0;

    for (int i = 1; i <= kwota; i++) IleM[i] = kwota + 1; // Inicjalizacja dużą wartością

    for (int i = 1; i <= kwota; i++) {
        for (int j = 0; j < N; j++) { // Poprawiona pętla
            if (nominaly[j] <= i) {
                if (IleM[i - nominaly[j]] + 1 < IleM[i]) {
                    IleM[i] = IleM[i - nominaly[j]] + 1;

                    for (int k = 0; k < N; k++) // Przepisanie stanu ResztaM
                        ResztaM[i][k] = ResztaM[i - nominaly[j]][k];

                    ResztaM[i][j]++;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) Reszta[i] = ResztaM[kwota][i];
    return IleM[kwota];
}

int main() {
    int Reszta[N];
    cout << "Minimalna liczba monet to dla kwoty " << kwota << ": "
         << resztadynamicznie2tablice(Reszta) << endl;

    cout << "Rozkład monet: ";
    for (int i = 0; i < N; i++) {
        cout << nominaly[i] << "x" << Reszta[i] << " ";
    }
    cout << endl;

    return 0;
}
