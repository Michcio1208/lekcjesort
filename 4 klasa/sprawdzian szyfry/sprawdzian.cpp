#include <iostream>
#include <string>

using namespace std;


string encrypt(const string &text) {
    string encrypted;

    for (int i = text.length() - 1; i >= 0; i--) {
        encrypted += text[i];
    }
    return encrypted;
}


string decrypt(const string &encryptedText) {

    return encrypt(encryptedText);
}

int main() {
    string input;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, input);


    string encrypted = encrypt(input);
    cout << "Zaszyfrowany tekst: " << encrypted << endl;


    string decrypted = decrypt(encrypted);
    cout << "Odszyfrowany tekst: " << decrypted << endl;

    return 0;
}
