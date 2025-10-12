class Solution {
public:
    char conversion(string st){
        int n=st.size();
        int sum=0;
        for(int i=0; i<n; i++){
               sum+=st[i]-'a';
        }
        int appendVal=sum%26;
        char res=char('a'+appendVal);
        return res;
    }
    string stringHash(string s, int k) {
        int n=s.size();

        int substringSize=k;
        string ans="";

        for(int i=0; i<n; i+=k){
            string st=s.substr(i,k);
            char ch=conversion(st);
            ans+=ch;
        }
        return ans;
    }
};