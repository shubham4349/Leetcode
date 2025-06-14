class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int r=mat.size();
        int c=mat[0].size();
        int r_sum=0; // primary diagonal
        int l_sum=0; //secondry diag

        int j=0;
        for(int i=0; i<r; i++){
                 r_sum += mat[i][j];
                j++;    
        }
         int k=0;
        for(int l=c-1; l>=0; l--){
                l_sum += mat[k][l];
                k++;
            }
        
        int final_sum= r_sum+l_sum;

        if(r%2==0) return final_sum;
        // odd no of row
        final_sum -= mat[r/2][c/2];
        return final_sum;
       
    }
};