#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    string input;
    cout << "Enter a string containing numbers: ";
    getline(cin, input);

    stringstream ss(input);
    string word;
    int num;

    cout << "Palindromic numbers found in the string:" << endl;

    while (ss >> word) {
        if (stringstream(word) >> num && isPalindrome(num)) {
            cout << num << endl;
        }
    }

    return 0;
}
