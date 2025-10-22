class Solution {
  public:
    void setZeroes(vector<vector<int>> &mat) {
        // code here
        int m=mat.size();
        int n=mat[0].size();
        vector<bool>rows(m,false),cols(n,false);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    rows[i]=true;
                    cols[j]=true;
                    
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]||cols[j]){
                    mat[i][j]=0;
                }
                
            }
            
        }
    }
};