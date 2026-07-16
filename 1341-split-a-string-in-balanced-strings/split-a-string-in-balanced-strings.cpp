class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int r=0,l=0; // r cnt and l cnt
        int cnt=0;// substr ki cnt
        for(int i=0; i<n; i++){
            if(s[i]=='R') r++;
            else l++;

            if(r==l){
                r=0;
                l=0;
                cnt++;
            }
        }
        return cnt;
    }
};