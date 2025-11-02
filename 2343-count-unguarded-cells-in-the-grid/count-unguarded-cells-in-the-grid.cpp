class Solution {
public:
    void moving(vector<vector<char>>& mat, int r, int c){
        // up
        for(int i=r-1; i>=0; i--){
            if(mat[i][c]=='G' or mat[i][c]=='W') break;
             mat[i][c]='R'; // guarg range=3
        }
        // down
         for(int i=r+1; i<mat.size(); i++){
            if(mat[i][c]=='G' or mat[i][c]=='W') break;
             mat[i][c]='R'; 
        }
        // left
         for(int j=c-1; j>=0; j--){
            if(mat[r][j]=='G' or mat[r][j]=='W') break;
            mat[r][j]='R';
        }
        // right
        for(int j=c+1; j<mat[0].size(); j++){
             if(mat[r][j]=='G' or mat[r][j]=='W') break;
            mat[r][j]='R';
        }

    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        // solve first 999
        // jaha jaha walls h waha W likh
        // Guards present h wha G likh
        // guards ka range h waha bhi R likh
        // fir vo cells cout kr jo w,g,r na ho!!!

        vector<vector<char>> matrix(m,vector<char>(n,'F'));
        // marking gurads
        for(int i=0; i<guards.size(); i++){
                int x=guards[i][0];
                int y=guards[i][1];
                matrix[x][y]='G'; // G=1
        }
        // marking walls
        for(int i=0; i<walls.size(); i++){
                int x=walls[i][0];
                int y=walls[i][1];
                matrix[x][y]='W'; // w=2
        }
        for(auto &vec: guards){
            int x=vec[0]; // {0,0}
            int y=vec[1]; //{1,1}
            moving(matrix,x,y);  // guard ko traverse kr rhe
        }
        int cnt=0;
         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]=='F'){
                   cnt++;
                }
            }
        }
        return cnt;
    }
};