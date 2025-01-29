#include <iostream>

using namespace std;

const int N = 8;

void Merge(int A[], int p, int s, int k) {
    int i = p, j = s + 1, m = p;
    int B[N];

    while (i <= s && j <= k) {
        if (A[i] < A[j]) {
            B[m] = A[i];
            i++;
        } else {
            B[m] = A[j];
            j++;
        }
        m++;
    }

    while (i <= s) {
        B[m] = A[i];
        i++;
        m++;
    }

    while (j <= k) {
        B[m] = A[j];
        j++;
        m++;
    }

    for (i = p; i <= k; i++) {
        A[i] = B[i];
    }
}

void MergeSort(int A[], int p, int k) {
    if (p < k) {
        int s = (p + k) / 2;
        MergeSort(A, p, s);
        MergeSort(A, s + 1, k);
        Merge(A, p, s, k);
    }
}

void Wypisz(int A[]) {
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[N] = {37, 29, 85, 14, 67, 92, 48, 73};
    Wypisz(A);
    MergeSort(A, 0, N - 1);
    Wypisz(A);
    return 0;
}
