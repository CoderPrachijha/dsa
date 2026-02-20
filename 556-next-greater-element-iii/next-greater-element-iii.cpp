class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if (!next_permutation(s.begin(), s.end()))
            return -1;

        long long r = stoll(s);

        if (r > INT_MAX) return -1;

        return (int)r;
    }

    
};