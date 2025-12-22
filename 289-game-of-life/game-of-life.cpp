class Solution {
public:
    // bool rule1(vector<vector<int>>& board, int x,int y){
    //      int r=board.size();
    //      int c=board[0].size();

    //      // 2 se kam live neightbour then return true;
    //      int sum=0;
    //      sum+=board[]
    // }
    int neighbourCount(vector<vector<int>> &board, int x,int y){
         int r=board.size();
         int c=board[0].size();

         int sum=0;
         if(x-1>=0)  sum+=board[x-1][y]; // top
         if(x+1<r)  sum+=board[x+1][y]; // bottom
         if(y-1>=0) sum+=board[x][y-1]; // left
         if(y+1<c) sum+=board[x][y+1]; // right

         if(x-1>=0 and y-1>=0)sum+=board[x-1][y-1]; // top-left 
         if(x-1>=0 and y+1<c) sum+=board[x-1][y+1]; // top-right
         if(x+1<r and y-1>=0)  sum+=board[x+1][y-1]; // bottm-left
         if(x+1<r and y+1<c) sum+=board[x+1][y+1]; // bottm-right
         return sum;     
         
    }
    void gameOfLife(vector<vector<int>>& board) {
         int r=board.size();
         int c=board[0].size();
         // 1-lives,0-dead
         // apply all 4 rule and tarnsfomr the matris
         vector<vector<int>> temp=board;
         for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int count=neighbourCount(board,i,j);
                if(board[i][j]==1){// live cell
                    if(count<2) temp[i][j]=0;
                    else if(count==2 or count==3) continue;
                    else temp[i][j]=0;  // rule 3
                }
                else{ // dead cell
                    if(count==3) temp[i][j]=1;
                }
            }
         }
         board=temp;
         
    }
};