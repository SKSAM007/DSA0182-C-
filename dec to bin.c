#include <iostream>
using namespace std;
void decimalToBinary(int decimalNumber) {
    int binaryNumber[32]; 
    int i = 0;
    while (decimalNumber > 0) {
        binaryNumber[i] = decimalNumber % 2;
        decimalNumber /= 2;
        i++;
    }
    cout << "Binary equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNumber[j];
    }
    cout << endl;
}
int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    decimalToBinary(decimalNumber);
    return 0;
}
