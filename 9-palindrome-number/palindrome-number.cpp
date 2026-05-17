class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;
        int original = x;

        while (x != 0) {
            int digit = x % 10;
            
            // Optional overflow check (not needed unless you're reversing the whole int)
            if (rev > INT_MAX / 10) return false;
            
            rev = rev * 10 + digit;
            x = x / 10;
        }

        return rev == original;
    }
};
