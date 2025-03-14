#include <iostream>
#include <vector>
using namespace std;

void CzytajWielomian(vector<float> &A) {
    int n;
    cout << "Stopien wielomianu: ";
    cin >> n;
    A.resize(n + 1);
    for (int i = n; i >= 0; i--) {
        cout << "a" << i << ": ";
        cin >> A[i];
    }
}

float Horner(const vector<float> &A, int n, float x) {
    if (n == 0) return A[0];
    return x * Horner(A, n - 1, x) + A[n];
}

int main() {
    vector<float> A;
    CzytajWielomian(A);
    float x;
    cout << "x: ";
    cin >> x;
    
    cout << "W(" << x << ") = " << Horner(A, A.size() - 1, x) << endl;
    return 0;
}
