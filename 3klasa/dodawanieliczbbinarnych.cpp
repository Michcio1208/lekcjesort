#include <iostream>
using namespace std;
#include <cmath>

int bnad(const string & binary) {
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += static_cast<int>(pow(2, power));
        }
        ++power;
    }

    return decimal;
}

string dnab(int decimal) {
    string binary;

    while (decimal > 0) {
        binary = (char)('0' + decimal % 2) + binary;
        decimal /= 2;
    }

    return binary.empty() ? "0" : binary;
}

int main() {
    string input1, input2;
    char format;

    
    cout << "Podaj typ wpisywanej liczby (b dla binarnych, d dla dziesietncyh): ";
    cin >> format;

    
    cout << "Wpisz pierwsza liczbe:  ";
    cin >> input1;
    cout << "Wpisz druga liczbe: ";
   cin >> input2;

    
    int decimal1, decimal2;

    if (format == 'b') {
        decimal1 = bnad(input1);
        decimal2 = bnad(input2);
    } else if (format == 'd') {
        decimal1 = stoi(input1);
        decimal2 = stoi(input2);
    } else {
       cerr << "nastepnym razem wpisz b lub d " <<endl;
        return 1;
    }

    
    int sum = decimal1 + decimal2;

    cout << "Suma w postaci binarnej: " << dnab(sum) <<endl;
    cout << "Sum suma w postaci dziesietnej:  " << sum << endl;

    return 0;
}

