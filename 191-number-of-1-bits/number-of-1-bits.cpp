class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n > 0) {
            // Agar last bit 1 hai, to count badhao
            count += (n & 1);
            // Right shift n to check the next bit
            n >>= 1;
        }
        return count;
    }
};