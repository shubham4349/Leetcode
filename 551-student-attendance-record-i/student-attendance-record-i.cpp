class Solution {
public:
    bool checkRecord(string s) {
        int n=s.size();
        if(n==1){
            if(s[0]=='A') return true;
            else if(s[0]=='L') return true;
            else return true;
        }
        int abCnt=0;
        for(char &ch:s){
            if(ch=='A') abCnt++;
        }
        // abcnt<2
        if(abCnt>=2) return false; 
        for(int i=0; i<n-2; i++){
            if(s[i]=='L' and s[i+1]=='L' and s[i+2]=='L') return false; 
        }
        return true;
    }
};