#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string word) {
    int i = 0, j = word.size() - 1;
    while (i < j) {
        if (tolower(word[i]) != tolower(word[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string onlyLetters(string s) {
    string result;
    for (char c : s) {
        if (isalpha(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    string sentence, word;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    sentence += ' '; // Add space to the end to ensure the last word is processed

    while (sentence.size() > 0) {
        size_t i = sentence.find(' ');
        if (i != string::npos) {
            word = sentence.substr(0, i);
            word = onlyLetters(word);
            if (!word.empty() && isPalindrome(word)) {
                cout << word << endl;
            }
            sentence.erase(0, i + 1); // Move to the next word
        }
    }

    return 0;
}
