class Solution {
public: 
         // approach1-> brute
         // isdigit-> builtin h
    bool isDigit(char ch){
         if(ch>='0' and ch<='9') return true;
         return false;
    }
    string deleteNonDigit(int idx, string &s){
        for(int i=idx; i>=0; i--){
            if(!isDigit(s[i]) and s[i]!='.'){
                 s[i]='.'; // marking
                 break;
            }
        }
        return s;
    }
    string clearDigits(string s) {
        
        int n=s.length();
        for(int i=0; i<n; i++){
           if(isDigit(s[i])){
               s[i]='.';// marking
               deleteNonDigit(i-1,s);
           }
        }
        string ans;
        for(char ch:s){
          if(ch!='.')ans.push_back(ch);
        }
        return ans;
    }
};