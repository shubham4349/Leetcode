class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int n=s.length();
        int i=0;
        int len=1;
        int maxlen=1;

        while(i<n-1){
            if(s[i+1]-s[i]==1) {
               len++;
               maxlen = max(maxlen,len);
            }else len=1;

            i++;
        }
        return maxlen;
    }
};