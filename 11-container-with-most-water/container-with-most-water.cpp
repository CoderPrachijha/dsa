class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int lp=0;
        int rp=height.size()-1;

        while(lp<rp){
                int  w=rp-lp;
                int ht=min(height[lp],height[rp]);
                int area=w*ht;
                ans=max(ans,area);
                height[lp]<height[rp]?lp++:rp--;

            }
        
        return ans;
        
        
    }
};