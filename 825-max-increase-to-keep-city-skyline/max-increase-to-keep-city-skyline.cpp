class Solution {
public:
    int helper(int row, int col, vector<vector<int>>& grid){
         int maxRow= INT_MIN;
         for(int j=0; j<grid[0].size(); j++){ // row max find kr rhe col traverse krke
             maxRow=max(maxRow,grid[row][j]);
         }
         int maxCol= INT_MIN;
         for(int i=0; i<grid.size(); i++){ // 
             maxCol=max(maxCol,grid[i][col]);
         }
         return min(maxRow,maxCol);

    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        // skyline smae rehni chahiye
        // row ki skyline--> uss row ka max vice versa for column

        // har cube ke liye...us col and row me jao..dono ka maxm nikal
        // usme jo minm vo vo betha do
        int diffSum=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                 int maxHeight=helper(i,j,grid);
                 diffSum+=(maxHeight-grid[i][j]);
            }
        }
        return diffSum;

    }
};