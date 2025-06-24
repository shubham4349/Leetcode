class Solution {
public:
    int maxPower(string s) {
        
        int n=s.length();

        int count=1;
        int maxcount=1;
        int i=0;
        while(i<n-1){
            if(s[i]==s[i+1]) {
                count++;
                maxcount= max(maxcount, count);
            } else count=1;
            i++;
        }
        return maxcount;
    }
};