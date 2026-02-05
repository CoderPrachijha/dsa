class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                result[i]=0;

            }
            else{
                int move=nums[i];
                int newindex=i+move;
                while(newindex<0){
                    newindex=newindex +n;

                }
                while(newindex>=n){
                    newindex=newindex-n;

                }
                result[i]=nums[newindex];

            }

        }
        return result;

        
    }
};