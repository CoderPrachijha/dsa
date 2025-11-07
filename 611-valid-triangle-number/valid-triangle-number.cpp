class Solution {
public:
    int triangleNumber(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
        int res=0;
        for(int i=n-1;i>=1;i--){
            int left=0;
            int right=i-1;
            while(left<right){
               
                if(arr[left]+arr[right]>arr[i]){
                    res+=(right- left);
                    right--;
                    
                }
                else{
                    left++;
                }
                
            }
        }
        return res;
        
    }
};