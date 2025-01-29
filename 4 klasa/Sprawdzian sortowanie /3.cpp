#include <iostream>

using namespace std;

void quicksort(int tablica[], int p, int k) {
    int i = p, j = k;
    int m = tablica[(p + k) / 2]; 
    
    while (i <= j) { 
        while (tablica[i] < m) i++;
        while (tablica[j] > m) j--;
        if (i <= j) {
            swap(tablica[i], tablica[j]);
            i++;
            j--;
        }
    }
    
    if (p < j) quicksort(tablica, p, j);
    if (i < k) quicksort(tablica, i, k);
}

int main() {
    int tablica[] = {37, 29, 85, 14, 67, 92, 48, 73};
    int n = sizeof(tablica) / sizeof(tablica[0]);

    quicksort(tablica, 0, n - 1); 

    cout << "Posortowana tablica : ";
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
