class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        unordered_map<int, int> mp;
        int presum = 0;
        int res = 0;

        for (int i = 0; i < arr.size(); i++) {
            
            if (arr[i] == 0) {
                presum -= 1;
            } else {
                presum += 1;
            }

            if (presum == 0) {
                res = i + 1;
            }

            if (mp.find(presum) != mp.end()) {
                res = max(res, i - mp[presum]);
            } else {
                mp[presum] = i;
            }
        }

        return res;
        
    }
};