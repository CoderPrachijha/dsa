class Solution {
public:

    int longesthistogram(vector<int>& heights, int c) {

        stack<int> st;
        int maxArea = 0;

        for(int i = 0; i <= c; i++) {

            int currHeight = (i == c ? 0 : heights[i]);

            while(!st.empty() && currHeight < heights[st.top()]) {

                int height = heights[st.top()];
                st.pop();

                int width;
                if(st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;

                maxArea = max(maxArea, height * width);
            }

            st.push(i);
        }

        return maxArea;
    }


    int maximalRectangle(vector<vector<char>>& matrix) {

        if(matrix.empty()) return 0;

        int r = matrix.size();
        int c = matrix[0].size();

        vector<int> height(c, 0);

        // first row
        for(int j = 0; j < c; j++) {
            if(matrix[0][j] == '1')
                height[j] = 1;
        }

        int res = longesthistogram(height, c);

        for(int i = 1; i < r; i++) {
            for(int j = 0; j < c; j++) {

                if(matrix[i][j] == '1')
                    height[j] += 1;
                else
                    height[j] = 0;
            }

            res = max(res, longesthistogram(height, c));
        }

        return res;
    }
};