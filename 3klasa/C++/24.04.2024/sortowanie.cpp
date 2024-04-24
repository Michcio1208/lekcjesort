#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortm(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


int main() {
    int n;

    cout << "Enter the number of elements in the table: ";
    cin >> n;

    int table[n];

    cout << "Enter the elements of the table:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> table[i];
    }

    // Sorting the table using bubble sort
   /* bubbleSortm(table, n);

    cout << "Sorted table in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << table[i] << " ";
    }
    cout << endl;

    return 0;
*/
bubbleSort(table, n);

    cout << "Sorted table in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << table[i] << " ";
    }
    cout << endl;

    return 0;
}
