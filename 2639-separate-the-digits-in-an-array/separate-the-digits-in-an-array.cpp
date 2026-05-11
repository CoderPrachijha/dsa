class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>arr;
        for(int i=nums.size()-1;i>=0;i--){
            while(nums[i]!=0){
                int digit=nums[i]%10;
                arr.push_back(digit);
                nums[i]/=10;

            }
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};