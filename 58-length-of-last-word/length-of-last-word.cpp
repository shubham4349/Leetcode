class Solution {
public:
    int lengthOfLastWord(string s) {
        
        while(!s.empty() and s.back()==' ') s.pop_back();
        int n=s.size();
        int i=n-1;
        int ans=0;
        while(i>=0 and s[i]!=' '){
            ans++;
            i--;
        }
        return ans;

    }
};