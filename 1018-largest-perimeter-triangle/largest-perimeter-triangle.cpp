class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());  // sort in descending order
        for (int i = 0; i + 2 < nums.size(); i++) {
            int a = nums[i], b = nums[i+1], c = nums[i+2];
            if (b + c > a) { // valid triangle
                return a + b + c;
            }
        }
        return 0;
        
    }
};