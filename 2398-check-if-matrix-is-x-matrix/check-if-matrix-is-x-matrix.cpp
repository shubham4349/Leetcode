class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col= grid[0].size();
        
        // primary diag condn(right wali) -> i==j
        // secndry diag condn(left wali) -> i+j == row-1 

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){

                if(i==j or i+j==row-1) {
                    if(grid[i][j]==0) return false; 
                }else{
                    if(grid[i][j]!=0) return false;
                }
            }
        }
        return true;
    }
};