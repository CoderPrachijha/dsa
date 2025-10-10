class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num))  // already exists
                return true;
            seen.insert(num);
        }
        return false;
    }
};