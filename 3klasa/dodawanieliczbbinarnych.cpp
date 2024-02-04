#include <iostream>
using namespace std;
#include <cmath>

int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += static_cast<int>(std::pow(2, power));
        }
        ++power;
    }

    return decimal;
}

std::string decimalToBinary(int decimal) {
    std::string binary;

    while (decimal > 0) {
        binary = (char)('0' + decimal % 2) + binary;
        decimal /= 2;
    }

    return binary.empty() ? "0" : binary;
}

int main() {
    std::string input1, input2;
    char format;

    
    cout << "Podaj typ wpisywanej liczby (b dla binarnych, d dla dziesietncyh): ";
    cin >> format;

    
    std::cout << "Wpisz pierwsza liczbe:  ";
    std::cin >> input1;
    std::cout << "Wpisz druga liczbe: ";
    std::cin >> input2;

    
    int decimal1, decimal2;

    if (format == 'b') {
        decimal1 = binaryToDecimal(input1);
        decimal2 = binaryToDecimal(input2);
    } else if (format == 'd') {
        decimal1 = std::stoi(input1);
        decimal2 = std::stoi(input2);
    } else {
        std::();cerr << "Wpisz b lub d " <<endl;
        return 1;
    }

    
    int sum = decimal1 + decimal2;

    std::cout << "Suma w postaci binarnej: " << decimalToBinary(sum) << std::endl;
    std::cout << "Sum suma w postaci dziesietnej:  " << sum << endl;

    return 0;
}

