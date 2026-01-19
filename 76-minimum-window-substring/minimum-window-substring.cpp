class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>freq(256,0);
        for(char c:t) freq[c]++;
        int left=0, cnt=t.size();
        int minlen=INT_MAX, start=0;
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]>0) cnt--;
            freq[s[i]]--;

            while(cnt==0){
                if(i-left +1<minlen){
                    minlen=i-left+1;
                    start=left;
                }
                freq[s[left]]++;
                if(freq[s[left]]>0) cnt++;
                left++;

            }
        }
        return(minlen==INT_MAX)?"":s.substr(start,minlen);


        
    }
};