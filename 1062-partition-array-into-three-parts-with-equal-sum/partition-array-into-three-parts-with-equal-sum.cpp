class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int total = 0;
        for (int ele : arr)
            total += ele;

        if (total % 3 != 0) return false;

        int part = total / 3;
        int currSum = 0, count = 0;

        for (int i = 0; i < arr.size(); i++) {
            currSum += arr[i];

            if (currSum == part) {
                count++;
                currSum = 0; 
            }

            
            if (count == 3 && i < arr.size()) {
                return true;
            }
        }
        return false;
        
    }
};