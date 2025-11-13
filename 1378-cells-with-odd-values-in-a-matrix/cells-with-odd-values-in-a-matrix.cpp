class Solution {
public:
    void helperR(vector<vector<int>>& mat, int x,int size){
           for(int j=0; j<size; j++){
                  mat[x][j]++; //  x row ke sare ele ko inc kiya

           }
    }
    void helperC(vector<vector<int>>& mat, int x,int size){
           for(int i=0; i<size; i++){
                  mat[i][x]++; 

           }
    }
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        
        vector<vector<int>> mat(m,vector<int>(n,0));
        
        for(int i=0; i<indices.size(); i++){
            // for(int j=0; j<indices[i].size(); j++){
                helperR(mat,indices[i][0],n);
                helperC(mat,indices[i][1],m);
            // }
        }
        int cnt=0;
        for(int i=0; i<m; i++){
              for(int j=0; j<n; j++){
                 if(mat[i][j]%2==1) cnt++;
              }
           }
        return cnt;
    }
};