class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>freq_map;
        for(int num:nums){
            freq_map[num]++;
        }
        int max_freq = 0;
        for (auto it : freq_map) {
            if (it.second > max_freq) {
              max_freq = it.second;
            }
        }
        int total = 0;
        for (auto it : freq_map) {
           if (it.second == max_freq) {
               total += it.second;
            }
        }

        return total;
        
    }
};