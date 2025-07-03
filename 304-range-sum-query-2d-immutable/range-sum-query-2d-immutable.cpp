class NumMatrix {
private: 
    int row, col;
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        row = matrix.size();
        col = matrix[0].size();
        prefix = vector<vector<int>> (row+1, vector<int>(col+1, 0)); // m+1*n+1 matrix // with i,j 0,0 every box 1st row 1st col is 0;
        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                prefix[i][j]= prefix[i-1][j]+ prefix[i][j-1]- prefix[i-1][j-1] + matrix[i-1][j-1]; // prefi i-1,j-1 is the duplicate/ overlapped so minusing it once
             }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return  prefix[row2+1][col2+1]-prefix[row2+1][col1]-prefix[row1][col2+1] + prefix[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
 // brute;
//  for(int i=i1; i<=i2; i++){ // i1= row1
//     for(int j=j1; j<=j2; j++){
//         sum += nums[i][j];
//     }
//  }