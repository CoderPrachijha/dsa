class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n + 1, 0);
        for(int no: nums){
            freq[no]++;

        }
         vector<int> result;
         for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) {
                result.push_back(i);
            }
        }

        return result;
    }
};