#include <iostream>
using namespace std;
#define SWAP(a, b) { a = a + b; b = a - b; a = a - b; }
int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "\nBefore swapping: ";
    cout << "First number = " << num1 << ", Second number = " << num2 << endl;
    SWAP(num1, num2);
    cout << "\nAfter swapping: ";
    cout << "First number = " << num1 << ", Second number = " << num2 << endl;
    return 0;
}
