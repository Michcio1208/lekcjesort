#include <iostream>
#include <cmath>

// Function to convert binary string to decimal
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

// Function to convert decimal to binary string
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

    // Input format
    std::cout << "Enter the format of the first number (b for binary, d for decimal): ";
    std::cin >> format;

    // Input numbers
    std::cout << "Enter the first number: ";
    std::cin >> input1;
    std::cout << "Enter the second number: ";
    std::cin >> input2;

    // Convert input to decimal form
    int decimal1, decimal2;

    if (format == 'b') {
        decimal1 = binaryToDecimal(input1);
        decimal2 = binaryToDecimal(input2);
    } else if (format == 'd') {
        decimal1 = std::stoi(input1);
        decimal2 = std::stoi(input2);
    } else {
        std::cerr << "Invalid input format. Please use 'b' for binary or 'd' for decimal." << std::endl;
        return 1;
    }

    // Perform addition
    int sum = decimal1 + decimal2;

    // Display the result
    std::cout << "Sum in binary: " << decimalToBinary(sum) << std::endl;
    std::cout << "Sum in decimal: " << sum << std::endl;

    return 0;
}
