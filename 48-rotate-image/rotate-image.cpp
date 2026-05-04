class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
      //  vector<vector<int>> helper(matrix);
        int m= matrix.size();
        int n= matrix[0].size();
        
        // // CONCEPT: 90 degree rortaion-> Transpose + row reversal

        // //  transpose
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         matrix[j][i]= helper[i][j];
        //     }
        // }
        // // row reversal
        // for(int i=0; i<m; i++){
        //    int s=0;
        //    int e= n-1;
        //    while(s<=e){
        //      swap(matrix[i][s], matrix[i][e]);
        //      s++;
        //      e--;
        //    }

        // 4-may-26
        vector<vector<int>> ans(m,vector<int>(n));
        int i=0; 
        for(int col=0; col<n; col++){
            int j=0;
            for(int row=m-1; row>=0; row--){
               // ans[i].push_back(matrix[row][col]);
                // [[0,0,0,7,4,1],[0,0,0,8,5,2],[0,0,0,9,6,3]]
                ans[i][j]=matrix[row][col];
                j++;
            }
            i++;
        }
        matrix=ans;
    }
};