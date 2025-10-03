class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int n = 0; n < numRows; n++) {
            vector<int> row;
            long long ans = 1;

            for (int r = 0; r <= n; r++) {
                if (r == 0) ans = 1;
                else {
                    ans = ans * (n - r + 1);
                    ans = ans / r;
                }
                row.push_back(ans);
            }

            result.push_back(row);
        }

        return result;
    }
};
