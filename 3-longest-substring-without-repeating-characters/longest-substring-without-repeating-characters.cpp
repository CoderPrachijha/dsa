class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int maxlen=0;
        vector<int> lastIndex(256,-1);
        for(int right=0;right<s.length();right++){
            char curr=s[right];
            if(lastIndex[curr]>=left){
                left=lastIndex[curr]+1;
                
            }
            lastIndex[curr]=right;
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
        
    }
};
