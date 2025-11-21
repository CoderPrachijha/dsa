class Solution {
public:
    int countAtMostK(vector<int> &arr, int k) {
        int n = arr.size();
        int res = 0;
        int left = 0;
        unordered_map<int, int> freq;

        for (int right = 0; right < n; right++) {
            freq[arr[right]]++;
            if (freq[arr[right]] == 1)
                k--;

            while (k < 0) {
                freq[arr[left]]--;
                if (freq[arr[left]] == 0)
                    k++;
                left++;
            }

            res += (right - left + 1);
        }
        return res;
    }

    int subarraysWithKDistinct(vector<int>& arr, int k) {
        return countAtMostK(arr, k) - countAtMostK(arr, k - 1);
    }
};
