class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int cnt = 0;   // initialize

        sort(arr2.begin(), arr2.end());

        for (int i = 0; i < n; i++) {
            bool ok = true;

            for (int j = 0; j < m; j++) {
                int ans = abs(arr1[i] - arr2[j]);

                if (ans <= d) {
                    ok = false;
                    break;   
                }
            }

            if (ok) cnt++;   
        }

        return cnt;
    }
};
