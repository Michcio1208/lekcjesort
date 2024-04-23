#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string userInput;
    cout << "Enter a text: ";
    getline(cin, userInput);

    cout << "Text in big letters:\n";
    for (char c : userInput) {
        if (isupper(c)) {
            cout << c;
        }
    }
    cout << endl;

    return 0;
}
