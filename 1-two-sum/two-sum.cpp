class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> v;
        
        // 1. Store original index with value
        for (int i = 0; i < n; i++) {
            v.push_back({nums[i], i});
        }
        
        // 2. Sort based on values
        sort(v.begin(), v.end());
        
        
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = v[left].first + v[right].first;
            
            if (sum == target) {
               
                return {v[left].second, v[right].second};
            } 
            else if (sum > target) {
                right--;
            } 
            else {
                left++;
            }
        }
        return {};
    }
};