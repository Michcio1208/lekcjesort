#include <iostream>
using namespace std;

long long potega(int x, int n) {
    if (n == 0) return 1; 
    if (n % 2 == 0) {
        long long half = potega(x, n / 2);
        return half * half;
    } else {
        return x * potega(x, n - 1);
    }
}

int main() {
    int x, n;
    cout << "Podaj podstawę potęgi: ";
    cin >> x;
    cout << "Podaj wykładnik: ";
    cin >> n;
    
    long long wynik = potega(x, n);
    cout << "Wynik: " << wynik << endl;
    
    return 0;
}
