class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        stack<int> st;
        unordered_map<int,int> mp;
        vector<int > res(n, -1);
       
            for(int j=m-1;j>=0;j--){
               
                while(!st.empty() && st.top()<= nums2[j]){
                    st.pop();

                }
                if(st.empty())
                    mp[nums2[j]] = -1;
                else
                    mp[nums2[j]] = st.top();

                st.push(nums2[j]);
            }
            
            for(int i = 0; i < n; i++) {
                res[i] = mp[nums1[i]];
            }

            
        

        return res;
    }
};