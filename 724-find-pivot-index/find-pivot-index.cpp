class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        long long leftsum=0;
        long long  totalsum=accumulate(arr.begin(),arr.end(),0LL);
        for(int i=0; i<n;i++){
            totalsum-=arr[i];
            if(leftsum==totalsum){
                return i;
                
            }
            leftsum+=arr[i];
            
        }
        return -1;
        
    }
};