class Solution {
public: 
    void bfs(int row, int col,vector<vector<char>>& grid,vector<vector<bool>>& vis){
            vis[row][col]= true;
             queue<pair<int,int>> q;
             q.push({row,col});
            //  vector<int> r= {-1,0,1,0}; // up,right,down,left
            //  vector<int> c={0,1,0,-1};
                vector<int> d_r={1,0,0,-1}; // down, left , right ,up
                vector<int> d_c={0,-1,1,0};

             while(!q.empty()){
                   int x = q.front().first;
                   int y = q.front().second;
                   q.pop();
                   for(int i=0; i<4; i++){
                     int nrow= x+ d_r[i]; // new row
                     int ncol= y+ d_c[i]; // new col
                     if(nrow>=0 and nrow<grid.size() and ncol>=0 and ncol<grid[0].size() and grid[nrow][ncol]=='1' and vis[nrow][ncol]==false){
                        vis[nrow][ncol]= true;
                        q.push({nrow,ncol});
                     }
                   }
             }

    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int m=grid.size(); // row
        int n= grid[0].size(); // col
        vector<vector<bool>> vis(m,vector<bool>(n,false)); // visited nodes
       
        int count=0; // no of islands
    
       for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1' and vis[i][j]==false){
                    bfs(i,j,grid,vis); // calling bfs func
                    count++;
                }
            }
       }
       return count;
    }
};