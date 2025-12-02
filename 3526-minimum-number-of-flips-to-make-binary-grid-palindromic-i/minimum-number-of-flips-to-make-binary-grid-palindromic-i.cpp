class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
         int r=grid.size();
         int c=grid[0].size();
        // pehle row ko pali banao, and steps cnt kr
        // then col ko similarly cnt
        // he return the minm cnt
        vector<vector<int>> gridd=grid;
        int rowcnt=0;
        for(int i=0; i<r; i++){
            int x=0;
            int y=c-1;
            while(x<=y){
                if(grid[i][x]!=grid[i][y]){
                    // grid[i][x]=grid[i][y];
                    // grid[i][y]=grid[i][x];
                    rowcnt++;  
                }
                x++;y--;
            }
        }
        int colcnt=0;
        for(int j=0; j<c; j++){
            int x=0;
            int y=r-1;
            while(x<=y){
                if(grid[x][j]!=grid[y][j]){ 
                //    grid[x][j]=grid[y][j];
                //    grid[y][j]=grid[x][j];
                    colcnt++;  
                }
                x++;y--;
            }
        }
        return min(rowcnt,colcnt);
    }
};