class Solution {
public:
    bool isPrefix(string& s, string& t){
         int n=s.size();
         int m=t.size();
         if(n>m) return false;// kbhi prefix nhi ho skta

         for(int i=0; i<n; i++){
            if(s[i]!=t[i]) return false;
         }
         return true; // start se sare car match khaye
    }
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> sent;
        string st="";
        for(auto&ch :sentence){
            if(ch==' '){
                sent.push_back(st);
                st="";
            } else{
                st+=ch;
            }
        }  
        if(!st.empty()) sent.push_back(st); 
        for(int i=0; i<sent.size(); i++){
             if(isPrefix(searchWord,sent[i])){
                 return i+1;
                 break;
             }
        }
        return -1;
    }
};