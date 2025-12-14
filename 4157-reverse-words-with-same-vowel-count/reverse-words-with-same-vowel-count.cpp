class Solution {
public:
    string reverseWords(string s) {
        int vwlCnt=0; // vowel cnt in first word
        int i=0;
        string ans="";
        while(i<s.size() && s[i]!=' '){
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                vwlCnt++;
            }
            ans+=s[i];
            i++;
        }
        i++;
       
        for(int j=i; j<s.size(); j++){
             int cnt=0;
            string st="";
            while(j<s.size() and s[j]!=' '){
                 if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u'){
                cnt++;
                 }
                 st+=s[j];   
                 j++;     
            }
            if(cnt==vwlCnt){
                reverse(st.begin(),st.end());
            }
            ans+=" ";
            ans+=st;
        }
        return ans;
    }
};