#include <iostream>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        const int charSetSize = 256;
        int charIndex[charSetSize];
        fill(charIndex, charIndex + charSetSize, -1);
        int maxLength = 0;
        int start = 0;
        for (int end = 0; end < n; ++end) {
            if (charIndex[s[end]] != -1) {
                start = max(charIndex[s[end]] + 1, start);
            }
            charIndex[s[end]] = end;
            maxLength = max(maxLength, end - start + 1);
        }
        return maxLength;
    }
};
int main() {
    Solution solution;
    string s = "abcabcbb";
    int result = solution.lengthOfLongestSubstring(s);
    cout << "Length of the longest substring without repeating characters: " << result << endl;
    return 0;
}
