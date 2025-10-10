class Solution {
public:
    int checkRow(vector<vector<int>> mat,int idx,int imp){
         for(int j=0; j<mat[0].size(); j++){
             if(j!=imp){
                if(mat[idx][j]!=0) return false;
             }
         }
         return true;
    }
    int checkCol(vector<vector<int>> mat,int imp,int idx){
         for(int i=0; i<mat.size(); i++){
             if(i!=imp) {
                    if(mat[i][idx]!=0) return false;
             }
         }
         return true;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                  if(mat[i][j]==1 and checkRow(mat,i,j) and checkCol(mat,i,j)) count++;
            }
        }
        return count;
    }
};