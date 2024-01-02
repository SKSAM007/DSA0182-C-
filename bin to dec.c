#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int binaryNumber) 
{
    int decimalNumber = 0, base = 1;
    while (binaryNumber > 0) 
	{
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += lastDigit * base;
        base *= 2;
    }
    return decimalNumber;
}
int main() 
{
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    int decimal = binaryToDecimal(binaryNumber);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}
