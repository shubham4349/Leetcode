class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        for(int i=0; i<n; i++){
            string hey="";
            while(i<n and s[i]!=' '){
                hey+=s[i];
                i++;
            }
            reverse(begin(hey),end(hey));
           if(hey!=" ") ans+=hey;
            if(i!=n) ans+=' '; 
        }
        return ans;
    }
};