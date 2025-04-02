#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Fibonacci(" << liczba << ") = " << fibonacci(liczba) << endl;
    return 0;
}
