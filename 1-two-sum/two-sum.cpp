class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Store values with their original indices
        vector<pair<int,int>> arr; // {value, original_index}
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // Step 2: Sort by value
        sort(arr.begin(), arr.end());

        // Step 3: Two-pointer search
        int small = 0, large = arr.size() - 1;
        while (small < large) {
            int sum = arr[small].first + arr[large].first;

            if (sum == target) {
                // Return original indices
                return {arr[small].second, arr[large].second};
            }
            else if (sum > target) {
                large--;
            }
            else {
                small++;
            }
        }

        return {-1, -1}; // No solution
    }
};
