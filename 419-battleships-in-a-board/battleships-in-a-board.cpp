class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
          // bas tumhe adjacent x ko dekhna h
          // agar / h skip kro
          // agar cntituos x h to sirf pehla count kro baki skip
          // mujhe bas ek dusre se nhi sate hu x's count krne h

          int r=board.size();
          int c=board[0].size();
          int cnt=0;
          for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(board[i][j]!='X') continue;
                if(i>0 and board[i-1][j]=='X') continue; // upar wala x
                if(j>0 and board[i][j-1]=='X') continue; // lef wala x
                cnt++;
            }
          }
          return cnt;
    }
};