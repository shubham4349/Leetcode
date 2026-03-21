class Solution {
public:
    bool checkOnesSegment(string s) {
        int n=s.size();
        int cnt=0; // one ke segment ka cnt
        int i=0;
        while(i<n){
            if(s[i]=='1'){
                while(s[i]=='1') i++;
                cnt++;
            } else i++;
        }
        if(cnt>1) return false;
        return true;
    }
};