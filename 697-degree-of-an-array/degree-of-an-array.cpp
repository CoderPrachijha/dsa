class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>count, first , last;
        for(int i=0;i<n;i++){
            int x=nums[i];
            if(first.find(x)==first.end()){
                first[x]=i;
            }
                last[x] = i;
            
            
                count[x]++;

            

        }
        int degree = 0;
        for (auto &p : count) {
            degree = max(degree, p.second);
        }
        int minLen = nums.size();
        for (auto &p : count) {
            if (p.second == degree) {
                int x = p.first;
                int length = last[x] - first[x] + 1;
                minLen = min(minLen, length);
            }
        }
        
        return minLen;

        
    }
};