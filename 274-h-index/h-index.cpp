class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int count=0;
        sort(citations.rbegin(),citations.rend());
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1){
                count++;
            }
            else{
                break;
            }

        }
        return count;
        
    }
};