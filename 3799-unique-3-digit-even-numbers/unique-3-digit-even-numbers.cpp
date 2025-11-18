class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> st;
        

        for (int i = 0; i < n; i++) {
            if (digits[i] == 0) continue;
            for (int j = 0; j < n; j++) {
                if (j == i) continue; 

                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue; 
                    int d = digits[i] * 100 + digits[j] * 10 + digits[k];


                    
                    if (digits[k] % 2 == 0)
                        st.insert(d); 
                }
            }
        }
        return st.size();
    }
};
