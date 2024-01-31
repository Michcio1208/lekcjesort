#include <iostream>
#include <bitset>

int main() {
    string input1, input2;
    char format;

    // Input format
   cout << "Enter the format of the first number (b for binary, d for decimal): ";
    cin >> format;

    // Input numbers
    cout << "Enter the first number: ";
    cin >> input1;
   cout << "Enter the second number: ";
    cin >> input2;

    // Convert input to decimal form
    int decimal1, decimal2;

    if (format == 'b') {
        decimal1 = bitset<32>(input1).to_ulong();
        decimal2 = bitset<32>(input2).to_ulong();
    } else if (format == 'd') {
        decimal1 = stoi(input1);
        decimal2 = stoi(input2);
    } else {
        cerr << "Invalid input format. Please use 'b' for binary or 'd' for decimal." << endl;
        return 1;
    }

    // Perform addition
    int sum = decimal1 + decimal2;

    // Display the result
    cout << "Sum in binary: " << bitset<32>(sum) << endl;
    cout << "Sum in decimal: " << sum << endl;

    return 0;
}
