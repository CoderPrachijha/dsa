class Solution {
public:
    string longestPalindrome(string s) {

        int n = s.length();
        if (n <= 1) return s;

        int start = 0;
        int maxLen = 1;

        for (int i = 1; i < n; i++) {

            // Case 1: Even length palindromes, center = (i-1 , i)
            int l = i - 1;
            int h = i;
            while (l >= 0 && h < n && s[l] == s[h]) {
                if (h - l + 1 > maxLen) {
                    start = l;
                    maxLen = h - l + 1;
                }
                l--;
                h++;
            }

            // Case 2: Odd length palindromes, center = (i)
            l = i - 1;
            h = i + 1;
            while (l >= 0 && h < n && s[l] == s[h]) {
                if (h - l + 1 > maxLen) {
                    start = l;
                    maxLen = h - l + 1;
                }
                l--;
                h++;
            }
        }

        return s.substr(start, maxLen);
    }
};
