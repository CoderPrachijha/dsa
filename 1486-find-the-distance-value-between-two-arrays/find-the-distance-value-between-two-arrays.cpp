class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int cnt = 0;

        for (int x : arr1) {
            int l = 0, r = arr2.size() - 1;
            bool ok = true;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (abs(x - arr2[mid]) <= d) {
                    ok = false;
                    break;
                }
                else if (arr2[mid] < x) {
                    l = mid + 1;
                }
                else {
                    r = mid - 1;
                }
            }

            if (ok) cnt++;   
        }

        return cnt;
    }
};
