#include <iostream>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if (n <= 1) {
            return s;
        }
        int start = 0;
        int maxLength = 1;
        bool table[n][n];
        fill_n(*table, n * n, false);
        for (int i = 0; i < n; ++i) {
            table[i][i] = true;
        }
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                table[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }
        for (int len = 3; len <= n; ++len) {
            for (int i = 0; i <= n - len; ++i) {
                int j = i + len - 1;
                if (table[i + 1][j - 1] && s[i] == s[j]) {
                    table[i][j] = true;
                    start = i;
                    maxLength = len;
                }
            }
        }
        return s.substr(start, maxLength);
    }
};
int main() {
    Solution solution;
    string s = "babad";
    string result = solution.longestPalindrome(s);
    cout << "Longest palindromic substring: " << result << endl;
    return 0;
}
