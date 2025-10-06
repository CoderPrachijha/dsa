class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        vector<int>arr;
        for(auto i: a){
            arr.push_back(i);
            
        }
        for( auto i: b){
            arr.push_back(i);
        }
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        if(n % 2 == 1) return arr[n/2]; 
        else return (arr[n/2 - 1] + arr[n/2]) / 2.0;
        

        
    }
};