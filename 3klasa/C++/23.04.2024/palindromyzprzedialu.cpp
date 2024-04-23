#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    string str = to_string(num);
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    int start, end;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;

    cout << "Palindromic numbers in the range [" << start << ", " << end << "] are:" << endl;
    vector<int> palindromes;

    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            palindromes.push_back(i);
    }

    if (palindromes.empty()) {
        cout << "There are no palindromic numbers in the given range." << endl;
    } else {
        for (int num : palindromes) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
