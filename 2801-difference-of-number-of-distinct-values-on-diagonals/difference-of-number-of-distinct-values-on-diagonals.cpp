class Solution {
public:
    int leftAbove(vector<vector<int>>& grid,int x,int y){
         int r=grid.size();
        int c=grid[0].size();
        
        set<int> diag;
        // for(int i=x-1; i>=0; i--){
        //     for(int j=y-1; j>=0; j--){
        //         set.insert()
        //     }
        // } 
        int i=x-1;
        int j=y-1;
        while(i>=0 and j>=0){
           diag.insert(grid[i][j]);
           i--;
           j--;
        }
        return diag.size();
    }
    int rightBelow(vector<vector<int>>& grid,int x,int y){
       int r=grid.size();
        int c=grid[0].size();
        
        set<int> diag;
        int i=x+1;
        int j=y+1;
        while(i<r and j<c){
           diag.insert(grid[i][j]);
           i++;
           j++;
        }
        return diag.size();
    }
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> ans(r,vector<int>(c,0));

        for(int i=0; i<r; i++){
            for(int j=0; j<c;j++){
                int la= leftAbove(grid,i,j);
                int rb= rightBelow(grid,i,j);
                int diff= abs(la-rb);
                ans[i][j]=diff;
            }
        }
        return ans;
    }
};