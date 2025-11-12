class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string s = "1";
        for (int i = 2; i <= n; i++) {
            string t;
            int len = s.size();
            
            for (int j = 0; j < len; ) {
                char curr = s[j];
                int count = 0;
                while (j < len && s[j] == curr) {
                    count++;
                    j++;
                }
                t += to_string(count);
                t += curr;
            }
            
            s.swap(t); // ✅ more memory-efficient than s = t
        }
        return s;
    }
};
