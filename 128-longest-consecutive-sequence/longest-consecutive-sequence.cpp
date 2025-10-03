class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int longest = 1;
        int count = 1;
        int lastmin = nums[0];

        for(int i = 1; i < n; i++) {
            if(nums[i] == lastmin + 1) {
                count++;
                lastmin = nums[i];
            }
            else if(nums[i] != lastmin) { // skip duplicates
                count = 1;
                lastmin = nums[i];
            }
            longest = max(longest, count);
        }

        return longest;
    }
};
