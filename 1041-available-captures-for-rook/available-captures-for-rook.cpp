class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n=board.size();
        int rookRow,rookCol;
        for(int i=0; i<n; i++){ // rook posn find kra
            for(int j=0; j<n; j++){
                if(board[i][j]=='R'){
                    rookRow=i;
                    rookCol=j;
                    break;
                }
            }
        }
        int count=0;
        // move to charo diren-> up down left right

        // 1 up-> col same, row decrease
            for(int i=rookRow; i>=0; i--){
                  if(board[i][rookCol]=='p'){
                    count++;
                    break; // kyuki ek hi pwn cnt hoga
                  }
                  if(board[i][rookCol]=='B') break;
            }
        // 2 down-> col same row increase
        for(int i=rookRow; i<n; i++){
                  if(board[i][rookCol]=='p'){
                    count++;
                    break;
                  }
                  if(board[i][rookCol]=='B') break;
            }
        // Right-> col increase row same
        for(int j=rookCol; j<n; j++){
                   if(board[rookRow][j]=='p'){
                    count++;
                    break;
                  }
                  if(board[rookRow][j]=='B') break;
            }
        // 4  left-> col ghat rha row same
         for(int j=rookCol; j>=0; j--){
                  if(board[rookRow][j]=='p'){
                    count++;
                    break;
                  }
                  if(board[rookRow][j]=='B') break;
            }
        return count;
    }
};