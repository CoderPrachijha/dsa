class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int minh=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]<minh){
                minh=arr[i];
            }
            
        }
        return minh;
        
    }
};