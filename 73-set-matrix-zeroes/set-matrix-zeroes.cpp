class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();

        vector<int>rowMarker(row,-1);
        vector<int>colMarker(col,-1);

        for (int i = 0; i<row; i++) {
            for (int j = 0; j<col; j++) {
                if (matrix[i][j] == 0) {
                    rowMarker[i] = 0; // -1 0 -1
                    colMarker[j] = 0; // -1
                }                     //  0                 
                                      // -1
            }
        }
       // copy pe dry run kr bete sab visulaise hoga
        for (int i= 0; i< row; i++) {
            for (int j =0; j <col; j++) {
                if (rowMarker[i]==0 or colMarker[j]==0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
