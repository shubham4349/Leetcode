class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
         int r=grid.size();
         int c=grid[0].size();
        // pehle row ko pali banao, and steps cnt kr
        // then col ko similarly cnt
        // he return the minm cnt
        // vector<vector<int>> gridd=grid;
        int rc=0,cc=0;
        for(int i=0; i<r; i++){
            int x=0;
            int y=c-1;
            while(x<=y){
                if(grid[i][x]!=grid[i][y]) rc++;
                x++;y--;
            }
        }
        for(int j=0; j<c; j++){
            int x=0;
            int y=r-1;
            while(x<=y){
                if(grid[x][j]!=grid[y][j])cc++;
                x++;y--;
            }
        }
        return min(cc,rc);
    }
};