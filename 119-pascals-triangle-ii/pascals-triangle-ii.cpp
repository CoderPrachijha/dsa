class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row;
        long long ans = 1;

        for (int i = 0; i <= rowIndex; i++) {
            if (i == 0) ans = 1;
            else {
                ans = ans * (rowIndex - i + 1);
                ans = ans / i;
            }
            row.push_back(ans);
        }

        return row;
    }
};
