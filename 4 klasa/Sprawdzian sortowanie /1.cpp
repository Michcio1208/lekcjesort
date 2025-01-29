#include <iostream>
#include <cmath>
using namespace std;

int cyfraJednosci(int liczba) {
    return abs(liczba) % 10;
}

void sortuj (int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (cyfraJednosci(arr[j]) > cyfraJednosci(arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[] = {37, 29, 85, 14, 67, 92, 48, 73};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortuj(arr, n);

    cout << "Posortowana tablica wedlug cyfry jednosci: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
