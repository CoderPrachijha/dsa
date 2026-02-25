class Solution {
public:

    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> res;

        for(int i=0;i<n;i++){
            int setbit=__builtin_popcount(arr[i]);
            res.push_back({setbit,arr[i]});


        }
        sort(res.begin(),res.end());
        vector<int>ans;

        for(int j=0;j<res.size();j++){
            ans.push_back(res[j][1]);

        }
        return ans;
        
    }
};