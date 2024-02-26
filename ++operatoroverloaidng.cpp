#include <iostream>
using namespace std;

class incree {
private:
    int value;
public:
    incree(int v) : value(v) {}

    incree& operator++() {
        ++value;
        return *this;
    }

    incree operator++(int) {
        incree temp(value);
        ++value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    incree x(5);

    cout << "Initial value of x: " << x.getValue() << endl;

    ++x;
    cout << "After pre-increment, x: " << x.getValue() << endl;

    x++;
    cout << "After post-increment, x: " << x.getValue() << endl;

    return 0;
}
