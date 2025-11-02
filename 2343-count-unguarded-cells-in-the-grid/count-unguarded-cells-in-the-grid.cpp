class Solution {
public:
    void moving(vector<vector<int>>& mat, int r, int c){
        // up
        for(int i=r-1; i>=0; i--){
            if(mat[i][c]==1 or mat[i][c]==2) break;
             mat[i][c]=3; // guarg range=3
        }
        // down
         for(int i=r+1; i<mat.size(); i++){
            if(mat[i][c]==1 or mat[i][c]==2) break;
             mat[i][c]=3; // guarg range=3
        }
        // left
         for(int j=c-1; j>=0; j--){
            if(mat[r][j]==1 or mat[r][j]==2) break;
            mat[r][j]=3;
        }
        // right
        for(int j=c+1; j<mat[0].size(); j++){
             if(mat[r][j]==1 or mat[r][j]==2) break;
            mat[r][j]=3;
        }

    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        // solve first 999
        // jaha jaha walls h waha W likh
        // Guards present h wha G likh
        // guards ka range h waha bhi R likh
        // fir vo cells cout kr jo w,g,r na ho!!!

        vector<vector<int>> matrix(m,vector<int>(n,0));
        // marking gurads
        for(int i=0; i<guards.size(); i++){
                int x=guards[i][0];
                int y=guards[i][1];
                matrix[x][y]=1; // G=1
        }
        // marking walls
        for(int i=0; i<walls.size(); i++){
                int x=walls[i][0];
                int y=walls[i][1];
                matrix[x][y]=2; // w=2
        }
        // for(int i=0; i<m; i++){
        //     for(int j=0; j<n; j++){
        //         if(matrix[i][j]=='G'){
        //             moving(matrix,i,j);
        //         }
        //     }
        // }
        for(auto &vec: guards){
            moving(matrix,vec[0],vec[1]);  // guard ko traverse kr rhe
        }
        int cnt=0;
         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                   cnt++;
                }
            }
        }
        return cnt;
    }
};