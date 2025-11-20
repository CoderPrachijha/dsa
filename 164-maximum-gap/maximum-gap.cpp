class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<2) return 0;
        
        int maxGap = 0;
        for(int i = 1; i < n; i++){
            maxGap = max(maxGap, nums[i] - nums[i-1]);
        }

        return maxGap;
    }
};
        