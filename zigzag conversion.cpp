#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }
        string rows[numRows];
        int currentRow = 0;
        bool goingDown = false;
        for (char c : s) {
            rows[currentRow] += c;
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }
            currentRow += goingDown ? 1 : -1;
        }
        string result;
        for (int i = 0; i < numRows; ++i) {
            result += rows[i];
        }
        return result;
    }
};
int main() {
    Solution solution;
    string s = "PAYPALISHIRING";
    int numRows = 3;
    string result = solution.convert(s, numRows);
    cout << "Zigzag conversion: " << result << endl;
    return 0;
}
