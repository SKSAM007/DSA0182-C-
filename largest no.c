#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    int bn = num1;
    if (num2 > biggest) {
        bn = num2;
    }
    if (num3 > biggest) {
        bn = num3;
    }
    cout << "The biggest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << bn << endl;
    return 0;
}
