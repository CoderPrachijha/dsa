class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        unordered_map<char,int> freq;

        for(char ch : word){
            freq[ch]++;
        }

        int count = 0;

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(freq[ch] > 0 && freq[ch - 'a' + 'A'] > 0){
                count++;
            }
        }

        return count;
    }
};