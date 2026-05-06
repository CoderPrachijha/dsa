class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        for(int i=0;i<m;i++){
            int lowest_available=n-1;
            for(int j=n-1;j>=0;j--){
                if(boxGrid[i][j]=='#'){
                    boxGrid[i][j]='.';
                    boxGrid[i][lowest_available]='#';
                    lowest_available--;
                }
                else if(boxGrid[i][j]=='*'){
                    lowest_available=j-1;
                }
            }
        }
        vector<vector<char>> rotatebox(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rotatebox[j][m-1-i]=boxGrid[i][j];

            }
        }
        return rotatebox;
        
    }
};