class Solution {
public:
    int checkAllDir(vector<vector<int>>& grid, int x,int y){
        int ans=0;
        // top
        if(x==0 or grid[x-1][y]==0) ans++;
        // bottom
        if(x==grid.size()-1 or grid[x+1][y]==0) ans++;
        // left
        if(y==0 or grid[x][y-1]==0)ans++;
         // right
         if(y==grid[0].size()-1 or grid[x][y+1]==0) ans++;
         return ans;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        // 1 ke jitne side 0 ya kuch nhi hoga then cnt++, charo side check rko
        int r=grid.size();
        int c=grid[0].size();
        int peri=0; // perimter=0
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]==1){
                    peri+=checkAllDir(grid,i,j);
                }
            }
        }
        return peri;
    }
};