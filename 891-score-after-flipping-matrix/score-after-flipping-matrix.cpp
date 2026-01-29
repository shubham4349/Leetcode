class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // condn -> agar pehla element row ka 0 h-> then flip
        // condn2-> agar cnt 0> cnt1 in col, then flip it
        int n=grid.size();
        int m=grid[0].size();
        // row traversing
        for(int i=0; i<n; i++){
            if(grid[i][0]==0){
                // flip
                for(int j=0; j<m; j++){
                     if(grid[i][j]==0) grid[i][j]=1;
                     else grid[i][j]=0; 
                }
            }   
        }
        // col traversing  
        for(int j=0; j<m; j++){
             int cnt0=0,cnt1=0;
            for(int i=0; i<n; i++){
                  if(grid[i][j]==0) cnt0++;
                  else cnt1++;
            }
            if(cnt0>cnt1){
                // flip
                for(int i=0; i<n; i++){
                  if(grid[i][j]==0) grid[i][j]=1;
                  else grid[i][j]=0;
                 }
            }
        }
        // binary to decimal
        int sum=0;
        for(int i=0; i<n; i++){
            int num=0;
            int cnt=0;
            for(int j=m-1; j>=0; j--){
                num+=pow(2,cnt)*grid[i][j];
                cnt++;
            }
            sum+=num;
        }
        return sum;
    }
};