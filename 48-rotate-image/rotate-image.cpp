class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> helper(matrix);
        int m= matrix.size();
        int n= matrix[0].size();
        
        // CONCEPT: 90 degree rortaion-> Transpose + row reversal

        //  transpose
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                matrix[j][i]= helper[i][j];
            }
        }
        // row reversal
        for(int i=0; i<m; i++){
           int s=0;
           int e= n-1;
           while(s<=e){
             swap(matrix[i][s], matrix[i][e]);
             s++;
             e--;
           }
        }


        

    }
};