class Solution {
public:
    bool check(vector<int>&arr, int mid,int m,int k){
        int b=0;
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=mid){
                cnt++;
            }
            else{
                b+=cnt/k;
                cnt=0;

            }
        }
          b+=cnt/k;
          return b>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        int low=0;
        int high=*max_element(arr.begin(),arr.end());
        int res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(arr,mid,m,k)){
                res=mid;
                high=mid-1;

            }
            else{
                low=mid+1;

            }
        }

        return res;
    }
};