class Solution {
public:
    int minRotations(string s) {
        int n=s.length();

        // 0 se 9 circular me h
        // kisi num se kis aur num pe jane ka 2 tarika
        // clockwise and anti
        // chose the shortest path
        // eg, 1->9  : 1,2,,,9 and 1,0,9 
        int cnt=0;
        int ptr=0;
        for(int i=0; i<n; i++){
           int d=abs(s[i]-'0'-ptr);
           cnt+=min(d,10-d);
           ptr=s[i]-'0';
        }
        return cnt;
    }
};