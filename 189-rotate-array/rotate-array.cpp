class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return;
        k = k % n;

        int i, j;

        // reverse last k elements
        i = n - k;
        j = n - 1;
        while(i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

        // reverse first n-k elements
        i = 0;
        j = n - k - 1;
        while(i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }

        // reverse whole array
        i = 0;
        j = n - 1;
        while(i < j) {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
};
