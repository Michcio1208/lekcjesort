#include <iostream>

using namespace std;

void sortowanieBabelkoweMalejaco(int tablica[], int n) {
 for (int i = 0; i < n - 1; i++) {
 for (int j = 0; j < n - i - 1; j++) {
 if (tablica[j] < tablica[j + 1]) {
 swap(tablica[j], tablica[j + 1]);
}
}
}
}

int main() {
 int tablica[] = {37, 29, 85, 14, 67, 92, 48, 73};
 int n = sizeof(tablica) / sizeof(tablica[0]);

 sortowanieBabelkoweMalejaco(tablica, n);

 cout << "Posortowana tablica malejaco: ";
 for (int i = 0; i < n; i++) {
 cout << tablica[i] << " ";
 }
cout << endl;

 return 0;
}
