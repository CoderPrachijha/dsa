class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> losscount;
        for(auto &m: matches){
            int winner=m[0];
            int losser=m[1];
            if(losscount.find(winner)==losscount.end()){
                losscount[winner]=0;

            }
            losscount[losser]++;

        }
        vector<int> zeroloss,oneloss;
        for(auto &it : losscount) {
            if(it.second == 0)
                zeroloss.push_back(it.first);
            else if(it.second == 1)
                oneloss.push_back(it.first);
        }


        
        sort(zeroloss.begin(),zeroloss.end());
        sort(oneloss.begin(),oneloss.end());
        return { zeroloss,oneloss};

        



        
    }
};