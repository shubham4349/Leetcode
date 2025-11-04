class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<int> row(m,0),col(n,0); 
        // row vec se pehle sare row i=0->m me no of 1 nikal lenge
        // aur no of zero= m-no of 1
        // similiarly col ke liye bhi yhi kr
        for(int i=0; i<m;i++ ){
            for(int j=0; j<n; j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
              }
          }
    vector<vector<int>> diff(m,vector<int>(n,0));
        for(int i=0; i<m; i++){
              for(int j=0; j<n; j++){
                   int ones=row[i]+col[j];
                   int zero= m-row[i]+n-col[j];
                   diff[i][j]=ones-zero;
              }
        }
    return diff;
    }
};