class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int,int> freq; 
        long long sum = 0, res = 0;
        int i = 0;
        
        for(int j= 0; j < n; j++) {
            freq[arr[j]]++;
            sum += arr[j];
            
           
            if(j - i + 1 > k) {
                sum -= arr[i];
                freq[arr[i]]--;
                if(freq[arr[i]] == 0) freq.erase(arr[i]);
                i++;
            }
            
            if(j - i + 1 == k && freq.size() == k) {
                res = max(res, sum);
            }
        }
        
        return res;
    }
};
