#include <iostream>
using namespace std;

int nwd_odejmowanie(int liczba1, int liczba2) {
    while (liczba1 != liczba2) {
        if (liczba1 > liczba2)
            liczba1 -= liczba2;
        else
            liczba2 -= liczba1;
    }
    return liczba1;
}

int main() {
    int liczba1, liczba2;
    cout << "Podaj dwie liczby: ";
    cin >> liczba1 >> liczba2;
    cout << "Największy wspólny dzielnik: " << nwd_odejmowanie(liczba1, liczba2) << endl;
    return 0;
}
