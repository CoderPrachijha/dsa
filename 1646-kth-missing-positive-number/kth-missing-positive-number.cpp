class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
       
        for(int i=0;i<n;i++){
            int missing=arr[i]-(i+1);
            
            if(missing>=k){
                return k+i;
            }
        }
        return arr[n-1]+(k-(arr[n-1]-n));
        
    }
};