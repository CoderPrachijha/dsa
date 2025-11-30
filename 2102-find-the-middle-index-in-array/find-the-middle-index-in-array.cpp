class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        long long  leftSum=0;
        long long totalSum=accumulate(nums.begin(),nums.end(),0LL);
        for(int i=0;i<n;i++){
            totalSum-=nums[i];
            if(leftSum==totalSum){
                return i;

            }
            else{
                leftSum+=nums[i];
            }
        }

        return -1;
    }
};