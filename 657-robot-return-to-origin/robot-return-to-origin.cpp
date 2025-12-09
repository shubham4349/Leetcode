class Solution {
public:
    bool judgeCircle(string moves) {
        int originX=0;
        int originY=0;
        int x=0;
        // int down=0;
        // int left=0,right=0;
        int y=0;

        for(char ch:moves){
            if(ch=='U') y++;
            else if(ch=='D')y--;
            else if(ch=='L')x++;
            else x--;
        }
        if(x==0 and y==0) return true;
        return false;
    }
};