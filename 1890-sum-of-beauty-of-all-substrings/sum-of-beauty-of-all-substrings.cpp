class Solution {
public:
    int beautySum(string s) {
        int ans = 0;   

        for (int i = 0; i < s.length(); i++) {

            unordered_map<char,int> freq;   

            for (int j = i; j < s.length(); j++) {   
                freq[s[j]]++;   

                int max1 = 0;
                int min1 = INT_MAX;

                
                for (auto it : freq) {
                    max1 = max(max1, it.second);
                    min1 = min(min1, it.second);
                }

                ans += (max1 - min1);   
            }
        }
        return ans;
    }
};
