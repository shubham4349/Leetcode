class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        // l aur r me se jiska cnt jyada h __ ko whi banado
        int cntL=0;
        int cntR=0;

        for(char ch:moves){
            if(ch=='L') cntL++;
            else if(ch=='R') cntR++;
        }
        char ch;
        if(cntL>cntR){
            ch='L';
        }else if(cntL<cntR){
            ch='R';
        }else{
            ch='L'; // r bhi rkh skte
        }
        int x=0;
        for(char &cha:moves){
            if(cha=='_'){
                cha=ch;
            }
        }
        for(char ch:moves){
            if(ch=='L') x++;
            else x--;
        }
        int ans=abs(x);
        return ans;

    }
};