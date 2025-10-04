class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
       
        int maxabs=nums[0];
        int minabs=nums[0];
        int res=abs(nums[0]);
        for(int i=1;i<n;i++){
            
            maxabs=max(maxabs + nums[i], nums[i]);
            minabs=min(minabs + nums[i], nums[i]);
            res=max(res, max(abs(maxabs),abs(minabs)));




        }
        return res;
        
    }
};