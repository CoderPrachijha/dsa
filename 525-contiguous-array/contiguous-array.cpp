class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mpp;

        int prefixsum = 0;
        int maxi = 0;

        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0)prefixsum -= 1;
            else prefixsum += 1;

            if(prefixsum == 0)maxi = max(maxi, i - 0 + 1);

            if(mpp.find(prefixsum) != mpp.end()){
                maxi = max(maxi, i - mpp[prefixsum]);
            }
            else mpp[prefixsum] = i;
        }
        return maxi;
    }
};