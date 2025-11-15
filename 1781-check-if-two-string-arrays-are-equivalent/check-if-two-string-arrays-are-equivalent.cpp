class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(string &W: word1){
            s1+=W;

        }
        for(string &W: word2){
            s2+=W;
            
        }
        if(s1==s2){
            return true;

        }
        return false;
    }
};