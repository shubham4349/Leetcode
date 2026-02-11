class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp="";
        for(char& ch:s){
            if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')) temp+=ch;
        }
        reverse(temp.begin(),temp.end());
        int i=0;
        for(char& ch:s){
            if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
                ch=temp[i];
                i++;
            }
        }
        return s;
    }
};