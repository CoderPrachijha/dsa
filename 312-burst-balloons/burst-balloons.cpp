class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        nums.insert(nums.begin(), 1);
        nums.push_back(1);

        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        for (int i = 2; i <= n + 1; i++) {  
            for (int left = 0; left + i <= n + 1; left++) {
                int right = left + i;
                for (int j = left + 1; j < right; j++) {
                    dp[left][right] = max(
                        dp[left][right],
                        dp[left][j] + nums[left] * nums[j] * nums[right] + dp[j][right]
                    );
                }
            }
        }
        return dp[0][n + 1];
    }
};
