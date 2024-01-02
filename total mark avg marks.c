#include <iostream>
using namespace std;
int main() {
    int rollno;
    float sub1, sub2, sub3;
    float tm, am;
    cout << "Enter Roll Number: ";
    cin >> rollno;
    cout << "Enter marks of Subject 1: ";
    cin >> sub1;
    cout << "Enter marks of Subject 2: ";
    cin >> sub2;
    cout << "Enter marks of Subject 3: ";
    cin >> sub3;
    tm = sub1 + sub2 + sub3;
    am = tm / 3.0;
    cout << "\nRoll Number: " << rollno << endl;
    cout << "Total Marks: " << tm << endl;
    cout << "Average Marks: " << am << endl;
    return 0;
}
