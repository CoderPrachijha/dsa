class Solution {
public:
    
    int maximum(vector<int>& nums) {
        int maxi = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
        }

        return maxi;
    }

    bool isGood(vector<int>& nums) {

        int n = maximum(nums);

        // size should be n + 1
        if (nums.size() != n + 1) {
            return false;
        }

        sort(nums.begin(), nums.end());

        // check 1 to n-1
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != i + 1) {
                return false;
            }
        }

        // last two elements should be n
        if (nums[n - 1] != n || nums[n] != n) {
            return false;
        }

        return true;
    }
};