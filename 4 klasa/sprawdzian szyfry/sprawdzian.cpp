#include <iostream>
#include <string>

using namespace std;

// Funkcja szyfrująca (odwracanie tekstu wspak)
string encrypt(const string &text) {
    string encrypted;
    // Iteracja od końca do początku oryginalnego tekstu
    for (int i = text.length() - 1; i >= 0; i--) {
        encrypted += text[i];
    }
    return encrypted;
}

// Funkcja deszyfrująca (ponowne odwracanie tekstu wspak)
string decrypt(const string &encryptedText) {
    // Deszyfrowanie jest takie samo jak szyfrowanie, bo odwrócenie odwróconego daje oryginał
    return encrypt(encryptedText);
}

int main() {
    string input;
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, input);

    // Szyfrowanie tekstu
    string encrypted = encrypt(input);
    cout << "Zaszyfrowany tekst: " << encrypted << endl;

    // Deszyfrowanie tekstu
    string decrypted = decrypt(encrypted);
    cout << "Odszyfrowany tekst: " << decrypted << endl;

    return 0;
}
