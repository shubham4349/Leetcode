class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        // condn for black
        // xy-> x is odd,y is odd
        // x is even , y is even

        // coordinate1[0]='0'+(coordinate1[0]-'a'+1); // still a character but '1'
        // coordinate2[0]= '0'+(coordinate2[0]-'a'+1)

        int x1=coordinate1[0]-'a'+1;
        int y1=coordinate1[1]-'0';
        bool isBlack1=false;
        if(x1%2==1 and y1%2==1) isBlack1=true;
        else if(x1%2==0 and y1%2==0) isBlack1=true;

        int x2=coordinate2[0]-'a'+1;
        int y2=coordinate2[1]-'0';

         bool isBlack2=false;
        if(x2%2==1 and y2%2==1) isBlack2=true;
        else if(x2%2==0 and y2%2==0) isBlack2=true;

        return isBlack1==isBlack2;

    }
};