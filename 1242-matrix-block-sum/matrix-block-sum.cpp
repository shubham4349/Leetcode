class Solution {
public:
     
    int blockSum(vector<vector<int>>& mat, int k, int i, int j){

        int sum=0;
        int m=mat.size();
        int n= mat[0].size();
        // int r,c;
        // r = max(0,i-k);
        // c = max(0,j-k);
        for(int r=max(0,i-k); r<=min(m-1,i+k); r++){
            for(int c=max(0,j-k); c<=min(n-1, j+k); c++){
                sum += mat[r][c];
            }
        }
        return sum;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        
        int row=mat.size();
        int col= mat[0].size();
        
        vector<vector<int>> ans(row, vector<int>(col,0));
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                 ans[i][j] = blockSum(mat,k,i,j);
            }
        }
        return ans;
    }
};