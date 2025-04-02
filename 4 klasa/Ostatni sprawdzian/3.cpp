#include <iostream>
#include <vector>

using namespace std;

void sortowaniePrzezWstawianie(vector<int>& liczby) {
    int n = liczby.size();
    for (int i = 1; i < n; i++) {
        int klucz = liczby[i];
        int j = i - 1;
        while (j >= 0 && liczby[j] > klucz) {
            liczby[j + 1] = liczby[j];
            j--;
        }
        liczby[j + 1] = klucz;
    }
}

void wypiszLiczby(const vector<int>& liczby) {
    for (int liczba : liczby) {
        cout << liczba << " ";
    }
    cout << endl;
}

int main() {
    vector<int> liczby = {5, 2, 9, 1, 5, 6};
    sortowaniePrzezWstawianie(liczby);
    wypiszLiczby(liczby);
    return 0;
}
