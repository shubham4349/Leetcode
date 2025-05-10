class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<int>> maxLocal(row-2, vector<int>(col-2,0));

        for(int i =0; i<row-2; i++){
            for(int j =0; j<col-2; j++){
                maxLocal[i][j] = maxm(grid, i, j); // centered around i+1 h bete, so i se i+2 , j se j+2 jayega , mind it!!
            }
        }
        return maxLocal;

    }
    int maxm (vector<vector<int>>& grid, int x , int y){

        int maxi = grid[x][y];

        for(int i =x; i<x+3; i++){
            for(int j =y; j<y+3; j++){
                if(grid[i][j]>maxi) maxi = grid[i][j];
            }
        }
        return maxi;
    }
};