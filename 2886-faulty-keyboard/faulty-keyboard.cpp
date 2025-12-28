class Solution {
public:
    string finalString(string s) {
        int n=s.size();
        int i=0; 
        string ss="";
        while(i<n){
            if(s[i]=='i') reverse(ss.begin(),ss.end());
            else ss+=s[i];
            i++;
        }
        return ss;

    }
};