class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int res=nums[0];
        int maxh=nums[0];
        int minh=nums[0];
        
        for (int i=1; i<n;i++){
            if(nums[i]<0){
                swap(maxh,minh);
                
            }
            maxh=max(maxh*nums[i],nums[i]);
            minh=min(minh*nums[i],nums[i]);
            
            res=max(res,maxh);
            
        }
        return res;
        
    }
};