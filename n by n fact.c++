#include <iostream>
using namespace std;
class SeriesCalculator {
public:
    double calculateSum(int n) {
        double sum = 0;
        unsigned long long factorial = 1;
        int numerator = 1;
        for (int i = 1; i <= n; ++i) {
            sum += static_cast<double>(numerator) / factorial;
            numerator += 2 + i * 4;
            factorial *= (numerator - 1) * numerator;
        }
        return sum;
    }
};
int main() {
    int num_terms;
    cout << "Enter the number of terms: ";
    cin >> num_terms;
    SeriesCalculator series;
    double result = series.calculateSum(num_terms);
    cout << "Sum of the series up to " << num_terms << " terms: " << result << endl;
    return 0;
}
