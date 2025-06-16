class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n= s.length();
        int count=0;
        for(int i=0; i<= n-3; i++){
            if(s[i]!=s[i+1] and s[i+1]!=s[i+2] and s[i+2]!=s[i]) count++;
        }
        return count;
    }
};